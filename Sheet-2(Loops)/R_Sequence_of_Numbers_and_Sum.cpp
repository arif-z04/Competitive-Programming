#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i;
    // int flag = 1;
    while (true)
    {
        cin >> m >> n;

        if (n <= 0 || m <= 0)
            break; // terminates the program
        int sum = 0;

        int start = min(m, n);
        int end = max(m, n);

        for (int i = start; i <= end; i++)
        {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }
    return 0;
}