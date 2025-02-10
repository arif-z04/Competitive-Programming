#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;        
        vector<pair<long long, vector<int>>> arrays(n);
        
        for (int i = 0; i < n; ++i) {
            long long sum = 0;
            vector<int> arr(m);
            for (int j = 0; j < m; ++j) {
                cin >> arr[j];
                sum += arr[j];
            }
            arrays[i] = {sum, arr};
        }
        
        sort(arrays.rbegin(), arrays.rend());
        
        long long score = 0, cumulativeSum = 0;
        for (const auto& array : arrays) {
            for (int x : array.second) {
                cumulativeSum += x;
                score += cumulativeSum;
            }
        }
        
        cout << score << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    solve();
    return 0;
}
