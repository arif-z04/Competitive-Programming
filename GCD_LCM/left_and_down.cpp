#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while (test--)
    {
        int64_t a, b, k;
        cin >> a >> b >> k;

        int64_t g = gcd(a, b);
        int64_t result = (a/g <= k && b/g <=k) ? 1 : 2;

        cout << result << endl;

    }
    
    return 0;
}