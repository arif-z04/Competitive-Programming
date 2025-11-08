#include <bits/stdc++.h> 

using namespace std;
 
int nth_fib(int n){
    if(n==1) return 0;
    else if(n==2 || n==3) return 1;
    else return nth_fib(n - 1) + nth_fib(n - 2);
}
int main(){
    int n;
    cin >> n;
    cout << nth_fib(n) << endl;
    return 0;
}