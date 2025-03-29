#include <bits/stdc++.h>

using namespace std;

double squareRoot(double x) {
    double low = 0, high = x, mid;
    while (high - low > 1e-6) {
        mid = (low + high) / 2;
        if (mid * mid >= x) 
            high = mid;
        else 
            low = mid;
    }
    return high;
}

int main(){
    cout << "Square root of 50: " << fixed << setprecision(6) << squareRoot(50) << '\n';
}