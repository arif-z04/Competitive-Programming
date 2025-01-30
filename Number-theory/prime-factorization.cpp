#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000000;
vector<int> spf(MAX + 1);
// Trial Division

void trialDivision(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 1)
        printf("%d", n); // Remaining prime factor
}

// efficient way
void OptimizedTrialDivision(int n)
{
    while (n % 2 == 0)
    {
        printf("2 ");
        n /= 2;
    }

    while (n % 3 == 0)
    {
        printf("3 ");
        n /= 3;
    }

    for (int i = 5; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            printf("%d ", i + 2);
            n /= i + 2;
        }
    }

    if (n > 1)
        printf("%d ", n);
}

// spf - precomputed smallest prime factors (spf)

void sieve()
{
    for (int i = 1; i <= MAX; i++)
        spf[i] = i;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

void primeFactorization(int n)
{
    while (n != 1)
    {
        cout << spf[n] << " ";
        n /= spf[n];
    }
}


// Pollards RHO method
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Pollard's Rho algorithm for factorization
int pollardsRho(int n)
{
    
    if (n % 2 == 0)
        return 2; // Handle even numbers
    
    int x = 2, y = 2, d = 1;
    int c = rand() % n; // Random constant
    
    while (d == 1)
    {
        x = (1LL * x * x + c) % n; // f(x) = x^2 + c
        y = (1LL * y * y + c) % n;
        y = (1LL * y * y + c) % n; // Twice the steps for y
        d = gcd(abs(x - y), n);
    }

    return d;
}

void primeFactorization2(int n)
{
    while (n > 1)
    {
        int factor = pollardsRho(n);
        cout << factor << " ";
        n /= factor;
    }
}

int main()
{

    int n;
    cin >> n;
    // trialDivision(n);
    // OptimizedTrialDivision(n);
    // sieve();
    // primeFactorization(n);

    primeFactorization2(n);
    return 0;
}