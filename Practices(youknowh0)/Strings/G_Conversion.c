#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    char str2[100];
    for(int i = 0; i < strlen(str); i++){
        if(isalpha(str[i]) && islower(str[i])){
            str2[i] = toupper(str[i]);
        }
        if(isalpha(str[i]) && isupper(str[i])){
            str2[i] = tolower(str[i]);
        }
        if(!isalpha(str[i])){
            str2[i] = ' ';
        }
    }

    printf("%s", str2);
    return 0;
}