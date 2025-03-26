#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a > b) swap(a, b);
        bool u = (a <= c && c <= b);
        bool v = (a <= d && d <= b);
        u^v ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}