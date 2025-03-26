#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--){
        string input;
        cin >> input;
 
        if(input.find("101") != string::npos || input.find("010") != string::npos){
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
 
    }   
    return 0;
}