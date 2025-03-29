#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        bool found = false;
        for (int i = 0; i < int((s).size()) - 1; ++i)
        {
            if (s[i] == s[i + 1])
            {
                found = true;
                cout << s[i] << s[i + 1] << "\n";
                break;
            }
        }

        if (found)
            continue;
        for (int i = 0; i < int((s).size()) - 2; ++i)
        {
            if(s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2]) {
                found = true;
                cout << s[i] << s[i + 1] << s[i + 2] << endl;
                break;
            }
        }
        if (!found)
            cout << -1 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}