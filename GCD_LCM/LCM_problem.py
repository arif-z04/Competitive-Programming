import sys
input = sys.stdin.readline

for _ in range(int(input())):
    l, r = map(int, input().split())
    print(*( (-1, -1) if l * 2 > r else (l, l * 2) ))
