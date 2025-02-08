#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int evenCnt = 0, oddCnt = 0, posCnt = 0, negCnt = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x % 2 == 0) evenCnt++;
        else oddCnt++;

        if(x > 0) posCnt++;
        else if (x < 0) negCnt++;
    }

    cout << "Even: " << evenCnt << endl;
    cout << "Odd: " << oddCnt << endl;
    cout << "Positive: " << posCnt << endl;
    cout << "Negative: " << negCnt << endl;
    return 0;
}