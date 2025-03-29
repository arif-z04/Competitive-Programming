#include <bits/stdc++.h>

using namespace std;
using lli = long long int;

void decTobin(lli n){
    if(n==0) return;

    decTobin(n/2);
    cout << (n % 2);
}
int main(){
    int test;
    cin >> test;
    while(test--){
        lli num;
        cin >> num;
        if(num==0) cout << "0";
        else decTobin(num); 
        cout << endl;

    }
    return 0;
}