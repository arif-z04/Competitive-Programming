#include <bits/stdc++.h>
using namespace std;

bool canCraftArtifact(const vector<int>& a, const vector<int>& b) {
    long long totalSurplus = 0, totalDeficit = 0;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] >= b[i]) {
            totalSurplus += (a[i] - b[i]) / (a.size() - 1); // Distribute surplus across other materials
        } else {
            totalDeficit += b[i] - a[i];
        }
    }
    return totalSurplus >= totalDeficit;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        cout << (canCraftArtifact(a, b) ? "YES" : "NO") << endl;
    }
    return 0;
}
