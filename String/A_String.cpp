#include <bits/stdc++.h>

using namespace std;

void solve(){
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;

        int countOne = 0;
        for(char ch:s){
            if(ch == '1'){
                countOne++;
            }
        }

        cout << countOne << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}