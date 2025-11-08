#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int a, b, x, y;

        cin >> a >> b >> x >> y;

        if(a > b){
            int res = (a ^ 1) == b ? y : -1;
            cout << res << endl;
        } else {
            int d = b - a;
            int d1 = (b + 1 >> 1) - (a + 1 >> 1);
            
            long long res = y > x ? 1ll * d * x : 1ll * (d - d1) * x + 1ll * d1 * y;
            cout <<  res << endl;
        }
        
    }
    return 0;
}