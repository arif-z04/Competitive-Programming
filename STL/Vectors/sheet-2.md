### 🚀 **Practice Problems for Advanced Vector Tricks in CP**  

Here are **10 problems** based on the **most powerful vector tricks** in CP. Try solving them! 💪🔥  

---

## **🟢 Problem 1: Range Sum Query (Prefix Sum)**
📌 **Given** an array `A` of `N` integers and `Q` queries. Each query asks for the sum of elements in the range `[L, R]`. Answer each query in **O(1)** time.  

🔹 **Input:**  
```
N = 5, Q = 3  
A = [1, 3, 5, 7, 9]  
Queries:  
1 3  
2 4  
0 4  
```
🔹 **Output:**  
```
9  
15  
25  
```  
💡 **Hint**: Use **prefix sum array**.

---

## **🟢 Problem 2: Maximum in Each Subarray of Size K (Sliding Window)**
📌 **Given** an array `A` of `N` integers and an integer `K`, find the **maximum** element in every contiguous subarray of size `K`.  

🔹 **Input:**  
```
N = 8, K = 3  
A = [1, 3, -1, -3, 5, 3, 6, 7]  
```
🔹 **Output:**  
```
3 3 5 5 6 7  
```  
💡 **Hint**: Use **deque (sliding window technique)** to solve in **O(N)**.

---

## **🟡 Problem 3: Find the Majority Element**
📌 **Given** an array of `N` elements, find the element that appears **more than** `N/2` times. If no such element exists, print `-1`.  

🔹 **Input:**  
```
N = 7  
A = [2, 2, 1, 1, 1, 2, 2]  
```
🔹 **Output:**  
```
2  
```  
💡 **Hint**: Use **Boyer-Moore Voting Algorithm** to solve in **O(N)**.

---

## **🟡 Problem 4: Find Kth Smallest Element**
📌 **Given** an unsorted array of `N` integers, find the `K`th **smallest** element.  

🔹 **Input:**  
```
N = 6, K = 3  
A = [7, 10, 4, 3, 20, 15]  
```
🔹 **Output:**  
```
7  
```  
💡 **Hint**: Use **min-heap (priority queue)** for an `O(N log K)` solution.

---

## **🟠 Problem 5: Find the Number of Subarrays with Given Sum**
📌 **Given** an array of `N` integers and an integer `S`, count the **number of subarrays** whose sum equals `S`.  

🔹 **Input:**  
```
N = 5, S = -10  
A = [10, 2, -2, -20, 10]  
```
🔹 **Output:**  
```
3  
```  
💡 **Hint**: Use **unordered_map to solve in O(N)**.

---

## **🟠 Problem 6: Merge Two Sorted Vectors**
📌 **Given** two sorted arrays, merge them into a **single sorted array**.  

🔹 **Input:**  
```
A = [1, 3, 5], B = [2, 4, 6]  
```
🔹 **Output:**  
```
1 2 3 4 5 6  
```  
💡 **Hint**: Use **`merge()` function from STL**.

---

## **🔴 Problem 7: Find the Smallest Missing Positive Integer**
📌 **Given** an unsorted array of `N` integers, find the **smallest positive integer** that is **missing**.  

🔹 **Input:**  
```
N = 4  
A = [3, 4, -1, 1]  
```
🔹 **Output:**  
```
2  
```  
💡 **Hint**: Solve in **O(N) using hash table or sorting**.

---

## **🔴 Problem 8: Efficient Range Updates (Difference Array)**
📌 **Given** an array of `N` integers, perform `Q` range update operations of the form:  
🔹 **Add `X` to all elements in the range `[L, R]`**  
🔹 Print the final array after all updates.  

🔹 **Input:**  
```
N = 5, Q = 3  
A = [0, 0, 0, 0, 0]  
Updates:  
1 3 2  
2 4 3  
0 2 1  
```
🔹 **Output:**  
```
1 3 5 3 3  
```  
💡 **Hint**: Use **difference array for `O(1)` updates**.

---

## **🔴 Problem 9: Find Longest Increasing Subsequence (LIS)**
📌 **Given** an array `A` of `N` integers, find the **length of the longest increasing subsequence (LIS)**.  

🔹 **Input:**  
```
N = 7  
A = [10, 9, 2, 5, 3, 7, 101, 18]  
```
🔹 **Output:**  
```
4  
```  
💡 **Hint**: Use **`lower_bound()` for O(N log N) LIS calculation**.

---

## **🔴 Problem 10: Find All Pairs with Given Sum**
📌 **Given** an array of `N` integers and an integer `S`, find **all pairs** `(a, b)` such that `a + b = S`.  

🔹 **Input:**  
```
N = 5, S = 6  
A = [1, 5, 7, -1, 5]  
```
🔹 **Output:**  
```
(1, 5)  
(1, 5)  
(7, -1)  
```  
💡 **Hint**: Use **unordered_map for O(N) solution**.

---

## **🔥 How to Practice?**
1️⃣ **Try solving these problems in C++.**  
2️⃣ **Use STL functions (`sort, unique, lower_bound, etc.`).**  
3️⃣ **Optimize your solutions (use `O(N)` instead of `O(N²)`).**  
4️⃣ **Test with large inputs to check efficiency.**  

