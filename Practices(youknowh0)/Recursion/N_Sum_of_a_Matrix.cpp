#include <bits/stdc++.h>

using namespace std;

const int MAX = 100;
void sum_matrix(int A[][MAX], int B[][MAX], int result[][MAX], int row, int col, int i = 0, int j = 0){

    if(i >= row){
        return;
    }

    if(j >= col){
        sum_matrix(A, B, result, row, col, i + 1, 0);
    } else {
        result[i][j] = A[i][j] + B[i][j];
        sum_matrix(A, B, result, row, col, i, j+1);
    }
}
int main(){
    int r, c;
    cin >> r >> c;

    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> B[i][j];
        }
    }

    sum_matrix(A, B, result, r, c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}