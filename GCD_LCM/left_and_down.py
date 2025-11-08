import sys
import math
input = sys.stdin.readline

for _ in range(int(input())):
    a, b, k = map(int, input().split())
    g = math.gcd(a, b)
    print(1 if a // g <= k and b // g <= k else 2)