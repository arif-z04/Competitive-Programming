Bitwise operations and bitmasks are powerful tools in **C++ competitive programming**. They help in optimizing solutions, reducing memory usage, and speeding up calculations. Here are some **tips and tricks** for using them effectively:

---

## **1. Basics of Bitwise Operators**
| Operator | Meaning | Example |
|----------|---------|---------|
| `&` | AND | `5 & 3 → 101 & 011 = 001 (1)` |
| `I` | OR | `5 I 3 → 101 I 011 = 111 (7)` |
| `^` | XOR | `5 ^ 3 → 101 ^ 011 = 110 (6)` |
| `~` | NOT | `~5 → ~00000101 = 11111010 (-6 in 2's complement)` |
| `<<` | Left Shift | `5 << 1 → 00000101 << 1 = 00001010 (10)` |
| `>>` | Right Shift | `5 >> 1 → 00000101 >> 1 = 00000010 (2)` |

---

## **2. Common Bit Manipulation Tricks**
### **(a) Check if a number is odd/even**
```cpp
if (x & 1)  // If last bit is 1, x is odd
    cout << "Odd";
else
    cout << "Even";
```
⮕ **Faster than `x % 2 == 0`**

---

### **(b) Multiply and Divide by 2**
- **Multiply by 2:** `x << 1` (same as `x * 2`)
- **Divide by 2:** `x >> 1` (same as `x / 2`)

Example:
```cpp
int x = 5;
cout << (x << 1); // 10
cout << (x >> 1); // 2
```

⮕ **Faster than multiplication or division operators!**

---

### **(c) Swap Two Numbers Without Temporary Variable**
```cpp
a ^= b;
b ^= a;
a ^= b;
```
⮕ **Avoids extra memory usage**

---

### **(d) Check if a number is a power of 2**
```cpp
bool isPowerOf2(int x) {
    return (x && !(x & (x - 1)));
}
```
⮕ **Only powers of 2 have exactly one bit set (e.g., 1, 2, 4, 8, ...).**

---

### **(e) Count the Number of Set Bits (1s)**
#### **Method 1: __builtin_popcount() (GCC/Clang)**
```cpp
int count = __builtin_popcount(x);
```
⮕ **Faster than manual counting**

#### **Method 2: Brian Kernighan’s Algorithm (O(log N))**
```cpp
int countSetBits(int x) {
    int count = 0;
    while (x) {
        x &= (x - 1); // Removes the last set bit
        count++;
    }
    return count;
}
```
⮕ **Efficient way to count bits**

---

### **(f) Find the Position of the Rightmost Set Bit**
```cpp
int pos = __builtin_ctz(x) + 1; // ctz = Count Trailing Zeros
```
⮕ **Gives position of the first set bit (1-based index).**

---

### **(g) Find the Position of the Leftmost Set Bit**
```cpp
int pos = 31 - __builtin_clz(x) + 1; // clz = Count Leading Zeros
```
⮕ **Gives the position of the most significant bit (1-based index).**

---

### **(h) Toggle a Bit at Position `p`**
```cpp
x ^= (1 << p);
```

---

### **(i) Set a Bit at Position `p`**
```cpp
x |= (1 << p);
```

---

### **(j) Clear a Bit at Position `p`**
```cpp
x &= ~(1 << p);
```

---

### **(k) Extract the Last Set Bit**
```cpp
int lastBit = x & (-x);
```
⮕ **Useful in subset generation using bitmasks.**

---

## **3. Bitmasking for Subset Generation**
Generate all subsets of a set `{1, 2, 3}`:
```cpp
vector<int> arr = {1, 2, 3};
int n = arr.size();

for (int mask = 0; mask < (1 << n); mask++) {
    cout << "{ ";
    for (int i = 0; i < n; i++) {
        if (mask & (1 << i)) {
            cout << arr[i] << " ";
        }
    }
    cout << "}\n";
}
```
⮕ **Time Complexity: O(2ⁿ), useful for small `n` (≤ 20).**

---

## **4. Fast Exponentiation (Binary Exponentiation)**
```cpp
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
```
⮕ **Computes `base^exp % mod` in O(log exp) time.**

---

## **5. Applications in Competitive Programming**
1. **Subset problems** (like `TSP` or `Knapsack`) use bitmasking for `DP`.
2. **Graph problems** (`Bitwise AND in trees`, `Minimum spanning tree`).
3. **Trie operations** (`Fast bitwise XOR queries`).
4. **Fast hashing** (using XOR).
5. **Efficient brute force search** when `N` is small (`≤ 20`).

---

## **6. Example Problem: Minimum XOR Pair**
Given an array of integers, find the pair with the **minimum XOR value**.

```cpp
#include <bits/stdc++.h>
using namespace std;

int minXorPair(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int min_xor = INT_MAX;

    for (int i = 1; i < arr.size(); i++) {
        min_xor = min(min_xor, arr[i] ^ arr[i - 1]);
    }

    return min_xor;
}

int main() {
    vector<int> arr = {3, 10, 5, 25, 2, 8};
    cout << minXorPair(arr) << endl;
}
```
⮕ **Sorting ensures closest numbers are adjacent, reducing search space.**

---

## **Final Tips for Competitive Programming**
✔ **Use built-in bitwise functions** (`__builtin_popcount`, `__builtin_ctz`, `__builtin_clz`).  
✔ **Think of bitmasking when handling subsets or DP** problems.  
✔ **Use bitwise operations instead of loops when possible.**  
✔ **Practice problems related to bitwise operations** on Codeforces, Leetcode, AtCoder.  

---

