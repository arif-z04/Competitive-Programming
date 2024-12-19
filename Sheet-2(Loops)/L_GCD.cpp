#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int max = 1;
    // for(int i = 1; i < a+b; i++){
    //     if(a % i == 0 && b % i == 0){
    //         if(i > max) max = i;
    //     }
    // }
    max = __gcd(a, b);
    cout << max << endl;
    return 0;
}