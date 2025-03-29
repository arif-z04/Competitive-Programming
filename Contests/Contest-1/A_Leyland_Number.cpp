#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    long long power = pow(a, b) + pow(b, a);
    cout << power << endl;
    return 0;
}