

#include <bits/stdc++.h> 

using namespace std;
using i64 = long long int;
using ui64 = unsigned long long int;

#define ln "\n"

int main(){

    i64 price = 0;
    int k, r;
    cin >> k >> r;
    int shovel_cnt = 0;

    while(true){
        if((price % 10 == 0 && price != 0) || price % 10 == r){
            break;
        }
        shovel_cnt++;
        price+=k;
    }
    cout << shovel_cnt << ln;
    return 0;
}