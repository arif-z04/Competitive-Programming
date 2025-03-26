### **`binary_search()` in C++ – Overview and Competitive Programming Tricks**  

The `binary_search()` function in C++ is a built-in function from the `<algorithm>` header. It performs a binary search on a sorted range and returns `true` if the element exists, otherwise `false`.  

#### **Syntax:**
```cpp
#include <iostream>
#include <algorithm>  // Required for binary_search()
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    if (binary_search(arr, arr + n, 5)) 
        cout << "Found\n";
    else 
        cout << "Not Found\n";

    return 0;
}
```
🔹 **Time Complexity:** \( O(\log n) \)  
🔹 **Works only on sorted arrays or vectors**  

---

## 🚀 **Tricks & Advanced Usage in Competitive Programming**

### **1️⃣ Using with `vector`**
```cpp
vector<int> v = {2, 4, 6, 8, 10};
if (binary_search(v.begin(), v.end(), 6)) 
    cout << "Found\n";
```

### **2️⃣ Finding Lower and Upper Bound (Alternative to `binary_search`)**
🔹 `lower_bound(v.begin(), v.end(), x)`: First position where `x` or greater appears.  
🔹 `upper_bound(v.begin(), v.end(), x)`: First position where strictly greater than `x` appears.  

```cpp
vector<int> v = {1, 3, 3, 5, 7};
cout << "Lower Bound of 3: " << (lower_bound(v.begin(), v.end(), 3) - v.begin()) << '\n';
cout << "Upper Bound of 3: " << (upper_bound(v.begin(), v.end(), 3) - v.begin()) << '\n';
```
📌 **Why Use These?**  
- Use `lower_bound()` to find the first occurrence of an element.  
- Use `upper_bound()` for counting occurrences: `upper_bound - lower_bound`.  

---

### **3️⃣ Find Element Position using `binary_search()`**
Since `binary_search()` only returns `true/false`, find position using `lower_bound()`:
```cpp
auto it = lower_bound(v.begin(), v.end(), x);
if (it != v.end() && *it == x) 
    cout << "Index: " << (it - v.begin()) << '\n';
else 
    cout << "Not found\n";
```

---

### **4️⃣ Binary Search on `set` & `map`**
- **`set`**: Use `s.lower_bound(x)` to find if `x` exists.
- **`map`**: Use `m.lower_bound(x)` to get the closest key.

```cpp
set<int> s = {1, 2, 4, 7};
cout << (*s.lower_bound(4) == 4 ? "Found\n" : "Not Found\n");
```

---

### **5️⃣ Binary Search on Answer (Advanced Trick)**
For problems where we need to find the minimum/maximum valid value:
- Use `while (low < high)` with conditions.  
- Example: Finding smallest `x` such that `x² ≥ 50`.

```cpp
int low = 0, high = 50;
while (low < high) {
    int mid = low + (high - low) / 2;
    if (mid * mid >= 50) high = mid;
    else low = mid + 1;
}
cout << "Smallest x: " << low << '\n';
```
🔹 **Useful for:** Min/max problems, range-based queries, and optimal thresholds.

---

## **🔥 When to Use `binary_search()` in CP?**
✅ **Finding if an element exists in sorted data**  
✅ **Finding first/last occurrence (use `lower_bound` & `upper_bound`)**  
✅ **Optimizing brute force solutions using binary search on answer**  
✅ **Efficient queries on sorted structures (`set`, `map`, `vector`)**  

---
