#include <bits/stdc++.h>

using namespace std;

bool ispowerofTwo(int x){
    return (x > 0 && (x & (x - 1))==0);
}

int main()
{
    int n;
    cin >> n;
    cout << bool(ispowerofTwo(n)) << endl;

    return 0;
}