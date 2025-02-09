#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string str;

        cin >> str;
        int cnt = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == str[i+1]){
                str.erase(i+1);
                cnt++;
            }
        }

        cnt!=0? cout << cnt << endl: cout << str.size() << endl;
    }
}