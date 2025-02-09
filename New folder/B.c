#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void inputArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int size;
    scanf("%d", &size);

    int array[size];
    
    printf("Enter the values: \n");
    
    inputArray(array, size);
    bubblesort(array, size);
    printArray(array, size);

    return 0;
}