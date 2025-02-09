def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()    
    c_values = set()
    for i in range(n):
        c_values.add(a[i] + b[i])  
    print("YES" if len(c_values) >= 3 else "NO")

t = int(input())
for _ in range(t):
    solve()
