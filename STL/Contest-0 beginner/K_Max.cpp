#include <bits/stdc++.h>

using namespace std;


void inputArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    inputArray(arr, n);
    int max_in_array = findMax(arr, n);
    cout << max_in_array << endl;

    return 0;
}