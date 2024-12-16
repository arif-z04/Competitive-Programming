#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int bin_digit = 0;

    while(n > 0){
        int binary = n % 2;
        bin_digit = binary + bin_digit * 10;
        n = n / 2;
    }
    
    cout << bin_digit << endl;
    return 0;
}