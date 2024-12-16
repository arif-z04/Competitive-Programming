#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;

    cin >> n >> a >> b;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        int digit_sum = 0;
        while (temp > 0)
        {
            int digit = temp % 10;
            digit_sum += digit;
            temp /= 10;
        }

        if (digit_sum >= a && digit_sum <= b)
        {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}