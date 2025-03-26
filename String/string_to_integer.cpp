#include <bits/stdc++.h>

using namespace std;

int main()
{
    string numStr = "123";
    int num = stoi(numStr); // convert string to int

    int x = 456;
    string strX = to_string(x);
    
    cout << num + 10 << endl; // 133;
    cout << strX << " is a number"; // 456 is a number;


    // Convertion between C-style strings

    string s = "Hello";

    // convert str::string to C-string;
    const char* cstr = s.c_str();

    char arr[] = "World";
    
    // convert C-string to std::string
    string s2(arr);
    return 0;
}