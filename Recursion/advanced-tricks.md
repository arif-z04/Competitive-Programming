# 🚀 **Advanced Recursion Tricks for Competitive Programming**
In high-level competitive programming, **recursion** plays a critical role in solving complex problems efficiently. Here are some **advanced recursion tricks** used by top coders:

---

## 📌 **1. Recursive Digit DP (Digit Dynamic Programming)**
📢 **Use Case:** Counting numbers with specific properties (e.g., how many numbers up to `N` have a certain sum of digits).  
🔹 **Idea:** Solve **digit-based problems** using recursion with **memoization**.

### **🔹 Example: Count Numbers with Sum of Digits ≤ S**
We count numbers from **1 to N** such that the sum of their digits does not exceed `S`.

### **🖥️ Code**
```cpp
#include <iostream>
#include <cstring>
using namespace std;

int dp[20][200]; // DP array

int digitDP(string num, int pos, int sum, bool tight) {
    if (sum < 0) return 0; // Invalid case
    if (pos == num.size()) return 1; // Valid number

    if (dp[pos][sum] != -1 && !tight) return dp[pos][sum];

    int limit = (tight) ? num[pos] - '0' : 9;
    int ans = 0;
    
    for (int d = 0; d <= limit; d++) {
        ans += digitDP(num, pos + 1, sum - d, tight && (d == limit));
    }

    if (!tight) dp[pos][sum] = ans;
    return ans;
}

int countNumbers(int N, int S) {
    memset(dp, -1, sizeof(dp));
    return digitDP(to_string(N), 0, S, 1);
}

int main() {
    int N = 100, S = 10;
    cout << "Count: " << countNumbers(N, S) << endl;
}
```
✅ **Time Complexity:** `O(Length of N * S)`

---

## 📌 **2. Meet-in-the-Middle Recursion**
📢 **Use Case:** Used in problems where **brute force is too slow**, but recursion can be applied efficiently by splitting data.

🔹 **Idea:**  
1. **Divide the problem into two halves** using recursion.
2. Solve them separately.
3. Merge results to get the final answer.

### **🔹 Example: Subset Sum Problem (Find subsets whose sum is K)**
**Naïve approach:** Checking all subsets → **O(2^n)** → Too slow!  
**Optimized approach:**  
- Split array into **two halves**  
- Find subset sums separately  
- Use **binary search** to merge results

### **🖥️ Code**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generateSubsetSums(vector<int>& arr, vector<int>& sums, int index, int sum) {
    if (index == arr.size()) {
        sums.push_back(sum);
        return;
    }

    generateSubsetSums(arr, sums, index + 1, sum);           // Exclude
    generateSubsetSums(arr, sums, index + 1, sum + arr[index]); // Include
}

bool subsetSumMeetInMiddle(vector<int>& arr, int target) {
    int n = arr.size();
    vector<int> leftSums, rightSums;

    generateSubsetSums(vector<int>(arr.begin(), arr.begin() + n/2), leftSums, 0, 0);
    generateSubsetSums(vector<int>(arr.begin() + n/2, arr.end()), rightSums, 0, 0);

    sort(rightSums.begin(), rightSums.end());

    for (int sum : leftSums) {
        if (binary_search(rightSums.begin(), rightSums.end(), target - sum))
            return true;
    }

    return false;
}

int main() {
    vector<int> arr = {3, 34, 4, 12, 5, 2};
    int target = 9;
    cout << (subsetSumMeetInMiddle(arr, target) ? "YES" : "NO") << endl;
}
```
✅ **Time Complexity:** `O(2^(n/2))` → Much faster than `O(2^n)`

---

## 📌 **3. Recursive Bitmasking**
📢 **Use Case:** Problems involving **choosing subsets** optimally.

🔹 **Example:** Find the **smallest sum** that can be obtained using **any subset** of an array.

### **🖥️ Code**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int minSubsetSum(vector<int>& arr, int index, int sum) {
    if (index == arr.size()) return sum; // Base case

    return min(minSubsetSum(arr, index + 1, sum),         // Exclude
               minSubsetSum(arr, index + 1, sum + arr[index])); // Include
}

int main() {
    vector<int> arr = {3, 1, 4, 2};
    cout << "Minimum Subset Sum: " << minSubsetSum(arr, 0, 0) << endl;
}
```
✅ **Time Complexity:** `O(2^n)`

---

## 📌 **4. Recursive Game Theory**
📢 **Use Case:** Solving **game problems** like **Nim Game, Grundy Number, Coin Games**.

🔹 **Example:** **Stone Game** – Two players take **1 or 2 stones** per turn. The player **who takes the last stone wins**.

### **🖥️ Code**
```cpp
#include <iostream>
using namespace std;

bool canWinGame(int n) {
    if (n == 0) return false; // Base Case: If no stones left, player loses.

    return (!canWinGame(n - 1) || !canWinGame(n - 2)); // If opponent loses, we win.
}

int main() {
    int n = 4;
    cout << (canWinGame(n) ? "Win" : "Lose") << endl;
}
```
✅ **Time Complexity:** `O(n)`

---

## 📌 **5. Recursive Graph Traversal (Backtracking + DFS)**
📢 **Use Case:**  
- **Find all paths in a maze**  
- **Cycle detection in graphs**  
- **Finding Eulerian Paths, Hamiltonian Paths, etc.**

### **🔹 Example: Find all paths from (0,0) to (N-1, M-1) in a Maze**
```cpp
#include <iostream>
using namespace std;

int maze[3][3] = { {1, 1, 1}, {1, 0, 1}, {1, 1, 1} };

void findPaths(int x, int y, int N, int M, string path) {
    if (x == N - 1 && y == M - 1) {
        cout << path << endl;
        return;
    }

    if (x + 1 < N && maze[x + 1][y]) findPaths(x + 1, y, N, M, path + "D");
    if (y + 1 < M && maze[x][y + 1]) findPaths(x, y + 1, N, M, path + "R");
}

int main() {
    findPaths(0, 0, 3, 3, "");
}
```
✅ **Time Complexity:** `O(2^(N*M))`

---

# **🚀 Summary Table**
| Trick | Use Case | Complexity |
|--------|-------------|-------------|
| **Digit DP** | Counting numbers with constraints | **O(Digits × Sum)** |
| **Meet-in-the-Middle** | Large subset problems | **O(2^(n/2))** |
| **Recursive Bitmasking** | Finding optimal subsets | **O(2^n)** |
| **Game Theory Recursion** | Win/Loss prediction in games | **O(n)** |
| **Recursive Graph DFS** | Finding paths in a grid/graph | **O(2^(N*M))** |

---

# **🔥 Final Thoughts**
✔️ **Recursion is a core CP skill.**  
✔️ **Optimize using memoization, pruning, or bitmasking.**  
✔️ **Meet-in-the-middle is a great trick for large constraints.**  


**Note:** Ask any AI-chatbot for detailed explanation.

---