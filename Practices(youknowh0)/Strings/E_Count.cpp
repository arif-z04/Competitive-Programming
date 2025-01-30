#include <bits/stdc++.h>

using namespace std;

int main()
{
    string number;
    cin >> number;
    int sum = 0;
    for(char c:number){
        int digit = c - '0';
        sum += digit;
    }

    cout << sum << endl;
    return 0;
}