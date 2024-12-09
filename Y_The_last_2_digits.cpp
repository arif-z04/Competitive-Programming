#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int modA = a % 100;
    int modB = b % 100;
    int modC = c % 100;
    int modD = d % 100;
    
    int result = (((modA * modB) % 100) * ((modC * modD) % 100)) % 100;

    if(result < 10){
        cout << "0" << result << endl;
    } else {
        cout << result << endl;
    }
    return 0;
}