#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] <= 10){
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }
    return 0;
}