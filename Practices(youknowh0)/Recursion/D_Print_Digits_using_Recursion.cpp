#include <bits/stdc++.h>

using namespace std;

void split(const string &str, int index = 0){
    if(index == str.length()) return;

    cout << str[index] << " ";
    split(str, index + 1);
}

int main(){
    int test;
    cin >> test;
    while(test--){
        string str;
        cin >> str;
        split(str);
        cout << endl;
    }
}