#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    vector<bool> Prime(n+1, true);
    Prime[0] = Prime[1] = false;

    for(int i = 2; i*i <= n; i++){
        if(Prime[i]){
            for(int j = i*i; j <= n; j+=i){
                Prime[j] = false;
            }
        }
    }

    if(Prime[n]){
        return true;
    } else {
        return false;
    }
}


// Optimized method 
// TC = O(sqrt(n))

int isPrime3(int n){
    if (n<=1) return 0;
    if (n<=3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for(int i = 5; i*i <= n; i+=6){
        if(n%i == 0 || n % (i+2) == 0) return 0;
    }

    return 1;
}

int main()
{
    int n;
    cin >> n;

    isPrime(n) 
    ? cout << "YES" << endl 
    : cout << "NO" << endl;
    return 0;
}