#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "example";

    for(size_t i = 0; i < str.length(); i++){
        cout << str[i] << " ";
    }

    for(char ch:str) cout << ch << " ";

    for(auto it = str.begin(); it != str.end(); ++it){
        cout << *it << " ";
    }
    return 0;
}