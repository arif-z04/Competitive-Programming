#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

using i64 = long long int;
using uInt = unsigned int;
using ui64 = unsigned long long int;
using vi = vector<int>;
using vii = vector<i64>;
using vc = vector<char>;
using udouble = long double;
using vd = vector<double>;
using vs = vector<string>;

// Sieve method
bool isPrime(ui64 n){
    vector<bool> Prime(n+1, true);
    Prime[0] = Prime[1] = false;

    for(ui64 i = 2; i*i <= n; i++){
        if(Prime[i]){
            for(ui64 j = i*i; j <= n; j+=i){
                Prime[j] = false;
            }
        }
    }

    return Prime[n];
}

// Naive method - O(n)
bool isPrime2(ui64 n){
    if(n < 2) return false;
    for(ui64 i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

// Optimized method - O(sqrt(n))
bool isPrime3(ui64 n){
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(ui64 i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main()
{
    ui64 n;
    cout << "Enter a number: ";
    cin >> n;
    
    auto start = high_resolution_clock::now();
    isPrime(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Sieve Method Time: " << duration.count() << " ns" << endl;

    start = high_resolution_clock::now();
    isPrime2(n);
    stop = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(stop - start);
    cout << "Naive Method Time: " << duration.count() << " ns" << endl;

    start = high_resolution_clock::now();
    isPrime3(n);
    stop = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(stop - start);
    cout << "Optimized Method Time: " << duration.count() << " ns" << endl;
    
    return 0;
}
