#include <bits/stdc++.h>

using namespace std;

void printArray(int n){
    for(int i = 1; i<=n; i++){
        cout << i;
        if(i < n){
            cout << " ";
        }
    }
}

int main(){
    int n; 
    cin >> n;

    printArray(n);
    return 0;
}