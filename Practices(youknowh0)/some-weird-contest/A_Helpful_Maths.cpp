#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    vector <int> digits;
    for(char ch:str){
        if(isdigit(ch)){
            digits.push_back(ch-'0');
        }
    }

    sort(digits.begin(), digits.end());

    for(int i = 0; i < digits.size(); i++){
        cout << digits[i];
        if(i != digits.size() - 1){
            cout << "+";
        }
    }

    return 0;
}   