

#include <bits/stdc++.h>

using namespace std;

using i64 = long long int;
using ui64 = unsigned long long int;


i64 getHeight(i64 coins){
    i64 n = (i64)((-1 + sqrt(1 + 8 * coins)) / 2);
    return n;
}

int main(){

    int test;
    cin >> test;

    while(test--){
        i64 n;
        cin >> n;

        ui64 h = getHeight(n);
        cout << h << endl;
    }
}