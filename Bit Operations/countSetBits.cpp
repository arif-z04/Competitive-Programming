#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    // for 32-bit (count 1's)
    cout << __builtin_popcount(x) << endl;

    int count = 0;

    while (x)
    {
        x = x & (x - 1); // clears the rightmost set bit
        count++;
    }
    
    return 0;
}