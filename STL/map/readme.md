### **Introduction to `map` in C++**
A `map` in C++ is a built-in associative container provided by the **Standard Template Library (STL)**. It stores key-value pairs, where each key is unique, and values are associated with those keys.

It is implemented as a **self-balancing binary search tree (Red-Black Tree)**, ensuring operations like insertion, deletion, and search are performed in **O(log n)** time complexity.

---
## **Basic Syntax**
```cpp
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> myMap;  // Declaring a map with int as key and string as value

    myMap[1] = "Apple";      // Inserting values
    myMap[2] = "Banana";
    myMap[3] = "Cherry";

    cout << "Value at key 2: " << myMap[2] << endl; // Accessing values

    return 0;
}
```
### **Output**
```
Value at key 2: Banana
```

---
## **Key Features of `map`**
1. **Stores unique keys in sorted order** (ascending by default).
2. **Efficient lookup, insertion, and deletion in O(log n)**.
3. **Uses balanced BST internally** (Red-Black Tree).
4. **Allows access via `[]` operator or `.at()` method**.

---
## **Basic Operations**
### **1. Insertion**
#### **Method 1: Using `[]` operator**
```cpp
myMap[1] = "Apple";
myMap[2] = "Banana";
```

#### **Method 2: Using `.insert()`**
```cpp
myMap.insert({3, "Cherry"});
myMap.insert(make_pair(4, "Dates"));
```

---
### **2. Accessing Elements**
#### **Method 1: Using `[]`**
```cpp
cout << myMap[1];  // Apple
```
🔴 **Note:** If the key doesn’t exist, `[]` will create a new entry with default value.

#### **Method 2: Using `.at()`**
```cpp
cout << myMap.at(1);  // Apple
```
✅ **Safer than `[]`**, because it throws an error if the key is missing.

---
### **3. Iterating Over a `map`**
#### **Using `for` loop with `auto`**
```cpp
for (auto it : myMap) {
    cout << "Key: " << it.first << ", Value: " << it.second << endl;
}
```

#### **Using Iterator**
```cpp
map<int, string>::iterator it;
for (it = myMap.begin(); it != myMap.end(); it++) {
    cout << "Key: " << it->first << ", Value: " << it->second << endl;
}
```

---
### **4. Checking and Erasing Elements**
#### **Check if a Key Exists**
```cpp
if (myMap.find(2) != myMap.end()) {
    cout << "Key 2 exists!" << endl;
} else {
    cout << "Key 2 not found!" << endl;
}
```

#### **Erase an Element**
```cpp
myMap.erase(2); // Removes key 2
```

---
## **Example: Student Database Using `map`**
```cpp
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> studentDB;

    // Adding students
    studentDB[101] = "Alice";
    studentDB[102] = "Bob";
    studentDB[103] = "Charlie";

    // Display all students
    for (auto it : studentDB) {
        cout << "Roll No: " << it.first << ", Name: " << it.second << endl;
    }

    // Search for a student
    int rollNo = 102;
    if (studentDB.find(rollNo) != studentDB.end()) {
        cout << "Student found: " << studentDB[rollNo] << endl;
    } else {
        cout << "Student not found!" << endl;
    }

    return 0;
}
```
---
## **Conclusion**
- **`map` is useful for key-value storage**, ensuring **sorted keys**.
- **Best suited for operations where fast lookup is required**.
- **Use `unordered_map` if order doesn’t matter** for **O(1) operations**.

---
