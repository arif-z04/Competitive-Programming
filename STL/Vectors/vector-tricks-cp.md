### 🚀 **Widely Used Vector Tricks in Competitive Programming**  

In **competitive programming (CP)**, **speed and efficiency** matter the most. **Vectors** are heavily used due to their **dynamic resizing**, **ease of use**, and **STL functions**. Here are some **must-know vector tricks** to speed up your coding in CP.  

---

## **1️⃣ Fast Input & Output for Vectors**  
**💡 Trick**: Use `scanf` & `printf` (or `cin.tie(0) & sync_with_stdio(0)`) to optimize input-output.  

```cpp
ios::sync_with_stdio(0);
cin.tie(0);
```
👉 **Example:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &x : v) cin >> x;  // Fast input

    for (int x : v) cout << x << " ";  // Fast output
}
```
✅ **Reduces execution time** significantly!  

---

## **2️⃣ Sorting & Removing Duplicates (Unique Elements)**
```cpp
sort(v.begin(), v.end());  
v.erase(unique(v.begin(), v.end()), v.end());
```
👉 **Example:**
```cpp
vector<int> v = {4, 2, 2, 8, 5, 5, 7};
sort(v.begin(), v.end());  
v.erase(unique(v.begin(), v.end()), v.end());  

for (int num : v) cout << num << " ";  // Output: 2 4 5 7 8
```
✅ **Useful for problems that require distinct elements.**  

---

## **3️⃣ Checking if an Element Exists (Faster than Loops)**
**💡 Trick**: Use `binary_search()` for **sorted vectors** to check if an element exists in `O(log N)`.  

```cpp
if (binary_search(v.begin(), v.end(), X)) 
    cout << "Element exists";
```

👉 **Example:**
```cpp
vector<int> v = {1, 3, 5, 7, 9};
sort(v.begin(), v.end());  

cout << (binary_search(v.begin(), v.end(), 5) ? "Yes" : "No");  // Output: Yes
```
✅ **Faster than `find()` in sorted vectors!**  

---

## **4️⃣ Finding Lower Bound & Upper Bound**
### **🔹 `lower_bound(v.begin(), v.end(), X)`**
- Returns **first position** where `X` **can be inserted**.
- If `X` exists, returns its **position**.
- If `X` doesn’t exist, returns the **next greater element**.

### **🔹 `upper_bound(v.begin(), v.end(), X)`**
- Returns the **first position** where `X` is **greater** than given value.

👉 **Example:**
```cpp
vector<int> v = {10, 20, 30, 30, 40, 50};
sort(v.begin(), v.end());

cout << "Lower bound of 30: " << (lower_bound(v.begin(), v.end(), 30) - v.begin());  // Output: 2
cout << "\nUpper bound of 30: " << (upper_bound(v.begin(), v.end(), 30) - v.begin());  // Output: 4
```
✅ **Great for binary search and range queries!**  

---

## **5️⃣ Rotate a Vector in `O(N)`**
Instead of writing a loop, use `rotate()` from STL.  
```cpp
rotate(v.begin(), v.begin() + k, v.end());  // Left rotate by k positions
rotate(v.rbegin(), v.rbegin() + k, v.rend());  // Right rotate by k positions
```
👉 **Example:**  
```cpp
vector<int> v = {1, 2, 3, 4, 5};
rotate(v.begin(), v.begin() + 2, v.end());

for (int num : v) cout << num << " ";  // Output: 3 4 5 1 2
```
✅ **Faster than writing loops manually!**  

---

## **6️⃣ Finding Maximum & Minimum Element in `O(N)`**
```cpp
int maxNum = *max_element(v.begin(), v.end());
int minNum = *min_element(v.begin(), v.end());
```
👉 **Example:**
```cpp
vector<int> v = {3, 7, 2, 8, 1};
cout << "Max: " << *max_element(v.begin(), v.end());  // Output: 8
cout << "\nMin: " << *min_element(v.begin(), v.end());  // Output: 1
```
✅ **Efficient and avoids manual looping.**  

---

## **7️⃣ Count Frequency of an Element**
```cpp
int countX = count(v.begin(), v.end(), X);
```
👉 **Example:**  
```cpp
vector<int> v = {1, 2, 3, 2, 2, 4};
cout << "Count of 2: " << count(v.begin(), v.end(), 2);  // Output: 3
```
✅ **Useful for problems involving counting occurrences.**  

---

## **8️⃣ Remove Elements That Meet a Condition**
Use `remove_if()` to delete elements **without loops**!  
```cpp
v.erase(remove_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; }), v.end());
```
👉 **Example:**  
```cpp
vector<int> v = {1, 2, 3, 4, 5, 6};
v.erase(remove_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; }), v.end());

for (int num : v) cout << num << " ";  // Output: 1 3 5
```
✅ **Saves time when filtering elements.**  

---

## **9️⃣ Fastest Way to Copy & Swap Vectors**
```cpp
vector<int> v1 = {1, 2, 3}, v2 = {4, 5, 6};
v1.swap(v2);
```
👉 **After swapping:**  
🔹 `v1` becomes `{4, 5, 6}`  
🔹 `v2` becomes `{1, 2, 3}`  
✅ **Faster than manually swapping elements!**  

---

## **🔟 Merge Two Sorted Vectors in `O(N log N)`**
```cpp
vector<int> v1 = {1, 3, 5}, v2 = {2, 4, 6}, v3;
merge(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3));
```
✅ **Great for merging sorted arrays efficiently!**  

---

### **🔥 Final Summary of CP Tricks**
✅ **Use `ios::sync_with_stdio(0); cin.tie(0);`** for fast I/O.  
✅ **Use `sort() + unique()`** to remove duplicates efficiently.  
✅ **Use `binary_search()`** for fast element searching (`O(log N)`).  
✅ **Use `lower_bound()` & `upper_bound()`** for range-based queries.  
✅ **Use `rotate()`** for quick shifting of elements.  
✅ **Use `max_element()` & `min_element()`** to find max/min in `O(N)`.  
✅ **Use `remove_if()`** to erase elements **without loops**.  
✅ **Use `merge()`** to combine sorted vectors efficiently.  

---

### 🎯 **Want to Practice?**
Try these problems on **Codeforces, Leetcode, or AtCoder** using the tricks:  
1️⃣ **Remove duplicates from an array** (`sort() + unique()`)  
2️⃣ **Find the smallest missing number** (`lower_bound()`)  
3️⃣ **Find the second-largest element** (`max_element() with remove()`)  
4️⃣ **Rotate an array efficiently** (`rotate()`)  
5️⃣ **Merge two sorted arrays** (`merge()`)  

🚀 **Master these tricks to boost your CP performance!** 🚀  
