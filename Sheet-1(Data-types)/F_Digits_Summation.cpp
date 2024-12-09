#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long n_lastDigit, m_lastDigit;
    n_lastDigit = n % 10;
    m_lastDigit = m % 10;
    cout << n_lastDigit + m_lastDigit << endl;
    return 0;
}