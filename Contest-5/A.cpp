#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    // Sort 'a' in ascending and 'b' in descending order
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend()); // Reverse sorting for descending order

    set<int> c_values;
    for (int i = 0; i < n; i++) {
        c_values.insert(a[i] + b[i]);
    }

    // Check if we have at least 3 distinct elements
    if (c_values.size() >= 3)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
