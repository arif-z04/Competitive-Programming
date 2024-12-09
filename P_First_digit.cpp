#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number;
    cin >> number;

    string numStr = to_string(number);
    int firstDigit = numStr[0] - '0';

    if(firstDigit % 2 == 0) cout << "EVEN" << endl;
    else cout << "ODD" << endl;

    return 0;
}