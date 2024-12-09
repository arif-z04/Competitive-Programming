#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double f = floor((double)a/b);
    double c = ceil((double)a/b);
    double r = round((double)a/b);
    printf("floor %d / %d = %.0f\n", a, b, f);
    printf("ceil %d / %d = %.0f\n", a, b, c);
    printf("round %d / %d = %.0f\n", a, b, r);

    return 0;
}