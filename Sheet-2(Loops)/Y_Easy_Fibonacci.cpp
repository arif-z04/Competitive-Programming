#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    long long a = 0, b = 1;

    if (n == 1)
    {
        cout << a << endl;
    }
    else
    {
        cout << a << " " << b;

        for (int i = 2; i < n; i++)
        {
            long long next = a + b;
            cout << " " << next;
            a = b;
            b = next;
        }

        cout << endl;
    }

    return 0;
}