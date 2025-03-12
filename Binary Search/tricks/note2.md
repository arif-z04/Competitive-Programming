## **🚀 More Advanced Tricks for `binary_search()` in C++ (Competitive Programming)**  

Here are **powerful tricks** that can help you optimize your **competitive programming** solutions using `binary_search()` and its variations.  

---

## **1️⃣ Find the First & Last Occurrence of an Element**
### **Problem:** Given a sorted array, find the **first and last** index of a target element.  

### **🔹 Trick: Use `lower_bound()` and `upper_bound()`**
```cpp
#include <bits/stdc++.h>
using namespace std;

void findFirstAndLast(vector<int>& v, int x) {
    int first = lower_bound(v.begin(), v.end(), x) - v.begin();
    int last = upper_bound(v.begin(), v.end(), x) - v.begin() - 1;

    if (first < v.size() && v[first] == x) 
        cout << "First: " << first << ", Last: " << last << '\n';
    else 
        cout << "Element not found!\n";
}

int main() {
    vector<int> v = {1, 3, 3, 3, 5, 7, 9};
    findFirstAndLast(v, 3);
    return 0;
}
```
🔹 **Why use `upper_bound - 1`?** It gives the last occurrence directly.  
🔹 **Time Complexity:** \( O(\log n) \)  

---

## **2️⃣ Find the Number of Occurrences of an Element**
### **🔹 Trick: Use `upper_bound - lower_bound`**
```cpp
int countOccurrences(vector<int>& v, int x) {
    return upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x);
}

vector<int> v = {1, 2, 2, 2, 3, 4, 4, 5};
cout << "Count of 2: " << countOccurrences(v, 2) << '\n';
```
🔹 **Useful for:** Finding the frequency of elements in a sorted array **in O(log n)**.  

---

## **3️⃣ Binary Search on Answer – Find Minimum Satisfying Condition**
Used when searching for **the smallest or largest value that satisfies a condition**.  

### **🔹 Problem:** Find the smallest `x` where `x² ≥ 50`
```cpp
int low = 0, high = 50;
while (low < high) {
    int mid = low + (high - low) / 2;
    if (mid * mid >= 50) 
        high = mid;  // Keep searching in the lower half
    else 
        low = mid + 1;
}
cout << "Smallest x where x² ≥ 50: " << low << '\n';
```
🔹 **Great for:**  
- Finding **minimum/maximum** in search-space problems.  
- **Optimizing brute force solutions** by binary searching over answers.  

---

## **4️⃣ Finding the Closest Element in a Sorted Array**
### **Problem:** Find the closest number to `X` in a sorted array.  

### **🔹 Trick: Use `lower_bound()`**
```cpp
int findClosest(vector<int>& v, int x) {
    auto it = lower_bound(v.begin(), v.end(), x);
    
    if (it == v.begin()) return *it;
    if (it == v.end()) return *(it - 1);
    
    int a = *(it - 1), b = *it;
    return (abs(x - a) <= abs(x - b)) ? a : b;
}

vector<int> v = {1, 3, 6, 8, 10};
cout << "Closest to 5: " << findClosest(v, 5) << '\n';
```
🔹 **Why `lower_bound()`?** It returns the first **greater than or equal** element, making it easy to check both neighbors.

---

## **5️⃣ Search in a Rotated Sorted Array (Modified Binary Search)**
### **Problem:** Given a rotated sorted array, search for a target element in \( O(\log n) \).  

### **🔹 Trick: Identify Sorted Half & Search Accordingly**
```cpp
int searchRotated(vector<int>& v, int x) {
    int low = 0, high = v.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (v[mid] == x) return mid;

        if (v[low] <= v[mid]) { // Left half sorted
            if (v[low] <= x && x < v[mid]) high = mid - 1;
            else low = mid + 1;
        } else { // Right half sorted
            if (v[mid] < x && x <= v[high]) low = mid + 1;
            else high = mid - 1;
        }
    }
    return -1;
}

vector<int> v = {4, 5, 6, 7, 0, 1, 2};
cout << "Index of 5: " << searchRotated(v, 5) << '\n';
```
🔹 **Time Complexity:** \( O(\log n) \)  
🔹 **Common in CP Problems involving rotated arrays.**  

---

## **6️⃣ Binary Search on Floating Point Values**
**Finding square root up to 6 decimal places**
```cpp
double squareRoot(double x) {
    double low = 0, high = x, mid;
    while (high - low > 1e-6) {
        mid = (low + high) / 2;
        if (mid * mid >= x) 
            high = mid;
        else 
            low = mid;
    }
    return high;
}
cout << "Square root of 50: " << fixed << setprecision(6) << squareRoot(50) << '\n';
```
🔹 **Use `1e-6` for precision control**  
🔹 **Used in geometry & optimization problems**  

---

## **7️⃣ Binary Search with STL’s `equal_range()`**
🔹 `equal_range(v.begin(), v.end(), x)` **returns a pair of iterators** representing the range of `x`.  
```cpp
auto range = equal_range(v.begin(), v.end(), 3);
cout << "First Index: " << (range.first - v.begin()) << '\n';
cout << "Last Index: " << (range.second - v.begin() - 1) << '\n';
```
**Why?** It's faster than calling `lower_bound()` and `upper_bound()` separately.

---

## **📌 Summary of Tricks**
| Trick | Use Case |
|------|-----------|
| `binary_search()` | Check if an element exists in sorted data. |
| `lower_bound()` | Find first position where `x` appears. |
| `upper_bound()` | Find first position where element `> x` appears. |
| `upper_bound - lower_bound` | Count occurrences of an element. |
| **Binary Search on Answer** | Optimize brute force search. |
| `findClosest()` | Find nearest element in a sorted array. |
| `searchRotated()` | Find element in a rotated sorted array. |
| **Binary Search on Floating Points** | Finding precision values (square root, optimization). |
| `equal_range()` | Get first & last occurrence efficiently. |

---

## **🚀 Mastering Binary Search in CP**
- **Solve problems on platforms like Codeforces & Leetcode**
- **Practice binary search on answers (range-based problems)**
- **Use `lower_bound()` & `upper_bound()` frequently**
- **Try problems involving rotated arrays & floating-point binary search**

