#include <stdio.h>

void printNumbers(int n)
{
    if(n == 0) return;
    printf("%d ", n);
    printNumbers(n-1);
}

int main()
{
    int N; 
    scanf("%d", &N);
    printNumbers(N);
}