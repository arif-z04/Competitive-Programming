#include <bits/stdc++.h>

using namespace std;

int primeFactorCnt(int n)
{
    int cnt = 0;
    while (n % 2 == 0)
    {
        cnt++;
        n /= 2;
    }

    while (n % 3 == 0)
    {
        cnt++;
        n /= 3;
    }

    for (int i = 5; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            cnt++;
            n /= i + 2;
        }
    }

    if (n > 1)
        cnt++;

    return cnt;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        cout << n << " : " << primeFactorCnt(n) << endl;
    }
    return 0;
}