#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, d;

    cin >> a >> b >> c >> d;

    long double left = b * log(a);
    long double right = d * log(c);

    if(left > right) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}