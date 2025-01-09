#include <bits/stdc++.h>

using namespace std;

void shiftZeros(vector<int> &arr){
    int n = arr.size();
    int index = 0;
    for(int i = 0; i < n; ++i){
        if(arr[i] != 0){
            arr[index++] = arr[i];
        }
    }
    while(index < n){
        arr[index++] = 0;
    }
}

int main(){
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    shiftZeros(arr);
    for(int num:arr){
        cout << num << " ";
    }
    cout << endl;
    return 0;

}