#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int min_cal = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int cal = arr[i] + arr[j] + (j + 1) - (i + 1);
                if (cal < min_cal)
                {
                    min_cal = cal;
                }
            }
        }

        cout << min_cal << endl;
    }
    return 0;
}