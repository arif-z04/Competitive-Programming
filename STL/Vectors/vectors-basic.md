### **Vectors in C++ (Basics)**  
A **vector** in C++ is part of the Standard Template Library (**STL**) and is similar to a dynamic array. It allows automatic resizing and provides various useful functions for manipulation.

To use vectors, you must include the `<vector>` header:

```cpp
#include <iostream>
#include <vector>

using namespace std;
```

---

## **1. Declaring a Vector**
```cpp
vector<int> numbers; // Declares an empty vector of integers
vector<int> numbers(5); // Declares a vector with 5 elements, initialized to 0
vector<int> numbers(5, 10); // Declares a vector with 5 elements, all initialized to 10
vector<int> numbers = {1, 2, 3, 4, 5}; // Declares a vector with specific values
```

---

## **2. Adding and Removing Elements**
### **Adding Elements**
- **`push_back(value)`** → Adds an element to the end  
- **`insert(position, value)`** → Inserts an element at a specific position  

```cpp
vector<int> v;
v.push_back(10); // Adds 10 to the end
v.push_back(20); // Adds 20 to the end

v.insert(v.begin(), 5); // Inserts 5 at the beginning
```

### **Removing Elements**
- **`pop_back()`** → Removes the last element  
- **`erase(position)`** → Removes an element at a specific position  
- **`clear()`** → Removes all elements  

```cpp
v.pop_back(); // Removes the last element (20)
v.erase(v.begin()); // Removes the first element (5)
v.clear(); // Clears the vector (size becomes 0)
```

---

## **3. Accessing Elements**
### **Using Index**
```cpp
cout << v[0]; // Access first element
cout << v.at(1); // Access second element (safe access with bounds checking)
```

### **First and Last Elements**
```cpp
cout << v.front(); // First element
cout << v.back(); // Last element
```

---

## **4. Size and Capacity**
```cpp
cout << v.size(); // Number of elements
cout << v.capacity(); // Storage capacity (may be greater than size)
```

---

## **5. Iterating Over a Vector**
### **Using a For Loop**
```cpp
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
```

### **Using a Range-Based Loop**
```cpp
for (int num : v) {
    cout << num << " ";
}
```

### **Using an Iterator**
```cpp
vector<int>::iterator it;
for (it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
}
```

---

## **6. Sorting a Vector**
```cpp
#include <algorithm> // Required for sorting

sort(v.begin(), v.end()); // Sort in ascending order
sort(v.rbegin(), v.rend()); // Sort in descending order
```

---

## **7. Checking if a Vector is Empty**
```cpp
if (v.empty()) {
    cout << "Vector is empty";
}
```

---

## **8. Swapping Two Vectors**
```cpp
vector<int> v1 = {1, 2, 3};
vector<int> v2 = {4, 5, 6};

v1.swap(v2); // Now v1 contains {4, 5, 6} and v2 contains {1, 2, 3}
```

---

### **Example Program**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {3, 1, 4, 1, 5, 9};

    v.push_back(2);
    v.push_back(6);

    cout << "Vector elements: ";
    for (int num : v) {
        cout << num << " ";
    }

    sort(v.begin(), v.end());

    cout << "\nSorted vector: ";
    for (int num : v) {
        cout << num << " ";
    }

    v.pop_back();
    cout << "\nAfter pop_back(): ";
    for (int num : v) {
        cout << num << " ";
    }

    return 0;
}
```

---

### **Key Takeaways**
✔ **Vectors are dynamic arrays** that can resize automatically.  
✔ **Use `.push_back()` and `.pop_back()`** to add/remove elements efficiently.  
✔ **Use `.at()` for safe access** (checks bounds).  
✔ **Sorting is easy with `sort()`** from `<algorithm>`.  
✔ **Vectors support iterators and range-based loops** for traversal.  

