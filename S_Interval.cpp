#include <bits/stdc++.h>
using namespace std;

int main() {
    double X;
    cin >> X;

    if (X < 0 || X > 100) {
        cout << "Out of Intervals" << endl;
    } else if (X <= 25) {
        cout << "Interval [0,25]" << endl;
    } else if (X <= 50) {
        cout << "Interval (25,50]" << endl;
    } else if (X <= 75) {
        cout << "Interval (50,75]" << endl;
    } else {
        cout << "Interval (75,100]" << endl;
    }

    return 0;
}
