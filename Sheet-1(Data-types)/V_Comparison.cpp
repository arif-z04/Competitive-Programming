#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B;
    char ch;

    cin >> A >> ch >> B;

    if ((ch == '>' && A > B)||
        (ch == '<' && A < B)||
        (ch == '=' && A == B)){
            cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
    return 0;
}