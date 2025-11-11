#include <bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector <int> a(n);
        int g;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            if(i==0) g = a[i];
            else g = __gcd(a[i], g);
        }
        if(g == 1) cout << 0 << endl;
        else if(__gcd(g, n) == 1) cout << 1 << endl;
        else if(__gcd(g, n - 1) == 1) cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}