#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int64_t modpow(int64_t base, int64_t exp, int64_t mod){
    int64_t result = 1;
    while(exp > 0){
        if(exp % 2 == 1){
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }

    return result;
}

int main(){

    int64_t n;
    cin >> n;

    cout << modpow(2, n, MOD) << endl;
    return 0;
}