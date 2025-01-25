#include <bits/stdc++.h>

using namespace std;

void ShiftRight(vector <int> &arr, int x){
    int n = arr.size();

    x %= n;

    if(x == 0) return;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + x);
    reverse(arr.begin() + x, arr.end());
}


int main()
{
    int n , x;
    cin >> n >> x;
    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }    
    ShiftRight(arr, x);
    for(int num : arr){
        cout << num << " ";
    }

    return 0;
}