#include <bits/stdc++.h>

using namespace std;


template <typename T>
void inputArray(T array[], int size){
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
}

template <typename T>
double calcAvg(T array[], int size){
    double sum = 0.0;

    for(int i = 0; i < size; i++){
        sum += array[i];
    }

    return sum / size;
    
}

int main(){
    int n;
    cin >> n;
    float arr[n];

    inputArray(arr, n);
    printf("%.7lf\n", calcAvg(arr, n));
}