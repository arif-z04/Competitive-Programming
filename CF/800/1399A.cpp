#include <bits/stdc++.h>

using namespace std;

#define fastio() (ios_base::sync_with_stdio(0), cin.tie(NULL));


void solve(){
    int n;
    cin >> n;

    vector <int> a(n);
    
    for(auto &i:a) cin >> i;
    
    sort(a.begin(), a.end());

    int f = 0;

    for(int i = 1; i < n; i++){
        if(a[i] - a[i-1] > 1){
            f = 1;
            cout << "NO" << endl;
            break;
        }
    }
    if(f==0)cout << "YES" << endl;
}
int main()
{
    fastio();

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}