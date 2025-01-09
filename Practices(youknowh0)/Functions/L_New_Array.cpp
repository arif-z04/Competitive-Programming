#include <bits/stdc++.h>

using namespace std;

template <typename T>
void inputArray(T arr[], int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

template<typename T>
void printArray(T arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}


int main()
{
    int n;
    cin >> n;

    int arr1[n], arr2[n];
    inputArray(arr1, n);    
    inputArray(arr2, n);
    printArray(arr2, n);
    printArray(arr1, n);

    return 0;
}