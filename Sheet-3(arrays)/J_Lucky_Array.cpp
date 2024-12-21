// take input
// find the min val
// find the count of min val
// if odd -> lucky else not lucky

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min_val = INT_MAX;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
            cnt = 1;
        }
        else if (min_val == arr[i])
        {
            cnt++;
        }
    }

    cnt % 2 != 0
        ? cout << "Lucky" << endl
        : cout << "Unlucky" << endl;

    return 0;
}