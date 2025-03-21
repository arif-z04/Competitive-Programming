#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    
    // calculation
    int cnt = 0;
    sort(a.begin(), a.end());
    
    for(int &i:a) i+=k;
    for(int &i:a){
        if(i <= 5) cnt++;   
    }
    
    // for(auto i:a) cout << i << " ";
    // cout << endl;
    // cout << "cnt: " << cnt << endl;
    // cout << "teams: " << teams << endl; 

    int teams = cnt >= 3 ? cnt / 3 : 0;
    cout << teams << endl;
    return 0;
}