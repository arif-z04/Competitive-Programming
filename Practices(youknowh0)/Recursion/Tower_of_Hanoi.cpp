#include <bits/stdc++.h>

using namespace std;


void pm(int start, int end){
    cout << start << " " << end << endl;
}

void hanoi(int n, int start, int end){
    if(n == 1){
        pm(start, end);
    } else {
        int other = 6 - (start + end);
        hanoi(n - 1, start, other);
        pm(start, end);
        hanoi(n - 1, other, end);
    }
}

int main(){
    int n;
    cin >> n;
    cout << pow(n, 2) - 1 << endl;
    hanoi(n, 1, 3);

    return 0;
}