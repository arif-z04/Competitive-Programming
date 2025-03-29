In C++, string formatting can be done using multiple approaches. Here are the most commonly used methods:

---

## **1. Using `std::cout` (Basic Output)**
The simplest way to format strings is using `std::cout` with manipulators:
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    double y = 3.14159;
    cout << "Integer: " << x << ", Double: " << y << endl;
    return 0;
}
```

#### **Manipulators for Formatting**
- `std::setw(n)` → Sets width
- `std::setprecision(n)` → Controls decimal places
- `std::fixed` → Fixes floating-point precision
- `std::scientific` → Displays in scientific notation

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num = 3.1415926535;
    cout << fixed << setprecision(3) << num << endl; // Output: 3.142
    cout << scientific << num << endl; // Scientific notation
    cout << setw(10) << "C++" << endl; // Right-aligned width 10
}
```

---

## **2. Using `sprintf()` (C-style Formatting)**
`sprintf()` is useful for formatting strings like in C:
```cpp
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char buffer[100];
    int x = 42;
    double pi = 3.14159;

    sprintf(buffer, "Number: %d, Pi: %.2f", x, pi);
    cout << buffer << endl; // Output: Number: 42, Pi: 3.14
}
```
✅ Supports format specifiers: `%d`, `%f`, `%s`, `%x`, etc.

🚨 **Downside:** Prone to buffer overflow if not handled carefully.

---

## **3. Using `std::stringstream` (Safer & More Flexible)**
`std::stringstream` allows more complex formatting while keeping type safety.

```cpp
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int age = 25;
    double salary = 50000.75;
    
    stringstream ss;
    ss << "Age: " << age << ", Salary: $" << fixed << setprecision(2) << salary;

    string formatted = ss.str();
    cout << formatted << endl; // Output: Age: 25, Salary: $50000.75
}
```
✅ Safer than `sprintf()`, avoids buffer overflows.  
✅ Supports any data type without specifying format specifiers.  

---

## **4. Using `std::format` (C++20)**
C++20 introduced `std::format()` which is **Python-style string formatting**.

```cpp
#include <iostream>
#include <format>
using namespace std;

int main() {
    int num = 42;
    double pi = 3.14159;

    string result = format("Number: {}, Pi: {:.2f}", num, pi);
    cout << result << endl; // Output: Number: 42, Pi: 3.14
}
```
✅ **Easier & safer** than `sprintf()`.  
✅ **Supports placeholders** like Python’s `f-strings`.  
🚨 Requires **C++20** (not available in older compilers).

---

## **5. Using `std::to_string()` (Simple Conversion)**
To quickly convert numbers to strings:
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 100;
    double pi = 3.14;
    
    string s1 = to_string(num);
    string s2 = to_string(pi);
    
    cout << "String1: " << s1 << ", String2: " << s2 << endl;
}
```
🚨 **Downside:** Doesn't control precision well (e.g., `to_string(3.14159)` → `"3.141590"`).

---

### **Which One Should You Use?**
| Method | Pros | Cons |
|--------|------|------|
| `std::cout` | Simple, built-in | No direct string manipulation |
| `sprintf()` | Fast, C-style formatting | Risk of buffer overflow |
| `std::stringstream` | Type-safe, flexible | Slightly verbose |
| `std::format()` | Cleanest, Python-like (C++20) | Requires newer compilers |
| `std::to_string()` | Quick conversion | Limited formatting control |

---

### **Best Practice**
- **Use `std::format()`** if on C++20 (clean & powerful).
- **Use `std::stringstream`** for complex manipulations in older C++ versions.
- **Use `std::cout` with `setw()` & `setprecision()`** for formatted console output.
- **Use `sprintf()`** only when performance is critical and buffer safety is handled.

