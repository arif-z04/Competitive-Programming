### 🔹 `lower_bound()` and `upper_bound()` in `vector` (C++)  

These functions are **binary search-based** operations provided by the **STL `<algorithm>`** library in C++. They are useful for finding positions in a sorted vector efficiently.

---

## **🔹 1. `lower_bound()`**
- **Finds the first element that is **greater than or equal to** (≥) a given value.**
- **Returns an iterator to that element.**
- **If no such element is found, it returns `v.end()`.**
- **Time Complexity: O(log N) → Binary Search**

### **🔹 Example of `lower_bound()`**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50}; 
    int X = 25;

    auto it = lower_bound(v.begin(), v.end(), X);

    if (it != v.end())
        cout << "First element ≥ " << X << " is " << *it << endl;
    else
        cout << "No element found!" << endl;

    return 0;
}
```
🔹 **Output:**  
```
First element ≥ 25 is 30
```
🔹 **Explanation:**  
- `lower_bound(v.begin(), v.end(), 25)` searches for **25**.  
- **30 is the first number ≥ 25**, so it returns an iterator pointing to 30.

---

## **🔹 2. `upper_bound()`**
- **Finds the first element that is **strictly greater than** (>) a given value.**
- **Returns an iterator to that element.**
- **If no such element is found, it returns `v.end()`.**
- **Time Complexity: O(log N) → Binary Search**

### **🔹 Example of `upper_bound()`**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    int X = 30;

    auto it = upper_bound(v.begin(), v.end(), X);

    if (it != v.end())
        cout << "First element > " << X << " is " << *it << endl;
    else
        cout << "No element found!" << endl;

    return 0;
}
```
🔹 **Output:**  
```
First element > 30 is 40
```
🔹 **Explanation:**  
- `upper_bound(v.begin(), v.end(), 30)` finds the **first number > 30**, which is **40**.

---

## **🔹 Difference Between `lower_bound()` and `upper_bound()`**
| Function        | Finds First Element That Is... |
|---------------|----------------------------------|
| `lower_bound(v.begin(), v.end(), X)` | **≥ X** (greater than or equal to) |
| `upper_bound(v.begin(), v.end(), X)` | **> X** (strictly greater than) |

🔹 **Example:**
```cpp
vector<int> v = {10, 20, 30, 30, 40, 50}; 
int X = 30;
```
| Function | Returns Iterator to | Value |
|----------|--------------------|------|
| `lower_bound(v.begin(), v.end(), 30)` | First `30` | `30` |
| `upper_bound(v.begin(), v.end(), 30)` | First `40` | `40` |

---

## **🔹 Finding the Frequency of an Element**
You can find the **frequency** (count) of an element in a sorted vector using `upper_bound()` and `lower_bound()`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 30, 30, 40, 50};
    int X = 30;

    int count = upper_bound(v.begin(), v.end(), X) - lower_bound(v.begin(), v.end(), X);
    
    cout << "Frequency of " << X << " is " << count << endl;

    return 0;
}
```
🔹 **Output:**
```
Frequency of 30 is 3
```
🔹 **Explanation:**  
- `lower_bound()` finds the **first occurrence of 30**.
- `upper_bound()` finds the **first element greater than 30 (which is 40)**.
- The **difference** gives the number of times `30` appears.

---

## **🔹 Summary**
| Function | What It Finds? | Time Complexity |
|----------|---------------|----------------|
| `lower_bound(v.begin(), v.end(), X)` | First element **≥ X** | O(log N) |
| `upper_bound(v.begin(), v.end(), X)` | First element **> X** | O(log N) |
| `upper_bound() - lower_bound()` | **Frequency of X** | O(log N) |

