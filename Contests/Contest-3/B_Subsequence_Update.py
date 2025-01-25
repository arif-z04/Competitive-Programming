t = int(input())
for _ in range(t):
    _, l, r = map(int, input().split())
    a = sorted(map(int, input().split()))
    rg = r - l + 1
    print(sum(a[:rg]))