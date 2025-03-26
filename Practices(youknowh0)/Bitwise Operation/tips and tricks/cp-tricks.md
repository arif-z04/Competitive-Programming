## CP tricks

Bitwise operations are incredibly useful in competitive programming due to their efficiency and ability to solve problems concisely. Here are some **tips, tricks, and techniques** to leverage bitwise operations effectively:

---

### **1. Bitmasking**
Bitmasking is a technique where integers are used to represent subsets, states, or configurations. Each bit in the integer represents a flag or a state.

- **Representing Subsets**:
  - Use an integer to represent a subset of a set. For example, for a set of size `n`, an integer with `n` bits can represent all possible subsets.
  - Example: For a set `{A, B, C}`, the subset `{A, C}` can be represented as `101` (binary) or `5` (decimal).

- **Checking if an Element is in a Subset**:
  ```cpp
  int subset = 5; // 101 in binary
  int element = 1; // Check if element at position 1 (0-based index) is in the subset
  if (subset & (1 << element)) {
      // Element is in the subset
  }
  ```

- **Adding/Removing an Element**:
  ```cpp
  subset |= (1 << element);  // Add element
  subset &= ~(1 << element); // Remove element
  ```

---

### **2. Efficient Enumeration of Subsets**
- Use bitwise operations to iterate through all subsets of a set.
- Example: Enumerate all subsets of a set of size `n`:
  ```cpp
  int n = 3; // Set size
  for (int mask = 0; mask < (1 << n); mask++) {
      // Process the subset represented by `mask`
  }
  ```

- **Enumerate Subsets of a Specific Subset**:
  ```cpp
  int subset = 5; // 101 in binary
  for (int mask = subset; mask > 0; mask = (mask - 1) & subset) {
      // Process the subset represented by `mask`
  }
  ```

---

### **3. Counting Set Bits**
- Use the built-in `__builtin_popcount` function in GCC/Clang to count the number of `1` bits in an integer.
  ```cpp
  int count = __builtin_popcount(n); // For 32-bit integers
  int count = __builtin_popcountll(n); // For 64-bit integers
  ```

- **Manual Counting**:
  ```cpp
  int countSetBits(int n) {
      int count = 0;
      while (n) {
          count += n & 1;
          n >>= 1;
      }
      return count;
  }
  ```

---

### **4. Checking if a Number is a Power of 2**
- A number is a power of 2 if it has exactly one `1` bit in its binary representation.
- Use the following trick:
  ```cpp
  bool isPowerOfTwo(int n) {
      return n > 0 && (n & (n - 1)) == 0;
  }
  ```

---

### **5. Swapping Two Numbers**
- Use XOR to swap two numbers without a temporary variable:
  ```cpp
  int a = 5, b = 3;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  // Now, a = 3 and b = 5
  ```

---

### **6. Finding the Lowest Set Bit (LSB)**
- Use the following trick to isolate the lowest set bit:
  ```cpp
  int lsb = n & -n;
  ```

---

### **7. Clearing the Lowest Set Bit**
- Use the following trick to clear the lowest set bit:
  ```cpp
  n = n & (n - 1);
  ```

---

### **8. Generating All Submasks**
- To generate all submasks of a given mask:
  ```cpp
  int mask = 5; // 101 in binary
  for (int submask = mask; submask > 0; submask = (submask - 1) & mask) {
      // Process `submask`
  }
  ```

---

### **9. XOR Properties**
- XOR has some unique properties that are useful in competitive programming:
  - `a ^ a = 0`
  - `a ^ 0 = a`
  - XOR is associative and commutative.
- Use XOR to find the unique number in an array where all other numbers appear twice:
  ```cpp
  int uniqueNumber(vector<int>& nums) {
      int result = 0;
      for (int num : nums) {
          result ^= num;
      }
      return result;
  }
  ```

---

### **10. Bitwise Tricks for DP (Dynamic Programming)**
- Use bitmasking to represent states in DP problems, especially for problems involving subsets or permutations.
- Example: Traveling Salesman Problem (TSP):
  ```cpp
  int dp[1 << n][n]; // dp[mask][i] represents the minimum cost to visit all cities in `mask` ending at city `i`
  ```

---

### **11. Fast Multiplication/Division by Powers of 2**
- Use left shift (`<<`) for multiplication and right shift (`>>`) for division by powers of 2:
  ```cpp
  int a = 5;
  int b = a << 2; // b = 20 (5 * 4)
  int c = a >> 1; // c = 2 (5 / 2)
  ```

---

### **12. Checking Parity (Odd/Even)**
- Use the least significant bit (LSB) to check if a number is odd or even:
  ```cpp
  bool isOdd = n & 1;
  ```

---

### **13. Flipping Bits**
- Use XOR with a mask to flip specific bits:
  ```cpp
  int a = 5; // 0101 in binary
  int mask = 3; // 0011 in binary
  int result = a ^ mask; // 0110 (6 in decimal)
  ```

---

### **14. Bitwise Operations for Graphs**
- Use bitwise operations to represent adjacency lists or adjacency matrices compactly.
- Example: Representing a graph where each node's neighbors are stored as a bitmask:
  ```cpp
  vector<int> graph(n); // graph[i] is a bitmask representing neighbors of node i
  ```

---

### **15. Bitwise Sieve of Eratosthenes**
- Use bitwise operations to optimize the Sieve of Eratosthenes for prime number generation:
  ```cpp
  vector<bool> isPrime(n + 1, true);
  for (int i = 2; i * i <= n; i++) {
      if (isPrime[i]) {
          for (int j = i * i; j <= n; j += i) {
              isPrime[j] = false;
          }
      }
  }
  ```

---

### **16. Bitwise Operations for Game Theory**
- Use bitwise operations to solve problems involving Nim games, Grundy numbers, or XOR-based strategies.

---

### **17. Bitwise Hacks for Optimization**
- Use bitwise hacks to optimize code, such as:
  - Replacing modulo operations with bitwise AND:
    ```cpp
    int remainder = n & (k - 1); // Equivalent to n % k, where k is a power of 2
    ```
  - Replacing division with right shifts:
    ```cpp
    int quotient = n >> 1; // Equivalent to n / 2
    ```

---

### **18. Practice Problems**
- Solve problems on platforms like Codeforces, CodeChef, and LeetCode to get hands-on experience with bitwise operations. Some classic problems include:
  - Counting set bits.
  - Finding the unique number in an array.
  - Generating all subsets.
  - Bitmask DP problems (e.g., TSP).

---

