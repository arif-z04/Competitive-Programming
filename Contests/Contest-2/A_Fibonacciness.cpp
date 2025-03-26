#include <bits/stdc++.h>

using namespace std;

int maxfibs(int a1, int a2, int a4, int a5) {
    int maxFibs = 0;

    for (int a3 = -200; a3 <= 200; ++a3) {
        int fibs = 0;

        if (a3 == a1 + a2) fibs++;
        if (a4 == a2 + a3) fibs++;
        if (a5 == a3 + a4) fibs++;

        maxFibs = max(maxFibs, fibs);
    }

    return maxFibs;
}

int main() {
    int t; 
    cin >> t;

    vector<int> results;
    for (int i = 0; i < t; ++i) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int result = maxfibs(a1, a2, a4, a5);
        results.push_back(result);
    }

    for (int res : results) {
        cout << res << endl;
    }

    return 0;
}