#include <stdio.h>

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void findSecondLargest(int arr[], int size)
{
    // if (size < 2)
    // {
    //     return -1; // means not enough element, shows error
    // }

    int first = arr[0], second = -1e9; 
  
    for (int i = 1; i < size; i++)
    {

        printf("Loop count: %d\n", i);
        if (arr[i] > first) 
        {
            second = first;
            first = arr[i];
            printf("First Number: %d\n", first);
            printf("Second Number: %d\n", second);
             
        }
        else if (arr[i] > second && arr[i] != first)
        {
            
            second = arr[i];
            printf("Second Number was changed."); 
            printf("Now Second number is: %d\n", second);
        } else printf("No change.\n");
    }

    printf("Second Largest number: %d", second);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    inputArray(arr, n);
    findSecondLargest(arr, n);
    
    return 0;
}