#include <bits/stdc++.h>

using namespace std;

int findMaxArray(int arr[], int size){
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void inputArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
int main(){
    int n; 
    cin >> n;
    int arr[n];

    inputArray(arr, n);

    cout << findMaxArray(arr, n) << endl;



    return 0;
}