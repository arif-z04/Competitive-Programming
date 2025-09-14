#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll numberSpiral(ll x, ll y){
    ll n = max(x, y);
    ll base = (n) * (n);

    if(n % 2 == 0){
        if(y == n) return base + x;
        else return n * n - y + 1;
    } else {
        if(x == n) return base + y;
        else return n * n - x + 1;
    }
}
int main()
{
    int t; cin >> t;
    while(t--){
        ll y, x;
        cin >> y >> x;
        cout << numberSpiral(x, y) << endl;
    }
    return 0;
}