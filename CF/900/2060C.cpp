#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;

        map<int, int> mp;
        vector <int> a(n);
        
        for(auto &i:a){
            cin >> i;
            mp[i]++;
        }



        int ans = 0;

        for(int i = 0; i < n; i++){
            int x = min(mp[a[i]], mp[k - a[i]]);
            if(x > 0){
                if(a[i] == (k - a[i])) x/=2;
                mp[a[i]] -= x;
                mp[k - a[i]] -= x;
                ans += x;
            }
        }
      
        cout << ans << endl;
    }
}