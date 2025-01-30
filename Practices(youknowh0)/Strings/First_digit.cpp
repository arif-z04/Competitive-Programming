#include <bits/stdc++.h>

using namespace std;

int main(){
    string number;
    cin >> number;
    int digit = number[0] - '0';
    if(digit % 2 == 0){
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
    return 0;
}