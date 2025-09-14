#include <bits/stdc++.h>

using namespace std;

bool isPalindrom(const vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    if (arr[start] != arr[end])
    {
        return false;
    }
    return isPalindrom(arr, start + 1, end - 1);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    isPalindrom(arr, 0, arr.size() - 1) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}