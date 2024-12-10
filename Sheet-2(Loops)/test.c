#include <stdio.h>

int main(){

    int x;
    printf("Enter a number: ");

    scanf("%d", &x);

    while(x!=0){
        printf("%d", x++);
    }
}