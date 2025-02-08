#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    vector<int> v;
    ll n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int n:v){
        cout << n << " ";
    }
    return 0;
}