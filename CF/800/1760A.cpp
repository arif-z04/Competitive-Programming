#include <bits/stdc++.h>

using namespace std;

#define fastio (ios_base::sync_with_stdio(false), cin.tie(NULL));
int main()
{
    fastio;
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> a(3);
        for (auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        cout << a[1] << endl;
    }
    return 0;
}