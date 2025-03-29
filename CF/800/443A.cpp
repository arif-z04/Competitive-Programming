#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    set<char>a;
    for(char c:s){
        if(c>='a' && c<='z'){
            a.insert(c);
        }
    }

    cout << a.size() << "\n";
    return 0;
}