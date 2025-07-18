import time
import os

# Clear screen (for Windows and Unix)
def clear():
    os.system('cls' if os.name == 'nt' else 'clear')

# Print the current state of rods
def print_rods(rods, n):
    clear()
    print("\nTower of Hanoi\n")
    for level in range(n - 1, -1, -1):
        for rod in '123':
            if level < len(rods[rod]):
                print(" " * (n - rods[rod][level]) + "■" * (2 * rods[rod][level] - 1) + " " * (n - rods[rod][level]), end="  ")
            else:
                print(" " * (n - 1) + "|" + " " * (n - 1), end="  ")
        print()
    print("   1" + " " * (2 * n - 3) + "   2" + " " * (2 * n - 3) + "   3\n")
    time.sleep(1)

# Recursive Hanoi function
def hanoi(n, source, target, auxiliary, rods, total_disks):
    if n == 1:
        disk = rods[source].pop()
        rods[target].append(disk)
        print_rods(rods, total_disks)
    else:
        hanoi(n - 1, source, auxiliary, target, rods, total_disks)
        hanoi(1, source, target, auxiliary, rods, total_disks)
        hanoi(n - 1, auxiliary, target, source, rods, total_disks)

# Main
def main():
    n = int(input("Enter number of disks: "))
    rods = {'1': list(reversed(range(1, n + 1))), '2': [], '3': []}
    print_rods(rods, n)
    hanoi(n, '1', '3', '2', rods, n)

if __name__ == "__main__":
    main()
