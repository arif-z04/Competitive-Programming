#include <stdio.h>

int main()
{
    int currency[] = {200, 100, 50, 20, 10, 5, 2, 1};
    int count[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int money;
    printf("Enter the amount of money ");
    scanf("%d", &money);

    for (int i = 0; i < sizeof(currency) / sizeof(currency[0]); i++)
    {
        count[i] = money / currency[i];
        money %= currency[i];
    }
    for (int i = 0; i < sizeof(currency) / sizeof(currency[0]); i++)
    {
        if (count[i] != 0)
        {
            printf("%3d Notes about %d\n", currency[i], count[i]);
        }
    }
}