#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string s2;
    for(char c:s){
        if(isalpha(c) && islower(c)){
            s2.push_back(toupper(c));
        }
        if(isalpha(c) && isupper(c)){
            s2.push_back(tolower(c));
        } 
        if(!isalpha(c)){
            s2.push_back(' ');
        }
    }

    cout << s2 << endl;
    return 0;
}