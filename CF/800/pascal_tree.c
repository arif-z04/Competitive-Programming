#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int num = 1;
        // spaces+
        for(int sp = 0; sp < n - i; sp++){
            printf(" ");
        }

        for(int j = 0; j <= i; j++){
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }
}