def can_exist(x, y):
    if x == y:
        return False
    if y == x + 1:
        return True
    if y < x:
        # Check if y = x - 9k + 1 for some k >= 1
        # Rearranged: 9k = x - y + 1
        diff = x - y + 1
        if diff > 0 and diff % 9 == 0:
            return True
    return False

t = int(input())
for _ in range(t):
    x, y = map(int, input().split())
    if can_exist(x, y):
        print("YES")
    else:
        print("NO")