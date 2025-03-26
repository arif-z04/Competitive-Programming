#include <bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        string S, T, result = "";
        cin >> S >> T;


        int len1 = S.length(), len2 = T.length();

        int minLen = min(len1, len2);
        for(int i = 0; i < minLen; i++){
            result += S[i];
            result += T[i];
        }

        if(len1 > len2){
            result+= S.substr(minLen);
        } else if (len2 > len1){
            result+= T.substr(minLen);
        }

        cout << result << endl;
    }
    return 0;
}