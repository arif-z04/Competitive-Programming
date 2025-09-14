#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector <long long> x(n);
    for(auto &i:x) cin >> i;

    long long moves = 0;
    for(int i = 1; i < n; i++){
        if(x[i] < x[i - 1]){
            moves += (x[i - 1] - x[i]);
            x[i] = x[i - 1];
        }
    }

    cout << moves << endl;
    

}