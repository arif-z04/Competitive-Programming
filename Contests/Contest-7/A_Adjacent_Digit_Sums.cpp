#include <bits/stdc++.h>

using namespace std;

bool canExist(int x, int y) {
    if (x == y) {
        return false;
    }
    if (y == x + 1) {
        return true;
    }
    if (y < x) {
        int diff = x - y + 1;
        if (diff > 0 && diff % 9 == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (canExist(x, y)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}