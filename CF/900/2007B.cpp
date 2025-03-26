#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long test; cin >> test;
    
    while(test--)
    {
        long n, m;
        cin >> n >> m;
        long x(0);
        
        // storing the max value of the array
        for(long p = 0; p < n; p++){
            long a;
            cin >> a;
            x = (a > x ? a : x);
        }

        while(m--){
            char c;
            long l, r;
            cin >> c >> l >> r;
            if(l <= x && x <= r){
                x += (c == '+') - (c == '-');
            }

            cout << x << " ";
        }

        cout << endl;
    }
    return 0;
}