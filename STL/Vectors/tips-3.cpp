/*
use emplace_back() instead of push_back()
for Complex objects
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <pair <int, int>> vp;
    vp.emplace_back(10, 20);   
    return 0;
}