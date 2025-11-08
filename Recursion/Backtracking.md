## **🔥 Advanced Recursion: Backtracking**
Backtracking is a **recursive algorithmic technique** used to solve problems by **exploring all possibilities** while eliminating incorrect solutions **efficiently**. It is commonly used in:  

✅ **Sudoku Solver**  
✅ **N-Queens Problem**  
✅ **Maze Solving (Rat in a Maze)**  
✅ **Word Search Puzzle**  
✅ **Generating All Permutations/Subsets**  

---

## **1️⃣ N-Queens Problem (Placing Queens on a Chessboard)**
The **N-Queens problem** is about placing **N queens** on an **N×N chessboard** such that **no two queens attack each other**.  
📌 **Rules:**  
✔️ No two queens share the same **row, column, or diagonal**.  
✔️ The solution should work for **any value of N**.  

### **🖥️ C++ Code for N-Queens using Backtracking**
```cpp
#include <iostream>
#include <vector>
using namespace std;

#define N 8 // Change this for different board sizes

// Function to check if it's safe to place a queen at board[row][col]
bool isSafe(vector<vector<int>> &board, int row, int col) {
    // Check vertical column
    for (int i = 0; i < row; i++)
        if (board[i][col]) return false;

    // Check left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) return false;

    // Check right diagonal
    for (int i = row, j = col; i >= 0 && j < N; i--, j++)
        if (board[i][j]) return false;

    return true;
}

// Function to solve N-Queens using backtracking
bool solveNQueens(vector<vector<int>> &board, int row) {
    if (row >= N) return true; // All queens are placed successfully

    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 1; // Place queen

            if (solveNQueens(board, row + 1)) return true; // Recur for next row

            board[row][col] = 0; // Backtrack
        }
    }
    return false; // No valid position found
}

// Function to print the chessboard
void printBoard(vector<vector<int>> &board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << (board[i][j] ? "Q " : ". ");
        cout << endl;
    }
}

int main() {
    vector<vector<int>> board(N, vector<int>(N, 0));

    if (solveNQueens(board, 0))
        printBoard(board);
    else
        cout << "No solution found!" << endl;

    return 0;
}
```

### **🔹 Output for N = 8**
```
Q . . . . . . . 
. . . . Q . . . 
. . . . . . Q . 
. . . . . . . Q 
. . Q . . . . . 
. . . . . Q . . 
. Q . . . . . . 
. . . Q . . . . 
```

📌 **Time Complexity:** **O(N!)** (since we try all possibilities).  
📌 **Space Complexity:** **O(N²)** (for board storage).  

---

## **2️⃣ Sudoku Solver (9×9 Grid)**
A **Sudoku Solver** fills a **9×9 grid** following the rules:
✔️ Each **row, column, and 3×3 box** must contain digits **1-9** **without repetition**.  

### **🖥️ C++ Code for Sudoku Solver using Backtracking**
```cpp
#include <iostream>
using namespace std;

#define N 9 // 9x9 Sudoku Grid

bool isSafe(int board[N][N], int row, int col, int num) {
    for (int x = 0; x < N; x++) {
        if (board[row][x] == num || board[x][col] == num)
            return false; // Check row & column
    }

    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i + startRow][j + startCol] == num)
                return false; // Check 3x3 box

    return true;
}

bool solveSudoku(int board[N][N], int row, int col) {
    if (row == N - 1 && col == N) return true;
    if (col == N) return solveSudoku(board, row + 1, 0);
    if (board[row][col] != 0) return solveSudoku(board, row, col + 1);

    for (int num = 1; num <= 9; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;
            if (solveSudoku(board, row, col + 1)) return true;
            board[row][col] = 0; // Backtrack
        }
    }
    return false;
}

void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int board[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(board, 0, 0))
        printBoard(board);
    else
        cout << "No solution exists!" << endl;

    return 0;
}
```

### **🔹 Output**
```
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
```

📌 **Time Complexity:** **O(9^(N²))** (Worst case).  
📌 **Space Complexity:** **O(N²)**.  

---

## **🎯 Final Thoughts**
- ✅ **Backtracking is a powerful brute-force method** that systematically explores possibilities.
- ✅ **Optimizations** like **pruning** and **heuristics** can reduce execution time.
- 🚀 **Widely used in AI, combinatorial problems, and constraint satisfaction problems (CSPs).**

