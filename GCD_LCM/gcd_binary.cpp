#include <bits/stdc++.h>
using namespace std;
using int128 = __int128_t;

int128 gcd_binary(int128 a, int128 b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    if (!(a & 1) && !(b & 1)) return gcd_binary(a >> 1, b >> 1) << 1;
    else if (!(a & 1)) return gcd_binary(a >> 1, b);
    else if (!(b & 1)) return gcd_binary(a, b >> 1);
    else if (a > b) return gcd_binary(a - b, b);
    else return gcd_binary(a, b - a); 
}

// helper function to print int128
void printInt128(int128 x) {
    if (x == 0) { cout << "0"; return; }
    if (x < 0) { cout << "-"; x = -x; }
    string s;
    while (x > 0) {
        s.push_back('0' + (x % 10));
        x /= 10;
    }
    reverse(s.begin(), s.end());
    cout << s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // large test numbers
    int128 a = (__int128_t)999999999999999999 * 299999999999999999;
    int128 b = (__int128_t)123456789012345678 * 287654321098765432;

    auto start = chrono::high_resolution_clock::now();
    int128 g = gcd_binary(a, b);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;

    cout << "GCD = ";
    printInt128(g);
    cout << "\nTime taken = " << fixed << setprecision(9) << duration.count() << " seconds\n";
}
