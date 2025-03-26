### 🚀 **Advanced Tricks with Vectors in C++**  

Once you're comfortable with the basics, let's explore some **cool tricks** and **advanced techniques** to make the most out of C++ vectors!  

---

## **1️⃣ Initialize a Vector in One Line**  
Instead of using multiple `push_back()`, initialize vectors smartly:  
```cpp
vector<int> v = {10, 20, 30, 40, 50};  // Direct initialization
vector<int> v(5, 100);  // Five elements, all initialized to 100
vector<int> v2(v.begin(), v.begin() + 3); // Copy first 3 elements from another vector
```

---

## **2️⃣ Reverse a Vector in One Line**  
You can reverse a vector **without writing a loop**!  
```cpp
reverse(v.begin(), v.end());  // Reverse the entire vector
```

👉 **Example:**  
```cpp
vector<int> v = {1, 2, 3, 4, 5};
reverse(v.begin(), v.end());

for (int num : v) cout << num << " ";  // Output: 5 4 3 2 1
```

---

## **3️⃣ Remove Duplicates from a Sorted Vector**  
```cpp
v.erase(unique(v.begin(), v.end()), v.end());
```
👉 **Example:**  
```cpp
vector<int> v = {1, 1, 2, 2, 3, 4, 4, 5};
v.erase(unique(v.begin(), v.end()), v.end());

for (int num : v) cout << num << " ";  // Output: 1 2 3 4 5
```
🔹 **Important**: The vector **must be sorted** before using `unique()`.  
```cpp
sort(v.begin(), v.end());
```

---

## **4️⃣ Find an Element in a Vector**  
You can use `find()` from `<algorithm>`:  
```cpp
if (find(v.begin(), v.end(), 30) != v.end()) 
    cout << "Element found!";
else 
    cout << "Element not found!";
```

---

## **5️⃣ Count the Occurrences of an Element**  
```cpp
int count_5 = count(v.begin(), v.end(), 5);
cout << "5 appears " << count_5 << " times";
```

---

## **6️⃣ Sort a Vector in Descending Order**  
```cpp
sort(v.rbegin(), v.rend()); // Reverse sorting
```
👉 **Example:**  
```cpp
vector<int> v = {5, 3, 8, 1, 9};
sort(v.rbegin(), v.rend());

for (int num : v) cout << num << " ";  // Output: 9 8 5 3 1
```

---

## **7️⃣ Erase Elements Based on a Condition**  
🔹 Remove all even numbers:  
```cpp
v.erase(remove_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; }), v.end());
```
🔹 Remove all elements **greater than 10**:  
```cpp
v.erase(remove_if(v.begin(), v.end(), [](int x) { return x > 10; }), v.end());
```

---

## **8️⃣ Get Maximum and Minimum Element**  
```cpp
cout << "Max: " << *max_element(v.begin(), v.end());
cout << "Min: " << *min_element(v.begin(), v.end());
```

---

## **9️⃣ Rotate a Vector**  
🔹 **Left Rotate by 2 positions:**  
```cpp
rotate(v.begin(), v.begin() + 2, v.end());
```
🔹 **Right Rotate by 2 positions:**  
```cpp
rotate(v.rbegin(), v.rbegin() + 2, v.rend());
```

👉 **Example:**  
```cpp
vector<int> v = {1, 2, 3, 4, 5};
rotate(v.begin(), v.begin() + 2, v.end());

for (int num : v) cout << num << " ";  // Output: 3 4 5 1 2
```

---

## **🔟 Find First Element Greater Than X**  
```cpp
auto it = upper_bound(v.begin(), v.end(), X);
if (it != v.end()) cout << "First element greater than " << X << " is " << *it;
```
🔹 **Important**: `upper_bound()` works **only on sorted vectors**.

---

## **💡 Bonus: Convert a Vector into a Set (Unique Elements)**  
```cpp
set<int> s(v.begin(), v.end());
```
This automatically removes duplicates!

---

### **🔥 Putting It All Together (Example Program)**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50, 20, 30};

    // Remove duplicates
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    // Reverse the vector
    reverse(v.begin(), v.end());

    // Find max and min
    int maxNum = *max_element(v.begin(), v.end());
    int minNum = *min_element(v.begin(), v.end());

    cout << "Vector elements: ";
    for (int num : v) cout << num << " ";
    
    cout << "\nMax: " << maxNum;
    cout << "\nMin: " << minNum;
    
    return 0;
}
```

---

### **🛠 Summary of Tricks**
✅ **Reverse a vector** → `reverse(v.begin(), v.end());`  
✅ **Remove duplicates** → `v.erase(unique(v.begin(), v.end()), v.end());`  
✅ **Find an element** → `find(v.begin(), v.end(), X);`  
✅ **Sort in descending order** → `sort(v.rbegin(), v.rend());`  
✅ **Rotate vector left/right** → `rotate(v.begin(), v.begin() + k, v.end());`  
✅ **Count occurrences** → `count(v.begin(), v.end(), X);`  
✅ **Get max/min** → `max_element(v.begin(), v.end());`  
✅ **Remove elements based on a condition** → `remove_if()`  
✅ **Convert vector to set (remove duplicates)** → `set<int> s(v.begin(), v.end());`  


