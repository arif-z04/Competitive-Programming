#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {5, 1, 4, 2, 8};
    sort(v.begin(), v.end());   // Sorts in ascending order
    sort(v.rbegin(), v.rend()); // Sorts in descending order

    // Sorting pairs by the first element, if same then by the second element
    vector<pair<int, int>> vp = {{1, 5}, {3, 2}, {1, 2}};
    sort(vp.begin(), vp.end(), [](pair<int, int> a, pair<int, int> b)
         { return (a.first == b.first) ? (a.second < b.second) : (a.first < b.first); });

    return 0;
}