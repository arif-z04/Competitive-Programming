#include <bits/stdc++.h>

using namespace std;


int binarySearch(int arr[], int left, int right, int target){
    if(left > right) return -1;
    
    int mid = left + (right - left) / 2;

    if(arr[mid] == target) return mid;
    else if(arr[mid] > target) return binarySearch(arr, left, mid - 1, target);
    else return binarySearch(arr, mid + 1, right, target);
 
}


int main(){
    int arr[] = {1, 2, 3, 5, 7, 8, 9, 12, 21, 34, 54, 100};
    int length = sizeof(arr) / sizeof(arr[0]);

    int target; cin >> target;
    int result = binarySearch(arr, 0, length - 1, target);

    if(result != -1)  cout << "Element found at index " << result << endl;
    else cout << "Element not found" << endl;

    return 0;
}