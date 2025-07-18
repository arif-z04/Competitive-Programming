### **🔄 Recursion in C++**
Recursion is a programming technique where a function **calls itself** to solve a problem by **breaking it down into smaller subproblems**. It's commonly used for problems that can be divided into similar subproblems, like factorial calculation, Fibonacci numbers, and tree traversal.

---

## **📌 How Recursion Works**
Every recursive function must have:
1. **Base Case** → The stopping condition.
2. **Recursive Case** → The function calls itself with a modified argument.

---

## **1️⃣ Basic Example: Factorial of a Number**
Factorial of `n` (`n!`) is:
\[
n! = n \times (n-1)! \quad \text{(base case: } 0! = 1\text{)}
\]
### **Recursive Factorial Function**
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1; // Base Case
    return n * factorial(n - 1); // Recursive Case
}

int main() {
    cout << "Factorial of 5: " << factorial(5) << endl;
}
```
**🔹 Output:**  
```
Factorial of 5: 120
```

📌 **How It Works:**  
```
factorial(5) → 5 × factorial(4)
factorial(4) → 4 × factorial(3)
factorial(3) → 3 × factorial(2)
factorial(2) → 2 × factorial(1)
factorial(1) → 1 × factorial(0)
factorial(0) = 1 (Base case)
```

---

## **2️⃣ Fibonacci Series (Recursive)**
The **Fibonacci sequence** is:
\[
F(n) = F(n-1) + F(n-2) \quad \text{with } F(0) = 0, F(1) = 1
\]
### **Code:**
```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n; // Base Cases
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive Case
}

int main() {
    cout << "Fibonacci(6): " << fibonacci(6) << endl;
}
```
**🔹 Output:**  
```
Fibonacci(6): 8
```

📌 **Recursive Calls Breakdown:**  
```
fibonacci(6) → fibonacci(5) + fibonacci(4)
fibonacci(5) → fibonacci(4) + fibonacci(3)
...
```
🚨 **Problem:** This has **overlapping subproblems** leading to **exponential time complexity (O(2^n))**.

✅ **Solution:** Use **Memoization (Dynamic Programming)** to store computed values.

---

## **3️⃣ Tail Recursion (Optimized Recursion)**
In **tail recursion**, the recursive call is the **last operation** in the function. Some compilers **optimize** tail recursion by **reusing stack frames**.

### **Example: Tail Recursion for Factorial**
```cpp
#include <iostream>
using namespace std;

int tailFactorial(int n, int result = 1) {
    if (n == 0) return result; // Base Case
    return tailFactorial(n - 1, n * result); // Recursive Call
}

int main() {
    cout << "Factorial(5): " << tailFactorial(5) << endl;
}
```
📌 **Benefit:** Uses **constant stack space (O(1))** instead of **O(n)** in normal recursion.

---

## **4️⃣ Recursive Binary Search (Efficient Searching)**
Binary search is a classic **divide-and-conquer** algorithm that finds an element in a **sorted array**.

### **Code:**
```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) return -1; // Base Case: Not Found

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) return mid; // Found
    else if (arr[mid] > target) return binarySearch(arr, left, mid - 1, target);
    else return binarySearch(arr, mid + 1, right, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 7;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) cout << "Element found at index " << result << endl;
    else cout << "Element not found" << endl;
}
```
**🔹 Output:**  
```
Element found at index 3
```
📌 **Time Complexity:** **O(log n)** (very efficient compared to linear search **O(n)**).

---

## **5️⃣ Recursion in Tree Traversals (Depth-First Search)**
### **Example: Inorder Traversal of a Binary Tree**
```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void inorderTraversal(Node* root) {
    if (!root) return; // Base Case
    inorderTraversal(root->left);
    cout << root->data << " "; 
    inorderTraversal(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
}
```
**🔹 Output:**  
```
Inorder Traversal: 4 2 5 1 3
```
📌 **Use Case:** Used in **AI search algorithms, compilers, and databases**.

---

## **📌 Recursion vs. Iteration**
| Feature          | Recursion  | Iteration  |
|-----------------|------------|------------|
| **Memory Usage** | High (stack frames) | Low (loop variables) |
| **Performance**  | Slower (due to function calls) | Faster (no overhead) |
| **Readability**  | Cleaner (especially for tree/graph problems) | Less readable for complex problems |
| **Use Case**     | Tree, Graph, Divide & Conquer problems | Simple loops (factorial, sum) |

---

## **🎯 When to Use Recursion?**
✅ Problems with **natural recursive structure** (trees, graphs, backtracking).  
✅ **Divide-and-Conquer algorithms** (Merge Sort, Quick Sort, Binary Search).  
✅ **Mathematical computations** (factorial, Fibonacci).  

🚨 **When to Avoid?**  
❌ If it leads to **stack overflow** (very deep recursion).  
❌ When an **iterative approach is more efficient** (like Fibonacci without memoization).  

---

## **💡 Final Thoughts**
- **Master base & recursive cases.**
- **Use tail recursion when possible** (for optimization).
- **Consider memoization** (to avoid redundant calls).
- **Convert to iteration** if recursion causes performance issues.

---
