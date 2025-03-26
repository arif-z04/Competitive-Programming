#include <bits/stdc++.h>

using namespace std;
using ui64 = unsigned long long int;
using i65 = long long int;

ui64 factorial(ui64 n){
    if(n==0) return 1;
    return n * factorial(n-1);
}
int main(){
    ui64 n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}