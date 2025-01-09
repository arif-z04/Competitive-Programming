#include <bits/stdc++.h>

using namespace std;

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];

    inputArray(a, n);
    inputArray(b, n);

    sort(a, a + n);
    sort(b, b + n);

    bool permutation = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            permutation = false;
        }
    }

    permutation
        ? cout << "yes" << endl
        : cout << "no" << endl;
    return 0;
}