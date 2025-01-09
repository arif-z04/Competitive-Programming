#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << 0 << endl;
    } else if (N == 2) {
        cout << 1 << endl;
    } else {
        long long fib1 = 0, fib2 = 1, fibN;
        for (int i = 3; i <= N; i++) {
            fibN = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibN;
        }
        cout << fibN << endl;
    }

    return 0;
}
