#include <bits/stdc++.h>

using namespace std;

int main()
{
    // adding elements to vectors;
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        int elm;
        cin >> elm;
        v.push_back(elm);
    }
    return 0;
}