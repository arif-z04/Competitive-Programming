#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int letter[26] = {0};

    for(char c:s){
        letter[c - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(letter[i] > 0){
            cout << char(i + 'a') << " : " << letter[i] << endl;
        }
    }
 
    return 0;
}