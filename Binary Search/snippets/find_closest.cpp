#include <bits/stdc++.h>

using namespace std;

// Find the closest number to X in a sorted array
int findClosest(vector<int> &v, int x)
{
    auto it = lower_bound(v.begin(), v.end(), x);

    if (it == v.begin())
        return *it;
    if (it == v.end())
        return *(it - 1);

    int a = *(it - 1), b = *it;
    return (abs(x - a) <= abs(x - b)) ? a : b;
}

int main()
{
    vector<int> v = {1, 3, 6, 8, 10};
    cout << "Closest to 5: " << findClosest(v, 5) << '\n';
}
