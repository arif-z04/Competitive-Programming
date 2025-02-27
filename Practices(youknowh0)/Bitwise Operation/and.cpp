#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << bitset<8>(a) << endl;
    cout << bitset<8>(b) << endl;
    cout << "-------------" << endl;
    cout << bitset<8>(a & b) <<" --> " << (a&b) << endl;
    
    return 0;
}