#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dec;
    cin >> dec;

    int binary[32];
    int i = 0;
    int num = dec;
    int sum_of_ones = 0;

    while (num > 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        if (binary[j])
        {
            sum_of_ones = sum_of_ones + binary[j] * pow(2, j);
        }
    }
    cout << sum_of_ones << endl;
    return 0;
}
