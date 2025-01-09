#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    long long nmtr = 1, dmtr = 1;

    for (int i = 0; i < n; ++i) {
        nmtr *= a[i];
    }

    for (int i = 0; i < m; ++i) {
        dmtr *= b[i];
    }

    long long gcd_value = gcd(nmtr, dmtr);
    nmtr /= gcd_value;
    dmtr /= gcd_value;

    cout << nmtr << " " << dmtr << endl;

    return 0;
}
