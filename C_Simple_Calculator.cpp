#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n1, n2;
    cin >> n1 >> n2;
    long long sum = n1 + n2;
    long long mul = n1 * n2;
    long long sub = n1 - n2;
    printf("%lld + %lld = %lld\n", n1 , n2, sum);
    printf("%lld * %lld = %lld\n", n1, n2, mul);
    printf("%lld - %lld = %lld\n", n1, n2, sub);
    return 0;
}