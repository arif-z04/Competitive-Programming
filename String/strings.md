C++ provides the `std::string` class (from the `<string>` header) to handle text efficiently. Here are the basics you should know:

---

### **1. Declaring and Initializing Strings**
```cpp
#include <iostream>
#include <string>

int main() {
    std::string s1 = "Hello";         // Direct initialization
    std::string s2("World");          // Constructor initialization
    std::string s3;                   // Empty string
    std::string s4 = s1 + " " + s2;   // Concatenation
    std::cout << s4 << std::endl;     // Output: Hello World
    return 0;
}
```

---

### **2. Taking Input (With and Without Spaces)**
```cpp
std::string str;
std::cin >> str;  // Reads only one word (stops at space)
std::getline(std::cin, str);  // Reads the entire line
```

---

### **3. String Operations**
```cpp
std::string s = "Hello";

// Accessing characters
std::cout << s[0];    // H
std::cout << s.at(1); // e

// Length of the string
std::cout << s.length();  // 5

// Concatenation
std::string s2 = " World";
std::string result = s + s2;  // "Hello World"

// Substring
std::string sub = s.substr(1, 3); // "ell"

// Finding a character or substring
size_t pos = s.find("lo");  // Returns 3

// Replacing a part of the string
s.replace(0, 2, "Hi");  // Changes "Hello" to "Hillo"

// Inserting into a string
s.insert(5, "!!");  // "Hello!!"

// Removing characters
s.erase(5, 2);  // Removes "!!", back to "Hello"

// Clearing the string
s.clear();

// Checking if the string is empty
if (s.empty()) std::cout << "String is empty!";
```

---

### **4. Iterating Over a String**
```cpp
std::string str = "Example";

// Using a for-loop
for (size_t i = 0; i < str.length(); i++)
    std::cout << str[i] << " ";

// Using range-based for-loop
for (char ch : str)
    std::cout << ch << " ";

// Using iterators
for (auto it = str.begin(); it != str.end(); ++it)
    std::cout << *it << " ";
```

---

### **5. Comparing Strings**
```cpp
std::string a = "apple";
std::string b = "banana";

if (a == b) std::cout << "Equal";
if (a != b) std::cout << "Not equal";

if (a < b) std::cout << "Apple comes before banana";  // Lexicographical comparison
```

---

### **6. String to Integer and Vice Versa**
```cpp
#include <iostream>
#include <string>

int main() {
    std::string numStr = "123";
    int num = std::stoi(numStr);  // Convert string to int

    int x = 456;
    std::string strX = std::to_string(x);  // Convert int to string

    std::cout << num + 10 << std::endl;  // 133
    std::cout << strX + " is a number";  // "456 is a number"
    return 0;
}
```

---

### **7. Converting Between C-Style Strings (`char*`) and `std::string`**
```cpp
std::string s = "Hello";
const char* cstr = s.c_str(); // Convert std::string to C-string

char arr[] = "World";
std::string s2(arr); // Convert C-string to std::string
```

---

### **8. Sorting a String**
```cpp
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string s = "dcba";
    std::sort(s.begin(), s.end()); // "abcd"
    std::cout << s;
    return 0;
}
```

---

### **9. Reversing a String**
```cpp
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string s = "Hello";
    std::reverse(s.begin(), s.end()); // "olleH"
    std::cout << s;
    return 0;
}
```

---
