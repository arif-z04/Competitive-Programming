#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    // sort(b.rbegin(), b.rend());

    set <int> distinctC;

    for(int i = 0; i < n; i++){
        distinctC.insert(a[i] + b[i]);
    }

    unordered_set <int> uniqElmnt;

    for(int uniq:distinctC){
        uniqElmnt.insert(uniq);
        if(uniqElmnt.size() >= 3) break;
    }

    if(uniqElmnt.size() >= 3){
        cout << "YES\n";
    } else {
        cout << "NO\n"; 
    }

}
int main(){
    ios::sync_with_stdio(false);

    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}