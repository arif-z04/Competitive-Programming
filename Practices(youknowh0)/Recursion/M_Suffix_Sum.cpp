#include <bits/stdc++.h>

using namespace std;
using ll = long long int;


ll suffix_sum(ll arr[], ll index, ll end){
    if(index > end){
        return 0;
    }

    return arr[index] + suffix_sum(arr, index + 1, end);
}

int main(){

    int n, m;
    cin >> n >> m;
    
    ll arr[n];
    for(auto &i:arr) cin >> i;

    int startIdx = n - m;
    ll total = suffix_sum(arr, startIdx, n - 1);

    cout << total << endl;

    return 0;
}