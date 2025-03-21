// Shohag Loves Mod

#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;
using ui64 = unsigned long long int;

#define ln "\n"
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define scanv(x) for(auto &i:x) cin >> i;


int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            cout << i * 1 + (i - 1) << ' ';
        }
        cout << ln;
    }
}
// 2 % 1 = 0
// 7 % 2 = 1
// 1 * 1 + 1 - 1