#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> bills = {100, 20, 10, 5, 1};
    int money, i = 0, cnt = 0;
    cin >> money;
    
    while(money != 0 && i < bills.size()){
        cnt += (money / bills[i]);
        money %= bills[i];
        i++;
    }

    cout << cnt << endl;
    return 0;
}