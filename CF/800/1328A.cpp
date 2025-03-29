#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b; cin >> a >> b;
        int rem = a % b;
        int cnt = (rem == 0) ? 0 : b - rem;
        cout << rem << "\n";
    }


    return 0;
}