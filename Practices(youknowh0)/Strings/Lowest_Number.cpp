#include <bits/stdc++.h>

using namespace std;

void inputArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    inputArray(arr, n);

    int min_val = arr[0];
    int pos = 1;
    
    for(int i = 0; i < n; i++){
        if(arr[i] < min_val){
            min_val = arr[i];
            pos = i+1;
        }
    }

    cout << min_val << " " << pos << endl;


    return 0;
}