
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector <long> a(n);
        for(auto &i:a) cin >> i;

        if(n % 2) {
            cout << "YES" << endl;
            continue;
        }

        sort(a.rbegin(), a.rend());

        bool result(false);
        for(long p = 1; !result && p < n; p+=2){
            if(a[p - 1] == a[p]){
                continue;
            }
            result = true;
        }


        puts(result? "YES" : "NO");

    }
    return 0;
}

