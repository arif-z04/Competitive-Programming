#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        set<long long> black;
        for (int i = 0; i < m; i++) {
            long long x; cin >> x;
            black.insert(x);
        }

        long long pos = 1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                pos++;
            } else { // command B
                // next white cell after pos
                long long cur = pos + 1;
                while (black.count(cur)) cur++;
                pos = cur;
            }
            black.insert(pos);
        }

        cout << black.size() << "\n";
        for (auto x : black) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
