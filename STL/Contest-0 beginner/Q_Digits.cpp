#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char n[1001]; 
    scanf("%d", &t);

    while (t--) {
        scanf("%s", n);

        int len = strlen(n);
        for (int i = len - 1; i >= 0; i--) {
            printf("%c ", n[i]);
        }

        printf("\n");
    }

    return 0;
}
