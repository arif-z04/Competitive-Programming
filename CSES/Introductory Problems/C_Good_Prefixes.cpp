#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        long long prefix_sum = 0;
        int count = 0;

        unordered_map<long long, int> freq;
        
        for (int i = 0; i < n; i++) {
        
            prefix_sum += arr[i];
        
            freq[arr[i]]++;
        
            if (prefix_sum % 2 == 0 && freq[prefix_sum / 2] > 0) {
                count++;
            }
        
        }
        cout << count << endl;
    }
}
