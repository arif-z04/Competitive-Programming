#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 12, b = 25;

    cout << "a = " << a <<"\t\t: " << bitset<8>(a) << endl;
    cout << "b = " << b <<"\t\t: " << bitset<8>(b) << endl;
    cout << "a | b = " << (a | b) << "\t: " <<bitset<8> (a | b) << endl;


    return 0;
}