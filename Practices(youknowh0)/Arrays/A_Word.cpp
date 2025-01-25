#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int up = 0, low = 0;

    for(char c:s){
        if(isupper(c)){
            up++;
        }
        if(islower(c)){
            low++;
        }
    }

    string NewStr;
    for(char c:s){
        if(low == up || low > up){
            char lowCase = tolower(c);
            NewStr.push_back(lowCase);
        } else {
            char high = toupper(c);
            NewStr.push_back(high);
        }
    }

    cout << NewStr << endl;

    return 0;
}