#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int64_t a, b;
        cin >> a >> b;

        if(a == b) printf("0 0\n");
        else{
            int64_t g = abs(a - b);
            int64_t mn = min(a % g, g - a % g);

            cout << g << " " << mn << endl;
        }

    }
    return 0;
}