#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[n];
    }

    int min = 1e6, pos = -1;
    
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            pos = i;
        }
    }
    return 0;
}