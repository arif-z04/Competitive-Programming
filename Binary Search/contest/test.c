#include <stdio.h>

void sort(int array[], int size);
void printarray(int array[], int size);
void find(int array[],int size);
int main() {
    int array[] = {9, 13, 20, 4, 2, 1, 8, 5};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printarray(array, size);
    find(array,size);
    return 0;
}

void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {  // Bubble Sort to emnei kore hehehe
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printarray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");  // eiya korle tole tole print hoibo
}

void find(int array[], int size)
{
   int left = 0;
   int right  = sizeof(array)/sizeof(array[0]) - 1 ;
    int target = 13;

     while(left<=right)
     {
        int middle = (left + right ) / 2 ;
        if(array[middle] == target){
            printf ("Item found at index %d",middle);

        } else if(array[middle]<target){

            left = middle+1;

        }else{

            right = middle-1;

        }
     }

     printf(" The target was not found ....\n");

}
