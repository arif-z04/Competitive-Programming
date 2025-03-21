#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000000

int main(){

    char name1[MAX];
    char name2[MAX];

    fgets(name1, sizeof(name1), stdin);
    fgets(name2, sizeof(name2), stdin);
    
    name1[strcspn("\n", name1)] = '\0';
    name2[strcspn("\n", name2)] = '\0';

    char c1[1000];
    strncpy(c1, name1 + strcspn(" ", name1), strlen(name1));
    char c2[1000];
    strncpy(c2, name2 + strcspn(" ", name2), strlen(name2));

    printf("%s\n", c1);
    printf("%s\n", c2);
    
    if(strcmp(c1, c2) == 0){
        printf("ARE Brothers");
    } else {
        printf("NOT");
    }
    
    return 0;
}