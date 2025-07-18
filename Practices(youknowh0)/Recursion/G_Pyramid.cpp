#include <bits/stdc++.h>

using namespace std;

void printSp(int n){
    if(n == 0) return;
    cout << " ";
    printSp(n - 1);
}

void printStar(int n){
    if(n == 0) return;
    cout << "*";
    printStar(n - 1);
}

void printPyramid(int currentRow, int totalRows){
    if(currentRow > totalRows) return;
    printSp(totalRows - currentRow);
    printStar(2 * currentRow - 1);
    cout << "\n";

    printPyramid(currentRow + 1, totalRows);
}


int main(){
    int n;
    cin >> n;
    printPyramid(1, n);
    return 0;
}