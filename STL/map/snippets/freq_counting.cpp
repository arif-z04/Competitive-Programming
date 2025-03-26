#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;  // Sort by value in descending order
}

int main() {
    int n;
    cin >> n;
    
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    vector<pair<int, int>> sorted_freq(freq.begin(), freq.end());
    
    sort(sorted_freq.begin(), sorted_freq.end(), cmp);

    for (auto it : sorted_freq) {
        cout << "Number: " << it.first << ", Frequency: " << it.second << endl;
    }

    return 0;
}
