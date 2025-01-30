#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    string s;
    cin >> s;

    string org = s;
    reverse(s.begin(), s.end());    
    if(org == s){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    } 
    return 0;
}