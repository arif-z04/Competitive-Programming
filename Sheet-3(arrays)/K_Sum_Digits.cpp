#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string digits;
    cin >> digits;

    int sum = 0;
    for(char digit: digits){
        sum += digit - '0';
    }
    

    cout << sum << endl;

    return 0;
}