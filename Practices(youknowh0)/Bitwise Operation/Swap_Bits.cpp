#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        unsigned int N;
        cin >> N;

        unsigned int even_bits = N & 0xAAAAAAAA; 
        unsigned int odd_bits  = N & 0x55555555;

        even_bits >>= 1; 
        odd_bits  <<= 1; 

        cout << (even_bits | odd_bits) << " ";
    }
    return 0;
}
