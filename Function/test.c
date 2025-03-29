#include <stdio.h>

int main()
{
    int n;
    printf("Input number of rows/cols: ");
    scanf("%d", &n);

    int arr[n + 1][n + 1];

    for (int i = 0; i < n; i++)
    {
        printf("Row %d input cell values\n", i);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    arr[n][n] = 0;

    for(int i = 0; i < n; i++){
        int row_sum = 0;
        for(int j = 0; j < n; j++){
            row_sum += arr[i][j];
        }
        arr[i][n] = row_sum;
        // arr[n][n] += row_sum;
    }

    for(int i = 0; i < n; i++){
        int col_sum = 0;
        for(int j = 0; j < n; j++){
            col_sum += arr[j][i];
        }
        arr[n][i] = col_sum;
        arr[n][n] += col_sum;
    }

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            printf("%d   ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
