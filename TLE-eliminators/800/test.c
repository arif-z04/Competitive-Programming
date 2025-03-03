#include <stdio.h>

int main()
{
    int tcase;
    scanf("%d", &tcase);
    int x = 0;
    while(tcase--){
        char op[3];
        scanf("%s", op);
        if(op[0]=="+") ++x;
        if(op[2]=="+") x++;
        if(op[0]=="-") --x;
        if(op[2]=="-") x--;
    }
    scanf("%d\n", x);
    return 0;
}