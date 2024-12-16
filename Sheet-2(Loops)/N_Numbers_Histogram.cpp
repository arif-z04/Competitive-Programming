#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    int t, n;
    cin >> ch >> t;

    while(t--){
        cin >> n;
        for(int i = 1; i<=n; i++){
            cout << ch;
        }    
        cout << endl;
    }
    return 0;
}