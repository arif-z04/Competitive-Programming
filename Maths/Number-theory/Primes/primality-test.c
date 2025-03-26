#include <stdio.h>
#include <stdlib.h>


// segmented sieve method
// time complexity O(sqrt(R) - (R - L)log(log(sqrt(R))))

void segmentedSieve(int L, int R) {
    int limit = sqrt(R) + 1;
    int prime[limit + 1];
    memset(prime, 1, sizeof(prime));

    for (int p = 2; p * p <= limit; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                prime[i] = 0;
            }
        }
    }

    int range[R - L + 1];
    memset(range, 1, sizeof(range));

    for (int p = 2; p <= limit; p++) {
        if (prime[p]) {
            int start = max(p * p, (L + p - 1) / p * p);
            for (int i = start; i <= R; i += p) {
                range[i - L] = 0;
            }
        }
    }

    for (int i = 0; i <= R - L; i++) {
        if (range[i]) printf("%d ", i + L);
    }
}


int main()
{   
    
    return 0;
}