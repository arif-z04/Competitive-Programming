#include <bits/stdc++.h>
using namespace std;

using ll = long long; 

ll ln2(ll n){
    if(n==1) return 0;
    return 1 + ln2(n / 2);
}
int main(){
    ll n;
    cin >> n;
    cout << ln2(n) << endl;
    return 0;
}