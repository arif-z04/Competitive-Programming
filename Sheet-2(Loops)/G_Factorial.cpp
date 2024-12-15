#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        long long fact = 1;
        if (n > 1)
        {
            for (int i = 1; i <= n; i++) 
            {
                fact = fact * i; 
            }
        }
        cout << fact << endl;
    }
    return 0;
}
