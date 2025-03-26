#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a <= 0 || c <= 0){
        cout << "No" << endl;
    }

    double left = b * log(a);
    double right = d * log(c);

    if (left > right){
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl;
    }

    return 0;
}