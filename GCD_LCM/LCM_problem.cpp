#include <bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        int64_t l, r;
        cin >> l >> r;

        if(l * 2 > r) cout << -1 << " " << -1 << endl;
        else cout << l << " " << l * 2 << endl;
    }
    return 0;
}