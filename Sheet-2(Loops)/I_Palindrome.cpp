#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int org = n;

    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (org == rev)
    {
        cout << rev << endl;
        cout << "YES" << endl;
    }
    else
    {
        cout << rev << endl;
        cout << "NO" << endl;
    }
    return 0;
}