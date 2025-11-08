#include <bits/stdc++.h>

using namespace std;
using ll = long long int;


ll sum(ll arr[], ll n){
    if(n == 0){
        return 0;
    }
    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{
    ll n; cin >> n;
    ll arr[n];
    for(auto &i:arr) cin >> i;
    ll total = sum(arr, n);
    cout << total << endl;
    return 0;
}