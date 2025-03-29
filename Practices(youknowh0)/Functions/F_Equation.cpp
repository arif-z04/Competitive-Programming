#include <bits/stdc++.h>

using namespace std;

long long eqn(int x, int n){
    long long sum = 0;

    for(int i = 2; i <= n; i+=2){
        sum += pow(x, i);
    }

    return sum;
}

int main()
{
    int X, N;
    cin >> X >> N;

    long long sum = eqn(X, N);

    cout << sum << endl;
    return 0;
}