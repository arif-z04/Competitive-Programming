#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--){

        int64_t a, b;
        cin >> a >> b;

        int64_t result = lcm(a, b) * gcd(b/a, b);
        cout << result << endl;        

    }
    return 0;
}