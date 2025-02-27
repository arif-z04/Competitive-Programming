The `stack` in C++ Standard Template Library (STL) is a **container adapter** that follows the **Last In, First Out (LIFO)** principle, meaning the last element added to the stack is the first one to be removed.

## **1. Basic Operations of `stack`**
The `stack` class provides the following primary operations:

| Function      | Description |
|--------------|------------|
| `push(x)`    | Adds element `x` to the top of the stack. |
| `pop()`      | Removes the top element from the stack. |
| `top()`      | Returns the top element of the stack. |
| `size()`     | Returns the number of elements in the stack. |
| `empty()`    | Checks if the stack is empty (returns `true` if empty, `false` otherwise). |

---

## **2. Syntax and Example**
```cpp
#include <iostream>
#include <stack>  // Include stack header

using namespace std;

int main() {
    stack<int> s;  // Declare a stack of integers
    s.push(10);  // Pushing elements
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.top() << endl;  // Output: 30
    s.pop();  // Remove top element
    cout << "Top after pop: " << s.top() << endl;  // Output: 20
    cout << "Size of stack: " << s.size() << endl;  // Output: 2
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;  // Output: No

    return 0;
}
```

---

## **3. Underlying Container of `stack`**
The `stack` container adapter uses an underlying container, which by default is `deque`, but it can be changed to `vector` or `list`:

```cpp
stack<int, vector<int>> s1;  // Uses vector as underlying container
stack<int, list<int>> s2;    // Uses list as underlying container
```

---

## **4. Checking Stack Iteration**
The `stack` container does **not** provide iterators because it follows strict LIFO behavior. However, you can use a **loop with pop()** to iterate:

```cpp
while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
}
```
(Note: This **modifies** the stack, so make a copy if needed.)

---

## **5. Practical Application: Reverse a String**
```cpp
#include <iostream>
#include <stack>

using namespace std;

void reverseString(string str) {
    stack<char> s;

    for (char c : str) {
        s.push(c);
    }

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;
}

int main() {
    string str = "hello";
    reverseString(str);  // Output: "olleh"
    return 0;
}
```

---

## **6. Time Complexity**
| Operation | Time Complexity |
|-----------|----------------|
| `push()`  | O(1) |
| `pop()`   | O(1) |
| `top()`   | O(1) |
| `size()`  | O(1) |
| `empty()` | O(1) |

---

This is the basic idea of `stack` in STL. Do you want any specific details or applications? 😊