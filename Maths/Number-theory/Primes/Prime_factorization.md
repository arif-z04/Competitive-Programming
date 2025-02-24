### **📌 Prime Factorization - Brief Overview**
Prime factorization is the process of expressing a number as a product of its **prime factors**.

### **🔹 Definition**
If `N` is a positive integer, then its **prime factorization** is:
\[
N = p_1^{a_1} \times p_2^{a_2} \times p_3^{a_3} \times \dots
\]
where `p₁, p₂, p₃, ...` are **prime numbers**, and `a₁, a₂, a₃, ...` are their respective powers.

### **🔹 Example**
For `N = 60`:
\[
60 = 2^2 \times 3^1 \times 5^1
\]

---

### **🔹 Methods of Prime Factorization**
#### **1️⃣ Basic Trial Division (`O(√N)`)**
- Divide `N` by `2` until it's odd.
- Check odd divisors up to `√N`.

```cpp
vector<int> primeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n); // If n is prime
    return factors;
}
```

✅ **Efficient for small numbers (`≤ 10⁶`)**.

---

#### **2️⃣ Using Smallest Prime Factor (SPF) - `O(logN)` Per Query**
Precompute the **Smallest Prime Factor (SPF)** for numbers up to `N` using a modified **Sieve of Eratosthenes**.

```cpp
const int N = 1e6;
int spf[N+1]; // Smallest Prime Factor

void sieveSPF() {
    for (int i = 1; i <= N; i++) spf[i] = i;
    for (int i = 2; i * i <= N; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= N; j += i)
                if (spf[j] == j) spf[j] = i;
        }
    }
}

// Get Prime Factorization in O(logN)
vector<int> getFactors(int n) {
    vector<int> factors;
    while (n != 1) {
        factors.push_back(spf[n]);
        n /= spf[n];
    }
    return factors;
}
```
✅ **Best for multiple queries (`N ≤ 10⁶`)**.

---

### **🔹 Applications of Prime Factorization**
1️⃣ **Counting Divisors:**  
   - If `N = p₁^a × p₂^b × p₃^c`, then **total divisors** = `(a+1) × (b+1) × (c+1)`.  
2️⃣ **Sum of Divisors:**  
   - Using the formula:  
     \[
     \sigma(N) = \frac{p_1^{a+1}-1}{p_1-1} \times \frac{p_2^{b+1}-1}{p_2-1} \times ...
     \]  
3️⃣ **Finding LCM/GCD of numbers using factorization**.  
4️⃣ **Solving modular arithmetic problems efficiently**.  
5️⃣ **Cryptography (RSA Algorithm uses factorization for encryption).**  

### **📌 Applications of Prime Factorization & Prime Factors**  

Prime factorization is widely used in **number theory, cryptography, and problem-solving** in competitive programming. Below are its key applications:

---

### **1️⃣ Counting the Number of Divisors (τ(N))**  
Using prime factorization, the **total number of divisors** of `N` can be found efficiently.  
📌 **Formula:** If  
\[
N = p_1^{a_1} \times p_2^{a_2} \times p_3^{a_3} \times ...
\]
Then the total number of divisors:  
\[
D(N) = (a_1 + 1) \times (a_2 + 1) \times (a_3 + 1) \times ...
\]
✅ **Example:**  
For `N = 60 = 2² × 3¹ × 5¹`,  
\[
D(60) = (2+1) × (1+1) × (1+1) = 3 × 2 × 2 = 12
\]  
(60 has **12 divisors**: 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60).  

---

### **2️⃣ Sum of Divisors (σ(N))**  
To find the **sum of all divisors** of `N`, use:  
\[
S(N) = \left( \frac{p_1^{a_1+1}-1}{p_1-1} \right) \times \left( \frac{p_2^{a_2+1}-1}{p_2-1} \right) \times ...
\]
✅ **Example:**  
For `N = 12 = 2² × 3¹`:  
\[
S(12) = \left( \frac{2^{2+1}-1}{2-1} \right) \times \left( \frac{3^{1+1}-1}{3-1} \right) = \left( \frac{8-1}{1} \right) \times \left( \frac{9-1}{2} \right) = 7 × 4 = 28
\]  
(12’s divisors are 1, 2, 3, 4, 6, 12; their sum is **28**).  

---

### **3️⃣ Greatest Common Divisor (GCD) & Least Common Multiple (LCM)**  
📌 **Using prime factorization:**  
\[
\text{GCD}(A, B) = \text{Product of minimum powers of common prime factors}
\]
\[
\text{LCM}(A, B) = \text{Product of maximum powers of all prime factors}
\]
✅ **Example:**  
For `A = 18 = 2⁰ × 3²`, `B = 24 = 2³ × 3¹`:  
- **GCD(18, 24) = 2⁰ × 3¹ = 3**  
- **LCM(18, 24) = 2³ × 3² = 72**  

---

### **4️⃣ Euler’s Totient Function (φ(N))**  
φ(N) **counts integers ≤ N that are coprime to N**.  
📌 **Formula using prime factorization:**  
\[
φ(N) = N \times \left(1 - \frac{1}{p_1} \right) \times \left(1 - \frac{1}{p_2} \right) \times ...
\]
✅ **Example:**  
For `N = 10 = 2¹ × 5¹`:  
\[
φ(10) = 10 \times (1 - \frac{1}{2}) \times (1 - \frac{1}{5}) = 10 \times \frac{1}{2} \times \frac{4}{5} = 4
\]  
(Numbers coprime to 10: {1, 3, 7, 9} → **4 values**).  

---

### **5️⃣ Finding the Highest Power of a Prime in N!**  
📌 **Formula:** The highest exponent of `p` in `N!` is:  
\[
e = \sum_{k=1}^{\infty} \left\lfloor \frac{N}{p^k} \right\rfloor
\]
✅ **Example:**  
Find the highest power of `2` in `20!`:  
\[
\left\lfloor \frac{20}{2} \right\rfloor + \left\lfloor \frac{20}{4} \right\rfloor + \left\lfloor \frac{20}{8} \right\rfloor + \left\lfloor \frac{20}{16} \right\rfloor
\]
\[
= 10 + 5 + 2 + 1 = 18
\]  
So `2¹⁸` is the highest power of 2 in `20!`.  

---

### **6️⃣ Cryptography & RSA Algorithm**  
- Prime factorization is the **basis of RSA encryption**.  
- Large numbers (2048-bit) are hard to factor, ensuring **secure encryption**.

---

### **📌 Summary Table**
| Application  | Formula / Explanation |
|-------------|----------------------|
| **Counting Divisors** | \(D(N) = (a_1+1)(a_2+1)...\) |
| **Sum of Divisors** | \(S(N) = \prod \frac{p^{a+1} - 1}{p-1} \) |
| **GCD(A, B)** | Product of **min powers** of common primes |
| **LCM(A, B)** | Product of **max powers** of all primes |
| **Euler’s Totient φ(N)** | \(φ(N) = N \times \prod (1 - \frac{1}{p})\) |
| **Highest Power of p in N!** | \( \sum \lfloor \frac{N}{p^k} \rfloor \) |
| **Cryptography** | Used in **RSA encryption** |

