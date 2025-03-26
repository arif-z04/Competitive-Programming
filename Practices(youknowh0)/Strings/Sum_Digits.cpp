#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;

    cin >> n >> s;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int digits = s[i] - '0';
        sum += digits;
    }

    cout << sum << endl;
    return 0;
}