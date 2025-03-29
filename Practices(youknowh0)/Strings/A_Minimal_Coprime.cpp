#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--){
        long a, b;
        long cnt = 0;    
        cin >> a >> b;
        if(a == 1){
            cnt++;
            a++;
        } 

        if(a < b){
            cnt += b - a;
        }

        cout << cnt << endl;
    }
    return 0;
}