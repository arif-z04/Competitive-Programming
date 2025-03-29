#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &i : v)
        cin >> i;

    int hard = 0;

    for (auto i : v)
    {
        if (i)
        {
            hard = 1;
            break;
        }
    }
    string msg = hard ? "HARD" : "EASY";
    cout << msg << "\n";
    return 0;
}