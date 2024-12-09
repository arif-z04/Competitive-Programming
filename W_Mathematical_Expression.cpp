#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    char op, eq;
    cin >> a >> op >> b >> eq >> c;

    if(
        (op == '+' && a + b == c) ||
        (op == '-' && a - b == c) ||
        (op == '*' && a * b == c) ||
        (op == '/' && a / b == c) 
    ) cout << "Yes" << endl;
    else{
        if(op == '+') cout << a + b << endl;
        if(op == '-') cout << a - b << endl;
        if(op == '*') cout << a * b << endl;
        if(op == '/') cout << a / b << endl;
    }
    return 0;
}