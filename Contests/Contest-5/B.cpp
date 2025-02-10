#include <stdio.h>

int main(){

    int K, S;
    scanf("%d %d", K, S);

    int comb = 0;
    for(int x = 0; x <= K; x++){
        for(int y = 0; y <= K; y++){
            int z = S - x - y;
            if(z >= 0 && z <= K){
                comb++;
            }
        }
    }
    printf("%d", comb);
    return 0;
}