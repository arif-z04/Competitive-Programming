## **🔥 Advanced Binary Search Techniques for Competitive Programming 🔥**  
Binary search is not just about finding an element; it's a powerful tool for solving a variety of problems efficiently. Below are **more advanced techniques** that will help you dominate binary search problems in **competitive programming**.

---

## **📌 1. Binary Search on Infinite Search Space (Unbounded Binary Search)**
**🔹 Problem:** Find the first integer `x` such that `f(x) = true` when the search space is **unknown** (like an infinite array).  

### **🔹 Trick: Exponential Expansion + Binary Search**
1. Start with `low = 1`, `high = 2`.  
2. Keep doubling `high` until `f(high) = true`.  
3. Apply normal binary search in `[low, high]`.

```cpp
bool f(int x) { return x * x >= 50; }  // Example function

int unboundedBinarySearch() {
    int low = 1, high = 2;
    while (!f(high)) {
        low = high;
        high *= 2;  // Exponentially expanding search space
    }
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (f(mid)) high = mid;
        else low = mid + 1;
    }
    return low;
}
cout << "First x where x² ≥ 50: " << unboundedBinarySearch() << '\n';
```
🔹 **Useful for:** Unknown upper bound, infinite series problems.  

---

## **📌 2. Ternary Search – Optimizing Maximum/Minimum of a Function**
**🔹 Problem:** Find the maximum/minimum value of a unimodal function in **O(log N)**.

### **🔹 Trick: Replace Binary Search with Ternary Search**
1. Instead of dividing the range into two halves, divide into **three**.  
2. Compare function values at two midpoints.  
3. Shrink the search space based on function behavior.

```cpp
double f(double x) { return -1 * (x - 3) * (x - 3) + 10; }  // Example function: Max at x = 3

double ternarySearch(double low, double high) {
    while (high - low > 1e-6) {  // Precision control
        double m1 = low + (high - low) / 3;
        double m2 = high - (high - low) / 3;
        
        if (f(m1) < f(m2)) low = m1;  // Maximize
        else high = m2;
    }
    return (low + high) / 2;
}

cout << "Maximum at x: " << ternarySearch(0, 10) << '\n';
```
🔹 **Used for:** Convex/concave function optimization, peak finding.  

---

## **📌 3. Binary Search on Bitmasks (Finding Smallest Satisfying Bitwise Condition)**
**🔹 Problem:** Find the smallest number `x` such that `x & mask ≠ 0`.  

### **🔹 Trick: Use Binary Search with Bitwise Operators**
```cpp
int findMinWithMask(vector<int>& arr, int mask) {
    sort(arr.begin(), arr.end());

    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if ((arr[mid] & mask) != 0) { 
            ans = arr[mid];
            high = mid - 1;  // Search for smaller valid numbers
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

vector<int> arr = {3, 7, 15, 31}; 
cout << "Smallest number with bitwise condition: " << findMinWithMask(arr, 4) << '\n';
```
🔹 **Used in:** Problems involving **bitwise AND/OR constraints**.  

---

## **📌 4. Discrete Binary Search (For Problems with Function Call Restrictions)**
**🔹 Problem:** You can only call a function `f(x)`, but cannot access the sorted array directly.  
**🔹 Solution:** Use **binary search without accessing an array explicitly**.

```cpp
bool f(int x) { return x * x >= 50; }  // Example condition

int discreteBinarySearch(int low, int high) {
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (f(mid)) high = mid;
        else low = mid + 1;
    }
    return low;
}
cout << "Smallest x where x² ≥ 50: " << discreteBinarySearch(1, 100) << '\n';
```
🔹 **Used in:** **Online queries**, function-based problems.  

---

## **📌 5. Multi-Dimensional Binary Search (Matrix Search)**
### **🔹 Problem:** Search for an element in a row-wise and column-wise sorted matrix.

### **🔹 Trick: Start from Top-Right or Bottom-Left**
```cpp
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = 0, col = matrix[0].size() - 1;
    
    while (row < matrix.size() && col >= 0) {
        if (matrix[row][col] == target) return true;
        else if (matrix[row][col] > target) col--;  // Move left
        else row++;  // Move down
    }
    return false;
}

vector<vector<int>> matrix = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
cout << "Found? " << (searchMatrix(matrix, 5) ? "Yes" : "No") << '\n';
```
🔹 **Time Complexity:** \( O(N + M) \) instead of \( O(NM) \).  
🔹 **Used in:** **2D searching problems, grid-based CP problems**.  

---

## **📌 6. Binary Search on Graphs (Minimum Weight Path)**
### **🔹 Problem:** Find the **smallest maximum edge weight** required to reach a destination in a weighted graph.

### **🔹 Trick: Binary Search on Edge Weights + BFS/DFS**
```cpp
bool canReach(vector<vector<pair<int, int>>>& graph, int maxWeight, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(0); visited[0] = true;

    while (!q.empty()) {
        int node = q.front(); q.pop();
        if (node == n - 1) return true;

        for (auto [next, weight] : graph[node]) {
            if (!visited[next] && weight <= maxWeight) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
    return false;
}

int minMaxEdgeWeight(vector<vector<pair<int, int>>>& graph, int n) {
    int low = 0, high = 1e9, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (canReach(graph, mid, n)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
```
🔹 **Used in:** Path optimization problems in graphs.  

---

## **🔥 Final Takeaways**
| **Trick** | **Use Case** |
|------------|------------|
| **Unbounded Binary Search** | Infinite or unknown search space |
| **Ternary Search** | Finding function max/min |
| **Bitmask Binary Search** | Solving bitwise constraints |
| **Discrete Binary Search** | When array access is restricted |
| **2D Binary Search (Matrix Search)** | Searching efficiently in matrices |
| **Binary Search on Graphs** | Path-finding with weight constraints |

---
