#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    avoid excessive use of Copying using 
    move() or swap();
    
    instead of copying large vectors,
    use std::move() or swap() to optimize
    performance
    */

    vector <int> v1 = {1, 2, 3, 4, 5};
    vector <int> v2;

    v2 = move(v1); // moves ownership of v1 to v2, avoiding deep copy
    
    return 0;
}