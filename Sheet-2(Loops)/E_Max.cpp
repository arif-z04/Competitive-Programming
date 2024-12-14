#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int max = 0;
    while(t--){
        long long i;
        cin >> i;
        if(i > max) max = i;
    }
    cout << max << endl;
    return 0;
}