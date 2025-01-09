#include <stdio.h>
#include <string.h>


int main()
{
    char alphabets[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int size = sizeof(alphabets)/sizeof(alphabets[0]);
    printf("Size: %d\n", size);
    printf("Size: %d\n", strlen(alphabets));
    printf("Size: %d\n", sizeof(alphabets));
    return 0;
}