#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n; cin >> n;
        
        int count = 0;
        vector <int> arr(n);
        for(auto &i:arr) cin >> i;
        
        for (int l = 0; l < n; ++l) {
            for (int r = l; r < n; ++r) {
                bool non_decreasing = true;
                for (int k = l + 1; k <= r; ++k) {
                    if (arr[k] < arr[k - 1]) {
                        non_decreasing = false;
                        break;
                    }
                }
                if (non_decreasing) count++;
            }
        }
         cout << count << endl;
 

    }
    return 0;
}