#include <bits/stdc++.h>

using namespace std;

int main(){

    int test;
    cin >> test;
    while(test--){
        string msg;
        cin >> msg;
        transform(msg.begin(), msg.end(), msg.begin(), ::tolower);

        if(msg == "yes"){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}