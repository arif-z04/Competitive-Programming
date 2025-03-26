#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int rem = 240 - k;
    
    int solve_cnt = 0;
    int solve_time = 0;
    for(int i = 1; i <= n; i++){
        solve_time += (i * 5);
        if(solve_time <= rem) solve_cnt++;
    }

    cout << solve_cnt << endl;
    return 0;
}