### 🚀 **Practice Problems for Vector Tricks in Competitive Programming**  

Here are **10 problems** covering the **most used vector tricks** in CP. Try solving them! 💪  

---

### **🟢 Problem 1: Remove Duplicates from a Vector**
📌 **Given** a vector of `N` integers, remove duplicate elements and print the unique values in **ascending order**.  
🔹 **Input:** `N = 7, v = {4, 2, 2, 8, 5, 5, 7}`  
🔹 **Output:** `2 4 5 7 8`  

---

### **🟢 Problem 2: Find the First Element Greater Than X**
📌 **Given** a **sorted vector**, find the first element **strictly greater** than `X`. If no such element exists, print `-1`.  
🔹 **Input:** `v = {10, 20, 30, 40, 50}, X = 25`  
🔹 **Output:** `30`  

💡 **Hint**: Use `upper_bound()`.  

---

### **🟡 Problem 3: Count Frequency of an Element**
📌 **Given** a vector of `N` integers, find how many times `X` appears.  
🔹 **Input:** `N = 6, v = {1, 2, 3, 2, 2, 4}, X = 2`  
🔹 **Output:** `3`  

💡 **Hint**: Use `count()`.  

---

### **🟡 Problem 4: Rotate a Vector by K Positions**
📌 **Given** a vector of `N` integers and an integer `K`, rotate the vector **left** by `K` positions.  
🔹 **Input:** `v = {1, 2, 3, 4, 5}, K = 2`  
🔹 **Output:** `3 4 5 1 2`  

💡 **Hint**: Use `rotate()`.  

---

### **🟡 Problem 5: Remove All Even Numbers**
📌 **Given** a vector, remove all **even numbers** and print the remaining elements.  
🔹 **Input:** `v = {1, 2, 3, 4, 5, 6}`  
🔹 **Output:** `1 3 5`  

💡 **Hint**: Use `remove_if()`.  

---

### **🟠 Problem 6: Merge Two Sorted Vectors**
📌 **Given** two **sorted vectors**, merge them into a **single sorted vector**.  
🔹 **Input:** `v1 = {1, 3, 5}, v2 = {2, 4, 6}`  
🔹 **Output:** `1 2 3 4 5 6`  

💡 **Hint**: Use `merge()`.  

---

### **🟠 Problem 7: Find the Second Largest Element**
📌 **Given** a vector of `N` integers, find the **second largest** element.  
🔹 **Input:** `v = {10, 20, 4, 45, 99, 99}`  
🔹 **Output:** `45`  

💡 **Hint**: Use `max_element()` and `remove()`.  

---

### **🔴 Problem 8: Find Missing Smallest Positive Number**
📌 **Given** a vector of `N` integers (positive & negative), find the **smallest positive integer** that is **missing**.  
🔹 **Input:** `v = {3, 4, -1, 1}`  
🔹 **Output:** `2`  

💡 **Hint**: Use **sorting + lower_bound()**.  

---

### **🔴 Problem 9: Find the Median of a Vector**
📌 **Given** a vector of `N` integers, find the **median**. If `N` is even, return the average of the middle two elements.  
🔹 **Input:** `v = {2, 1, 5, 7, 2, 0, 5}`  
🔹 **Output:** `2`  

💡 **Hint**: **Sort and find middle element.**  

---

### **🔴 Problem 10: Find Pairs with Given Sum**
📌 **Given** a vector and an integer `S`, find **all pairs** `(a, b)` such that `a + b = S`.  
🔹 **Input:** `v = {1, 5, 7, -1, 5}, S = 6`  
🔹 **Output:**  
```
(1, 5)
(1, 5)
(7, -1)
```
💡 **Hint**: Use **unordered_map for O(N) solution**.  

---

## **📝 How to Practice?**
1️⃣ **Try solving these problems in C++.**  
2️⃣ **Use STL functions (sort, unique, binary_search, etc.).**  
3️⃣ **Optimize your solutions.**  
4️⃣ **Test with different inputs.**  

