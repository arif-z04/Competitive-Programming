#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 85;
    
    // get the i-th bit
    int bit = (x >> 2) & 1;
    cout << bitset<8>(x) << endl;
    cout << bit << endl;
    
    // set the i-th bit
    // counts from the right 0
    int i = 2;
    x = x | (1 << i);
    cout << x << endl;
    cout << bitset<8>(x) << endl;


    // Toggle the i-th bit
    x = x ^ (1 << i);
    cout << x << endl;
    cout << bitset<8>(x) << endl;

    // clear the i-th bit
    x = x & ~(1 << i);
    cout << x << endl;
    cout << bitset<8>(x) << endl;

    // Isolate the rightmost set bit
    int y = x & (-x);
    cout << y << endl;
    cout << bitset<8>(y) << endl;

    
    return 0;   
}