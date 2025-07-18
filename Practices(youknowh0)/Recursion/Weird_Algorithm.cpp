#include <bits/stdc++.h>

using namespace std;


void collatz(int n){
    cout << n << " ";

    if(n == 1) return;
    if(!(n & 1)){
        collatz(n / 2);
    } else {
        collatz(3 * n + 1);
    }
}


int main(){
    int n;
    cin >> n;
    collatz(n);
    return 0;
}