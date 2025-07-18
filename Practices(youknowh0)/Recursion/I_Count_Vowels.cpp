#include <bits/stdc++.h>

using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int countVowels(const string &str, int index = 0){
    if(index == str.length()){
        return 0;
    } 

    return isVowel(str[index]) + countVowels(str, index + 1);
}
int main(){
    string input;
    getline(cin, input);

    int vowelCount = countVowels(input);
    cout << vowelCount << endl;
    return 0;
}