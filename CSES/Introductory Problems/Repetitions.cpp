#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin >> s;

    int maxLen = 1, currlen=1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == s[i+1]){
            currlen++;
        } else {
            currlen = 1;
        }
        if(currlen > maxLen) {
            maxLen = currlen;
        }
    }


    cout << maxLen << endl;
    return 0;
}