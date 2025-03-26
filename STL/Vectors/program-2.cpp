#include <bits/stdc++.h>

using namespace std;

int simpleSieve(int n){
    vector <int> isprime(n + 1, 1);
    isprime[0] = isprime[1] = 0;

    for(int p = 2; p*p <= n; p++){
        if(isprime[p] == 1){
            for(int i = p*p; i <= n; i+=p){
                isprime[i] = 0;
            }
        }
    }
    
    return isprime[n];
}
int main(){

    int n;
    cin >> n;
    simpleSieve(n) 
    ? cout << "YES" << endl
    : cout << "NO" << endl;
    
    return 0;
}