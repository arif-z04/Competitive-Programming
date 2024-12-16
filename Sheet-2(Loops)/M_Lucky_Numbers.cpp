#include <bits/stdc++.h>

using namespace std;

int isLucky(int n);

int main()
{
    int a, b;
    int flag = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(isLucky(i)){
            cout << i << " ";
            flag = 1;
        }
    }

    if(!flag) cout << -1 << endl;
    return 0;
}

int isLucky(int n){
    while(n > 0){
        int digit = n % 10;
        if(digit != 4 && digit != 7){
            return 0;
        }
        n /= 10;
    }

    return 1;
}

