#include <bits/stdc++.h>

using namespace std;


string makePlural(string str){
    int len = str.size();

    if(len >= 2 && str.substr(len-2) == "us"){
        return str.substr(0, len - 2) + "i";
    }

    return str + "s";
}
int main()
{
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        cout << makePlural(str) << endl;
        
    }
    return 0;
}