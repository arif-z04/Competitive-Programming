#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
        if (__builtin_popcount(mask) < 2) continue;

        int sum = 0, mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++) if (mask & (1 << i)) {
            sum += c[i];
            mn = min(mn, c[i]);
            mx = max(mx, c[i]);
        }

        if (l <= sum && sum <= r && mx - mn >= x) ans++;
    }
    cout << ans << "\n";


}
