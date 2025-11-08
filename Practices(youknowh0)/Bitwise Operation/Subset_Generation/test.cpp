#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> arr = {1, 4, 5};
    
    int n = arr.size();

    for(int mask = 0; mask < (1 << n); mask++){
        vector <int> subset;

        for(int i = 0; i < n; i++){
            if(mask & (1 << i)){
                subset.push_back(arr[i]);
            }
        }
        cout << "[ ";
        for(auto &i:subset) cout << i << " ";
        cout << "]\n";

    }
    return 0;
}