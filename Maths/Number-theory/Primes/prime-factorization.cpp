#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;
#define printV(v) cout << "[ "; for(auto j:v) cout << j << " "; cout << "]" << endl;

// basic
vector <int> primeFactors(int n){
    vector <int> factors;
    for(int i = 2; i*i <= n; i++){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

// efficient

const int N = 1e6;
int spf[N+1]; // Smallest Prime Factor

void sieveSPF() {
    for (int i = 1; i <= N; i++) spf[i] = i;
    for (int i = 2; i * i <= N; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= N; j += i)
                if (spf[j] == j) spf[j] = i;
        }
    }
}

// Fast factorization using precomputed SPF
vector<int> getFactors(int n) {
    vector<int> factors;
    while (n != 1) {
        factors.push_back(spf[n]);
        n /= spf[n];
    }
    return factors;
}


int main()
{
    sieveSPF();
    int num;
    cin >> num;

    auto start = high_resolution_clock::now();
    printV(getFactors(num));
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop-start);
    cout << "Sieve SPF method duration: " << duration.count() << " ns" << endl;
    

    start = high_resolution_clock::now();
    printV(primeFactors(num));
    stop = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(stop-start);
    cout << "Basic method duration: " << duration.count() << " ns" << endl;
    
    return 0;
}