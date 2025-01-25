t = int(input())
for _ in range(t):
    count = 0
    a, b = map(int, input().split())
    if a == 1:
        count+=1
        a += 1
    if a < b:
        count += b - a
    print(count)
    