#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int hasEven = 0;
    for(int i = 2; i<=n; i+=2){
        cout << i << endl;
        hasEven = 1;
    }

    if(!hasEven){
        cout << -1 << endl;
    }

    return 0;
}