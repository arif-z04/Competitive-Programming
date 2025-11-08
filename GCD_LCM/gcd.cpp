#include <bits/stdc++.h>
using namespace std;

__int64_t gcd(__int64_t a, __int64_t b){
    if(a > b) return gcd(b, a);
    else return gcd(b, a % b);
}



int main(){

    int a, b;
    cin >> a >> b;

    cout << "GCD: " << gcd(a, b) << endl;
}