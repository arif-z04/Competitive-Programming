#include <bits/stdc++.h>

using namespace std;

bool isLastDigitZero(int n){
    return n % 10 == 0;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    while(k--){
        if(isLastDigitZero(n)){
            n = n / 10;
        } else {
            n--;
        }
    }

    cout << n << endl;
    return 0;
}