// what is Recursion? 
// it is a technique to solve a problem by 
// calling the function itself inside.


#include <stdio.h>

int factorial(int n){
    if(n == 0){
        return 1;
    } else {
        return n* factorial(n-1);
    }
} 

// factorial(n) -> 5 
// 1. n == 0 kina --> n=5 * factorial(n-1) --> 5 - 1
// factorial(n-1) --> 5 - 1 = 4
// n == 0 kina --> n = 4 * factorial(n-1) --> 4 - 1 = 3

int main(){
    int n;
    scanf("%d", &n);

    int fact = factorial(n);

    printf("%d! = %d\n",n ,fact);
    return 0;
}