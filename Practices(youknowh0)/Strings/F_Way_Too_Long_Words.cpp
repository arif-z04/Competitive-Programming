#include <bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        s.size() > 10
        ? cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl
        : cout << s << endl;
    }
    return 0;
}