#include <bits/stdc++.h>

using namespace std;

string toBinary(int n)
{
    if(n==0){
        return "0";
    }

    string binary = "";
    while(n > 0){
        int remainder = n % 2;
        binary = to_string(remainder)+binary;
        n /= 2;
    }

    return binary;
}

bool isOdd(int n)
{
    return n % 2 != 0;
}

bool isPalindrome(const string &str) // pass by reference
{
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}


int main()
{
    int n;
    cin >> n;

    if(isOdd(n) && isPalindrome(toBinary(n))){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}