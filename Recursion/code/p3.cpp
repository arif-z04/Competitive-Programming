/*
Write a function that counts the number of ways you can partition n objects using parts up to m. 
assuming m >= 0

input:
6 4
output:
9

*/


#include <bits/stdc++.h>

using namespace std;

int count_parts(int n, int m){
    if(n == 0) return 1;
    else if(m == 0 || n < 0) return 0;
    else return count_parts(n - m, m) + count_parts(n, m - 1);
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << count_parts(n, m) << endl;
    return 0;
}