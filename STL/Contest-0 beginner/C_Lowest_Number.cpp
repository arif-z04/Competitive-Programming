#include <bits/stdc++.h>

using namespace std;

void inputArray(long arr[], long size){
    for(long i = 0; i < size; i++){
        cin >> arr[i];
    }
}

int findLowest(long arr[], long size){
    long smallest = 1e9;
    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main()
{
    long n;
    cin >> n;

    long arr[n];
    inputArray(arr, n);

    long small = findLowest(arr, n);
    long pos = 0;
    for(long i = 0; i < n; i++){
        if(arr[i] == small){    
            pos = i + 1;
            break;
        }
    }

    cout << small << " " << pos << endl;
    return 0;
}