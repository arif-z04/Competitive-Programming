#include <bits/stdc++.h>

using namespace std;
void inputArray(long long arr[], long long n){
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
}

int main()
{
    long long n;
    cin >> n;
    
    long long arr[n];
    inputArray(arr, n);


    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    cout << abs(sum) << endl;

    return 0;
}