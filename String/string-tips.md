When working with **strings in C++ for competitive programming**, efficiency and simplicity are key. Here are some **useful tips, tricks, and methods** to optimize your approach:

---

## **1. Use `getline()` for Input Handling**
In CP problems, input strings may contain spaces. Instead of `cin`, use `getline()`:
```cpp
std::string s;
std::getline(std::cin, s);
```
🔹 **Tip:** To avoid `getline()` skipping input after `cin`, use `std::cin.ignore()`.

---

## **2. Fast Input & Output (I/O)**
For large string inputs, use **`ios::sync_with_stdio(false);`** to speed up I/O:
```cpp
std::ios::sync_with_stdio(false);
std::cin.tie(0);
std::cout.tie(0);
```
🔹 **Tip:** This disables C and C++ I/O synchronization, making `cin/cout` faster.

---

## **3. Finding and Erasing Characters**
Use **`find()` and `erase()`** for quick searching and removal:
```cpp
std::string s = "abcdef";
size_t pos = s.find('c');
if (pos != std::string::npos) {
    s.erase(pos, 1);  // Removes 'c'
}
```
🔹 **Tip:** `npos` means "not found"; always check for it.

---

## **4. Reverse a String in O(n)**
Use `reverse()` from `<algorithm>`:
```cpp
std::reverse(s.begin(), s.end());
```

🔹 **Tip:** This is faster than manually swapping elements.

---

## **5. Sorting a String (Lexicographically)**
Sort the string using:
```cpp
std::sort(s.begin(), s.end());
```
🔹 **Tip:** This helps in anagram problems (e.g., checking if two strings are permutations of each other).

---

## **6. Check for Palindrome**
```cpp
bool isPalindrome(const std::string &s) {
    return std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
}
```
🔹 **Tip:** `s.rbegin()` gives a reverse iterator.

---

## **7. Convert Characters to Uppercase/Lowercase**
```cpp
std::transform(s.begin(), s.end(), s.begin(), ::toupper);  // To Upper
std::transform(s.begin(), s.end(), s.begin(), ::tolower);  // To Lower
```
🔹 **Tip:** Use `islower()` and `isupper()` for character checks.

---

## **8. Count Frequency of Characters**
Using an array:
```cpp
int freq[26] = {0};
for (char c : s) freq[c - 'a']++;
```
🔹 **Tip:** Use `unordered_map<char, int>` if the string contains uppercase/lowercase/mixed characters.

---

## **9. Extract a Substring**
Use `substr()`:
```cpp
std::string sub = s.substr(2, 3); // Extracts 3 characters from index 2
```
🔹 **Tip:** Helpful for **sliding window** problems.

---

## **10. Convert String to Integer and Vice Versa**
```cpp
int num = std::stoi("123");      // String to int
std::string str = std::to_string(456);  // Int to string
```
🔹 **Tip:** Use `std::stoll()` for large numbers.

---

## **11. Removing Duplicates from a String**
```cpp
s.erase(std::unique(s.begin(), s.end()), s.end());
```
🔹 **Tip:** Works only if the string is sorted.

---

## **12. Longest Common Prefix (LCP)**
Sort the array and compare the first and last strings:
```cpp
std::string longestCommonPrefix(std::vector<std::string>& strs) {
    if (strs.empty()) return "";
    std::sort(strs.begin(), strs.end());
    std::string first = strs.front(), last = strs.back();
    int i = 0;
    while (i < first.size() && first[i] == last[i]) i++;
    return first.substr(0, i);
}
```

---

## **13. Check if One String is a Rotation of Another**
```cpp
bool isRotation(std::string s1, std::string s2) {
    if (s1.length() != s2.length()) return false;
    return (s1 + s1).find(s2) != std::string::npos;
}
```
🔹 **Tip:** Concatenating `s1` with itself helps check rotations efficiently.

---

## **14. Generate All Substrings in O(n²)**
```cpp
for (size_t i = 0; i < s.length(); i++) {
    for (size_t len = 1; len <= s.length() - i; len++) {
        std::cout << s.substr(i, len) << std::endl;
    }
}
```

---

## **15. Count Words in a String**
```cpp
std::istringstream ss(s);
std::string word;
int count = 0;
while (ss >> word) count++;
```
🔹 **Tip:** `std::istringstream` is useful for parsing words.

---

## **16. Fastest Way to Remove Spaces**
```cpp
s.erase(remove(s.begin(), s.end(), ' '), s.end());
```
🔹 **Tip:** `remove()` shifts non-space characters forward.

---

## **17. Find the Most Frequent Character**
```cpp
char mostFrequent(const std::string &s) {
    int freq[256] = {0};
    for (char c : s) freq[c]++;
    return std::max_element(freq, freq + 256) - freq;
}
```

---

### 🚀 **Final Competitive Programming Tips**
1. **Use `std::string::reserve(size)`** when working with large dynamic strings.
2. **Use `unordered_map<char, int>`** for **fast character frequency counting**.
3. **Use `std::set` to store unique substrings** for distinct substring problems.
4. **Use `std::deque` for sliding window problems** where pushing/popping from both ends is needed.

---
