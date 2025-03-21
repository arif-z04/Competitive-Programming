#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        string msg = (x%3==0) ? "Second" : "First";

        cout << msg << endl;
    }
}