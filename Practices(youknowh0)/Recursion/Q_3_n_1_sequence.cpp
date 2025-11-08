#include <bits/stdc++.h> 

using namespace std;
using ll = long long int;

ll golbacht(ll n){
    if(n == 1) return 1;
    
    if(n & 1){
        return 1 + golbacht(3 * n + 1);
    } else {
        return 1 + golbacht(n / 2);
    }
}

int main(){
    ll n;
    cin >> n;
    cout << golbacht(n) << endl;
    return 0;
}