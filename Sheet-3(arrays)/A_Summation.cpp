#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, sum = 0;
    cin >> n;

    long long arr[n];

    for(long long i = 0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    cout << abs(sum) << endl;


}