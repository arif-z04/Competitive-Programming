#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);

    int x;
    cin >> x;

    auto it = lower_bound(v.begin(), v.end(), x);

    if(it != v.end()){
        cout << *it << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}