#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, c;
    long long b, d;

    cin >> a >> b >> c >> d;
    long modA = a % 100;
    long modC = c % 10;
    long modB = b % 100;
    long modD = d % 10;
    int power1 = pow(modA, modB);
    int power2 = pow(modC, modD);
    if(power1 > power2){ 
        cout << "YES" << endl;
    } 
    else cout << "NO" << endl;
    return 0;
}