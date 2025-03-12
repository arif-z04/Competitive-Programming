#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> v;
        int j = 0;
        while(n > 0){
            if(n % 10){
                int ans = pow(10, j);
                ans *= (n%10);
                v.push_back(ans);
            }   
            n/=10;
            ++j;
        }

        cout << v.size() << endl;
        for(int i:v){
            cout << i << " ";
        }

        cout << endl;
    }

}