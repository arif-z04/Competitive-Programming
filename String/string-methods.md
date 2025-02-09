In **Competitive Programming (CP)**, working efficiently with **C++ strings** is essential. Below are **widely used string methods** and techniques that are frequently used in contests.

---

## **1. `length()` / `size()` – Get String Length**
```cpp
std::string s = "hello";
std::cout << s.length(); // 5
std::cout << s.size();   // 5
```
📌 **Tip:** Both `length()` and `size()` are equivalent.

---

## **2. `substr(start, length)` – Extract Substring**
```cpp
std::string s = "hello";
std::cout << s.substr(1, 3); // "ell"
```
📌 **Tip:** Used in **sliding window** and **pattern matching** problems.

---

## **3. `find()` – Locate Substring**
```cpp
std::string s = "hello world";
size_t pos = s.find("world"); // Returns 6
```
📌 **Tip:** Returns `std::string::npos` if not found.

---

## **4. `rfind()` – Find Last Occurrence**
```cpp
std::string s = "abcabc";
size_t pos = s.rfind("abc"); // Returns 3 (last occurrence)
```

---

## **5. `erase(start, length)` – Remove Part of a String**
```cpp
std::string s = "hello";
s.erase(1, 2); // "hlo"
```
📌 **Tip:** Use `remove()` with `erase()` to delete specific characters:
```cpp
s.erase(std::remove(s.begin(), s.end(), 'l'), s.end()); // "heo"
```

---

## **6. `replace(start, length, newStr)` – Replace Substring**
```cpp
std::string s = "hello";
s.replace(1, 2, "i"); // "hilo"
```

---

## **7. `insert(pos, str)` – Insert a Substring**
```cpp
std::string s = "helo";
s.insert(3, "l"); // "hello"
```

---

## **8. `append(str)` / `+=` – Concatenation**
```cpp
std::string s1 = "hello";
std::string s2 = " world";
s1.append(s2); // "hello world"
s1 += s2;      // "hello world"
```
📌 **Tip:** `+=` is often **faster** than `append()` in CP.

---

## **9. `compare(str)` – Compare Strings**
```cpp
std::string s1 = "abc", s2 = "def";
if (s1.compare(s2) == 0) std::cout << "Equal";
else if (s1.compare(s2) < 0) std::cout << "s1 is smaller";
else std::cout << "s1 is greater";
```
📌 **Tip:** `compare()` is **faster than `==`** in lexicographical comparison.

---

## **10. `c_str()` – Convert to C-Style String (`char*`)**
```cpp
std::string s = "hello";
const char* cstr = s.c_str();
```
📌 **Tip:** Useful in problems requiring **C-string functions** (`strcmp`, `strcpy`).

---

## **11. `stoi()` / `stoll()` – Convert String to Integer**
```cpp
std::string numStr = "1234";
int num = std::stoi(numStr); // 1234
long long bigNum = std::stoll("9876543210");
```
📌 **Tip:** Use `stoll()` for **large numbers**.

---

## **12. `to_string()` – Convert Number to String**
```cpp
int num = 123;
std::string s = std::to_string(num); // "123"
```

---

## **13. `sort()` – Sort a String (Lexicographically)**
```cpp
std::string s = "dcba";
std::sort(s.begin(), s.end()); // "abcd"
```
📌 **Tip:** Useful in **anagram problems**.

---

## **14. `reverse()` – Reverse a String**
```cpp
std::string s = "hello";
std::reverse(s.begin(), s.end()); // "olleh"
```
📌 **Tip:** Used in **palindrome checking**.

---

## **15. `unique()` – Remove Consecutive Duplicates**
```cpp
s.erase(std::unique(s.begin(), s.end()), s.end());
```
📌 **Tip:** Works **only if the string is sorted**.

---

## **16. `count()` – Count Occurrences of a Character**
```cpp
int cnt = std::count(s.begin(), s.end(), 'a');
```

---

## **17. `islower()` / `isupper()` – Check Character Case**
```cpp
char c = 'A';
if (std::islower(c)) std::cout << "Lowercase";
if (std::isupper(c)) std::cout << "Uppercase";
```

---

## **18. `tolower()` / `toupper()` – Convert Case**
```cpp
char c = 'A';
c = std::tolower(c); // 'a'
c = std::toupper(c); // 'A'
```
📌 **Tip:** Use `transform()` for entire strings:
```cpp
std::transform(s.begin(), s.end(), s.begin(), ::toupper);
```

---

## **19. `isspace()` – Check for Whitespace**
```cpp
if (std::isspace(s[i])) std::cout << "Whitespace";
```

---

## **20. `find_first_of()` / `find_last_of()`**
Finds first or last occurrence of any character from another string.
```cpp
std::string s = "abcde";
size_t pos = s.find_first_of("cd"); // 2 (first 'c' found)
size_t pos2 = s.find_last_of("cd"); // 3 (last 'd' found)
```

---

## **21. `is_permutation()` – Check if Two Strings are Permutations**
```cpp
std::string s1 = "listen", s2 = "silent";
if (std::is_permutation(s1.begin(), s1.end(), s2.begin())) 
    std::cout << "Yes, they are permutations";
```

---

## **22. Fastest Way to Remove Spaces in a String**
```cpp
s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
```

---

## **23. Find Most Frequent Character**
```cpp
char mostFrequentChar(const std::string& s) {
    int freq[256] = {0};
    for (char c : s) freq[c]++;
    return std::max_element(freq, freq + 256) - freq;
}
```

---

### **🚀 Competitive Programming Tips**
✅ **Use `std::ios::sync_with_stdio(false); std::cin.tie(0);`** for faster I/O.  
✅ **Use `unordered_map<char, int>`** for **fast character frequency counting**.  
✅ **Use `std::set` for unique substrings** in substring problems.  
✅ **Use `std::deque` for sliding window** when frequent insert/delete is needed.  

---
