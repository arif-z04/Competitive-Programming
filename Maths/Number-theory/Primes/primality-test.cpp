#include <bits/stdc++.h>

#define mod 1000000007

typedef long long int ll;
typedef unsigned long long int llu;

using namespace std;


// Naive Method
// Check 2 to n - 1
// Problem - time-complexity O(n)

int isPrime1(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

// Optimized Naive Method
// Check up to sqrt of n
// Time complexity O(sqrt(n))

int isPrime2(int n){
    if(n<=1) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

// Optimized check for small cases
// iterate only on numbers of the form 6k+-1
// Time-complexity = O(sqrt(n))

int isPrime3(int n){
    if (n<=1) return 0;
    if (n<=3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for(int i = 5; i*i <= n; i+=6){
        if(n%i == 0 || n % (i+2) == 0) return 0;
    }

    return 1;
}

// Sieve of Eratosthenes
// uses boolean array
// time-complexity: O(nlog(log(n)))

bool sieve(int n){
    vector <bool> isprime(n+1, true);
    isprime[0] = isprime[1] = false;
    for(int i = 2; i*i <= n; i++){
        if(isprime[i]){
            for(int j = i*i; j <= n; j+=i){
                isprime[j] = false;
            }
        }
    }
    if(isprime[n]){
        return true;
    } else {
        return false;
    }
}



int main()
{

    return 0;
}