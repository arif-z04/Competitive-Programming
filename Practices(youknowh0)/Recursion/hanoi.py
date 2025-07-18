# Global move counter
move_count = 0

def hanoi(n, start, end, aux, depth=0):
    global move_count
    indent = "  " * depth  # Indent based on recursion depth
    print(f"{indent}hanoi({n}, {start}, {end}) called")

    if n == 1:
        move_count += 1
        print(f"{indent}Move {move_count}: Move disk 1 from {start} to {end}")
        print(f"{indent}Returning from hanoi({n}, {start}, {end})")
        return

    hanoi(n - 1, start, aux, end, depth + 1)
    move_count += 1
    print(f"{indent}Move {move_count}: Move disk {n} from {start} to {end}")
    hanoi(n - 1, aux, end, start, depth + 1)

    print(f"{indent}Returning from hanoi({n}, {start}, {end})")


def main():
    global move_count
    n = int(input("Enter number of disks: "))
    print("\n--- Recursion Trace ---\n")
    hanoi(n, 1, 3, 2)
    print(f"\nTotal moves: {move_count}")

if __name__ == "__main__":
    main()
