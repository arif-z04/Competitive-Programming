Here are some **easy-level** competitive programming problems to practice the `vector` techniques you just learned.  

---

### 🔹 **1. Remove Duplicates from a Sorted Array**  
💡 **Concept:** `unique() + erase()`

**Problem:**  
Given a sorted array, remove the duplicate elements in-place such that each element appears only once and return the new length of the array. Modify the vector itself.

🔹 **Input:**  
```
vector<int> v = {1, 1, 2, 2, 3, 4, 4, 5};
```
🔹 **Expected Output:**  
```
{1, 2, 3, 4, 5}
```

---

### 🔹 **2. Find the First Element Greater Than X**  
💡 **Concept:** `lower_bound()`

**Problem:**  
Given a sorted array and a number **X**, find the first element that is **greater than or equal to X**.

🔹 **Input:**  
```
vector<int> v = {10, 20, 30, 40, 50};
int X = 25;
```
🔹 **Expected Output:**  
```
30
```

---

### 🔹 **3. Reverse a Vector**  
💡 **Concept:** `reverse()`

**Problem:**  
Reverse a given vector **in-place**.

🔹 **Input:**  
```
vector<int> v = {1, 2, 3, 4, 5};
```
🔹 **Expected Output:**  
```
{5, 4, 3, 2, 1}
```

---

### 🔹 **4. Sort a Vector of Pairs**  
💡 **Concept:** `sort() + custom comparator`

**Problem:**  
Sort a list of pairs **(a, b)** in increasing order of **a**. If **a** is the same, sort by **b** in decreasing order.

🔹 **Input:**  
```
vector<pair<int, int>> v = {{1, 5}, {3, 2}, {1, 2}, {4, 3}};
```
🔹 **Expected Output:**  
```
{{1, 5}, {1, 2}, {3, 2}, {4, 3}}
```

---

### 🔹 **5. Find the Maximum and Minimum Element in a Vector**  
💡 **Concept:** `min_element()`, `max_element()`

**Problem:**  
Find the **minimum and maximum** values in a given vector.

🔹 **Input:**  
```
vector<int> v = {7, 3, 9, 2, 5};
```
🔹 **Expected Output:**  
```
Min: 2, Max: 9
```

---

### 🔹 **6. Prefix Sum Computation**  
💡 **Concept:** `partial_sum()`

**Problem:**  
Given an array, compute its **prefix sum array**.

🔹 **Input:**  
```
vector<int> v = {1, 2, 3, 4, 5};
```
🔹 **Expected Output:**  
```
{1, 3, 6, 10, 15}
```

---

### 🔹 **7. Convert a Vector to a Set for Fast Lookup**  
💡 **Concept:** `unordered_set`

**Problem:**  
Given a vector, return all unique elements in sorted order.

🔹 **Input:**  
```
vector<int> v = {5, 3, 1, 3, 2, 2, 4, 5};
```
🔹 **Expected Output:**  
```
{1, 2, 3, 4, 5}
```

---

### 🔹 **8. Using `bitset` to Find Even and Odd Numbers**  
💡 **Concept:** `bitset`

**Problem:**  
Given a number **N**, create a bitset to represent its **binary form**, and check if it's even or odd.

🔹 **Input:**  
```
int N = 10;
```
🔹 **Expected Output:**  
```
Binary: 1010
Even
```

---

### 🔹 **9. Remove All Occurrences of an Element in a Vector**  
💡 **Concept:** `erase() + remove()`

**Problem:**  
Remove all occurrences of **X** from a vector.

🔹 **Input:**  
```
vector<int> v = {1, 2, 3, 2, 4, 2, 5};
int X = 2;
```
🔹 **Expected Output:**  
```
{1, 3, 4, 5}
```

---

### 🔹 **10. Find Kth Smallest Element**  
💡 **Concept:** `nth_element()`

**Problem:**  
Find the **Kth smallest element** in an unsorted vector.

🔹 **Input:**  
```
vector<int> v = {7, 10, 4, 3, 20, 15};
int K = 3;
```
🔹 **Expected Output:**  
```
7
```

---

### 💡 **Next Steps?**  
1️⃣ Try solving these problems in C++ using the mentioned STL techniques.  
2️⃣ If you need hints or solutions, let me know!  
3️⃣ Once comfortable, move on to **medium-level** CP problems. 🚀