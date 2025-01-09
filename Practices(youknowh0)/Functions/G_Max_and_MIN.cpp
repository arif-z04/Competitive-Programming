#include <bits/stdc++.h>

using namespace std;

int max(int arr[], int size);
int min(int arr[], int size);

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << min(arr, n) << " " << max(arr, n) << endl;
    return 0;
}

int max(int arr[], int size){
    int maximum = arr[0];

    for(int i = 0; i<size; i++){
        if(arr[i] > maximum) maximum = arr[i];
    }

    return maximum;
}

int min(int arr[], int size){
    int minimum = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] < minimum) minimum = arr[i];
    }

    return minimum;
}