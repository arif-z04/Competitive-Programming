#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[1000001]; 
    int count[26] = {0};
    scanf("%s", str);
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            count[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}
