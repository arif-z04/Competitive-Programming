## **🔥 Recursion Tricks for Competitive Programming**
Recursion is a **powerful tool** in competitive programming (CP). To master recursion, you need to learn **common tricks** used in CP problems. Below are the most **widely used** recursion techniques:

---

## **📌 1. Fast Exponentiation (Binary Exponentiation)**
📢 **Use Case:** Quickly compute \( a^b \) in **O(log b)** instead of **O(b)**.

### **🔹 Trick: Reduce Power by Squaring**
\[
a^b = (a^{b/2})^2 \quad \text{if b is even}
\]
\[
a^b = a \times a^{b-1} \quad \text{if b is odd}
\]

### **🖥️ Code**
```cpp
#include <iostream>
using namespace std;

long long power(long long a, long long b) {
    if (b == 0) return 1; // Base Case

    long long half = power(a, b / 2);
    return (b % 2 == 0) ? half * half : half * half * a;
}

int main() {
    cout << "2^10 = " << power(2, 10) << endl;
}
```
**✅ Time Complexity:** **O(log b)**  
**✅ Space Complexity:** **O(log b) (due to recursion stack)**  

---

## **📌 2. Sum of Digits**
📢 **Use Case:** Used in CP problems that require breaking down numbers.

### **🖥️ Code**
```cpp
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0; // Base Case
    return (n % 10) + sumOfDigits(n / 10); // Recursive Case
}

int main() {
    cout << "Sum of digits of 1234: " << sumOfDigits(1234) << endl;
}
```
✅ **Time Complexity:** **O(log n)** (since we divide `n` by 10 in each step).  

---

## **📌 3. Count Digits**
📢 **Use Case:** Counting the number of digits in a number.

### **🖥️ Code**
```cpp
int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}
```
✅ **Time Complexity:** **O(log n)**  

---

## **📌 4. Reverse a Number**
📢 **Use Case:** Useful in problems like palindrome checking.

### **🖥️ Code**
```cpp
#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    cout << "Reverse of 1234: " << reverseNumber(1234) << endl;
}
```
✅ **Time Complexity:** **O(log n)**  

---

## **📌 5. Check if a Number is Palindrome**
📢 **Use Case:** CP problems that involve number symmetry.

### **🖥️ Code**
```cpp
bool isPalindrome(int n, int temp) {
    if (n == 0) return temp == 0;
    return isPalindrome(n / 10, temp * 10 + (n % 10));
}

int main() {
    int n = 121;
    cout << (isPalindrome(n, 0) ? "Palindrome" : "Not Palindrome") << endl;
}
```
✅ **Time Complexity:** **O(log n)**  

---

## **📌 6. Generate All Subsequences of a String**
📢 **Use Case:** Used in **subsets, combinatorial problems, and brute-force CP problems**.

### **🖥️ Code**
```cpp
#include <iostream>
using namespace std;

void generateSubsequences(string str, string output, int index) {
    if (index == str.length()) {
        cout << output << endl;
        return;
    }

    generateSubsequences(str, output, index + 1); // Exclude current char
    generateSubsequences(str, output + str[index], index + 1); // Include current char
}

int main() {
    string str = "abc";
    generateSubsequences(str, "", 0);
}
```
✅ **Time Complexity:** **O(2^n)**  
✅ **Space Complexity:** **O(n)**  

---

## **📌 7. Generate All Permutations of a String**
📢 **Use Case:** Used in CP problems that require **generating all orderings of a string**.

### **🖥️ Code**
```cpp
#include <iostream>
using namespace std;

void generatePermutations(string &str, int left, int right) {
    if (left == right) {
        cout << str << endl;
        return;
    }

    for (int i = left; i <= right; i++) {
        swap(str[left], str[i]); // Swap characters
        generatePermutations(str, left + 1, right);
        swap(str[left], str[i]); // Backtrack
    }
}

int main() {
    string str = "abc";
    generatePermutations(str, 0, str.length() - 1);
}
```
✅ **Time Complexity:** **O(n!)**  

---

## **📌 8. Print All Paths in a Grid (Maze Problem)**
📢 **Use Case:** Finding paths in a **2D grid**.

### **🖥️ Code**
```cpp
#include <iostream>
using namespace std;

void findPaths(int i, int j, int m, int n, string path) {
    if (i == m - 1 && j == n - 1) {
        cout << path << endl;
        return;
    }

    if (i < m - 1) findPaths(i + 1, j, m, n, path + "D"); // Move Down
    if (j < n - 1) findPaths(i, j + 1, m, n, path + "R"); // Move Right
}

int main() {
    int m = 2, n = 3; // Grid size
    findPaths(0, 0, m, n, "");
}
```
✅ **Time Complexity:** **O(2^(m+n))**  

---

## **📌 9. Tower of Hanoi (Classic Recursion)**
📢 **Use Case:** A classic recursion problem.

### **🖥️ Code**
```cpp
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 0) return;

    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    towerOfHanoi(3, 'A', 'C', 'B');
}
```
✅ **Time Complexity:** **O(2^n)**  

---

## **🎯 Summary Table**
| Trick | Use Case | Complexity |
|--------|-------------|-------------|
| **Fast Exponentiation** | Quick power calculations | **O(log n)** |
| **Sum of Digits** | Digit sum problems | **O(log n)** |
| **Count Digits** | Number length problems | **O(log n)** |
| **Reverse Number** | Palindrome checks | **O(log n)** |
| **Check Palindrome** | Symmetric number problems | **O(log n)** |
| **Generate Subsequences** | Combinatorial problems | **O(2^n)** |
| **Generate Permutations** | String orderings | **O(n!)** |
| **Grid Path Finding** | Maze problems | **O(2^(m+n))** |
| **Tower of Hanoi** | Classic recursion | **O(2^n)** |

---

## **🚀 Final Thoughts**
✔️ **Recursion is key for CP problems!**  
✔️ **Master base cases to avoid infinite recursion.**  
✔️ **Use memoization if needed to optimize.**  

---
