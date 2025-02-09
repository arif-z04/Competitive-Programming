#include <stdio.h>

// size - number of elements 
// size - 1 = the index of the last element
void reversed(int arr[], int size){
    // int start = 0;
    // int end = size - 1; // 4

    // while(start < end){
    //     int temp = arr[start]; // arr[0] = 1
    //     arr[start] = arr[end]; // arr[0] = 5
    //     arr[end] = temp; // arr[4] = temp = 1

    //     start++;
    //     end--;
    // }

    for(int i = 0; i < size/2; i++){
        int temp = arr[i];  // 1 2 3 4 5
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void inputArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    inputArray(arr, n);
    reversed(arr, n);
    printArray(arr, n);

    return 0;
}