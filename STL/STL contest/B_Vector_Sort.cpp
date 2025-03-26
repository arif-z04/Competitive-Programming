#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a;

    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        a.push_back(val);
    }

    sort(a.begin(), a.end());

    for(int i:a){
        cout << i << " "; 
    }

    return 0;
}