#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;
    long long mult = x * y;
    long long add = x + y;

    printf("%lld + %lld = %lld\n", x, y, add);
    printf("%lld * %lld = %lld\n", x, y, mult);
    printf("%lld - %lld = %lld\n", x, y, x - y);

    return 0;
}