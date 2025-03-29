## Function

In C++, a **function** is a block of code that performs a specific task. Functions help in **code reusability, modularity, and readability**.

---

## **Types of Functions in C++**
1. **Built-in Functions** – Functions provided by C++ (e.g., `sqrt()`, `pow()` from `<cmath>`).
2. **User-defined Functions** – Functions created by the programmer.
3. **Recursive Functions** – Functions that call themselves.

---

## **Syntax of a Function**
```cpp
return_type function_name(parameters) {
    // Function body
    return value;  // If return type is void, no return needed
}
```

### **Example: Function to Add Two Numbers**
```cpp
#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    cout << "Sum: " << result << endl;
    return 0;
}
```
📌 **Output:**  
```
Sum: 8
```

---

## **Function Components**
1. **Return Type**: Specifies the type of value the function returns (`int`, `float`, `void`, etc.).
2. **Function Name**: A unique identifier for the function.
3. **Parameters**: Variables passed to the function.
4. **Function Body**: The code inside `{}` that defines the function.
5. **Return Statement**: Used to return a value (not needed for `void` functions).

---

## **Types of Function Calls**
### 1️⃣ **Call by Value (Default)**
- A copy of the argument is passed.
- Changes inside the function **do not affect** the original value.

```cpp
void modify(int x) {
    x = 10;
}

int main() {
    int a = 5;
    modify(a);
    cout << "a: " << a << endl;  // Output: a: 5 (No change)
}
```

### 2️⃣ **Call by Reference**
- The original variable is modified.

```cpp
void modify(int &x) {
    x = 10;
}

int main() {
    int a = 5;
    modify(a);
    cout << "a: " << a << endl;  // Output: a: 10 (Modified)
}
```

### 3️⃣ **Call by Pointer**
- Uses pointers to modify the original value.

```cpp
void modify(int *x) {
    *x = 10;
}

int main() {
    int a = 5;
    modify(&a);
    cout << "a: " << a << endl;  // Output: a: 10
}
```

---

## **Function Overloading (Same Name, Different Parameters)**
```cpp
#include <iostream>
using namespace std;

void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(double x) {
    cout << "Double: " << x << endl;
}

int main() {
    print(10);      // Calls print(int)
    print(3.14);    // Calls print(double)
}
```

---

## **Inline Functions (For Small Functions)**
- Faster execution as they are expanded in place.
```cpp
inline int square(int x) { return x * x; }
```

---

## **Recursive Functions**
- A function calling itself.
```cpp
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

---

