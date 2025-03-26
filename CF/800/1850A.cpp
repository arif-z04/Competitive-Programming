#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        vector <int> a(3);
        for(auto &i:a) cin >> i;
        sort(a.begin(), a.end());
        if(a[2] + a[1] >= 10 || a[2] + a[0] >= 10){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}