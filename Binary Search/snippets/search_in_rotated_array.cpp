#include <bits/stdc++.h>

using namespace std;


int searchRotated(vector<int> &v, int x)
{
    int low = 0, high = v.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] == x)
            return mid;

        if (v[low] <= v[mid])
        { // Left half sorted
            if (v[low] <= x && x < v[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        { // Right half sorted
            if (v[mid] < x && x <= v[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {4, 5, 6, 7, 0, 1, 2};
    cout << "Index of 5: " << searchRotated(v, 5) << '\n';
}
