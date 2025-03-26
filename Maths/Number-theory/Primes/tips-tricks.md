### **📌 Prime Numbers - Tips, Tricks, and Applications in Competitive Programming**  

Prime numbers and their properties play a crucial role in **number theory, combinatorics, cryptography, and efficient problem-solving**. Many problems in **Div-4 to Div-1** involve **prime number properties, prime factorization, modular arithmetic, and sieve techniques**.

---

# **1️⃣ Prime Numbers Basics**
### **🔹 Definition of a Prime Number**
- A **prime number** is a natural number greater than **1** that is divisible only by **1** and itself.
- **Composite numbers** have more than two divisors.

### **🔹 Basic Properties of Primes**
- The smallest prime number is **2** (also the only even prime).
- Every prime number **≥ 5** can be written as `6k ± 1` (except for `2` and `3`).
- The number of primes ≤ `N` is approximately `N / log(N)` (Prime Number Theorem).

---

# **2️⃣ Efficient Prime Checking**
### **🔹 Naive Approach (`O(N)`)**  
Checking divisibility up to `N` (brute force). **Slow for large numbers.**
```cpp
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```

### **🔹 Optimized Approach (`O(√N)`)**  
Instead of checking up to `N`, check only up to `√N` using trial division.
```cpp
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
```
✅ **Trick**: All primes except `2` and `3` follow the form `6k ± 1`, so we iterate in steps of `6`.

### **🔹 Fast Primality Test for Large Numbers (Miller-Rabin `O(logN)`)**
For checking **large numbers (~10¹⁸)**, use **Miller-Rabin Primality Test**.

---

# **3️⃣ Generating Primes Efficiently**
### **🔹 Sieve of Eratosthenes (`O(N log log N)`)**
Find all primes up to `N` efficiently.
```cpp
const int N = 1e6;  // Change based on problem constraints
bool is_prime[N+1];

void sieve() {
    fill(is_prime, is_prime + N + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}
```
✅ **Applications:**  
- Finding primes in a given range quickly.  
- Counting the number of primes up to `N`.  
- Prime factorization.

---

# **4️⃣ Prime Factorization**
### **🔹 Basic Prime Factorization (`O(N)`)**  
Find all prime factors of `N`.
```cpp
vector<int> primeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}
```
✅ **Trick:** After removing small factors, `n` itself is prime if `n > 1`.

### **🔹 Efficient Factorization Using Sieve (`O(logN)`)**  
Precompute the **smallest prime factor (SPF)** of every number.
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

// Fast factorization using precomputed SPF
vector<int> getFactors(int n) {
    vector<int> factors;
    while (n != 1) {
        factors.push_back(spf[n]);
        n /= spf[n];
    }
    return factors;
}
```
✅ **Applications:**  
- Efficiently factorizing numbers in `O(logN)`.  
- Finding **divisors and LCM/GCD calculations**.  

---

# **5️⃣ Applications of Prime Numbers in CP**
## **🔹 1. Finding Number of Divisors of `N` (`O(√N)`)**
If `N = p₁^a × p₂^b × p₃^c`, then the number of divisors `D(N) = (a+1) × (b+1) × (c+1)`.
```cpp
int countDivisors(int n) {
    int count = 1;
    for (int i = 2; i * i <= n; i++) {
        int exp = 0;
        while (n % i == 0) {
            exp++;
            n /= i;
        }
        count *= (exp + 1);
    }
    if (n > 1) count *= 2;  // n itself is prime
    return count;
}
```

## **🔹 2. Finding Sum of Divisors (`O(√N)`)**
```cpp
int sumDivisors(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        int term = 1;
        while (n % i == 0) {
            term = term * i + 1;
            n /= i;
        }
        sum *= term;
    }
    if (n > 1) sum *= (1 + n);
    return sum;
}
```

## **🔹 3. Finding Totient Function (`φ(N) = Count of Coprimes ≤ N`)**
Euler’s Totient Function `φ(N) = N * (1 - 1/p₁) * (1 - 1/p₂) ...`
```cpp
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            result -= result / i;
        }
    }
    if (n > 1) result -= result / n;
    return result;
}
```
✅ **Applications:**  
- Number of coprime numbers ≤ `N`.  
- Used in **Modular Inverses** and **Cryptography**.  

---

# **6️⃣ Problem Examples (Codeforces & CP)**
## **1️⃣ Basic Prime Checking**
💡 **Problem:** Given `Q` queries, check if each number is prime.  
✅ **Solution:** Use `O(√N)` primality test or precompute primes using **Sieve**.

## **2️⃣ Prime Factorization Queries**
💡 **Problem:** Given `Q` queries, return prime factorization of `N`.  
✅ **Solution:** Use **Sieve with SPF** for `O(logN)` factorization.

## **3️⃣ Count Primes in a Range**
💡 **Problem:** Given `L, R`, find the number of primes in `[L, R]`.  
✅ **Solution:** Use **Prefix Sum on Sieve**.

## **4️⃣ Sum of Divisors for Large N**
💡 **Problem:** Find sum of divisors of `N` for large `N`.  
✅ **Solution:** Use **Divisor Sum Formula**.

---

### **🎯 Conclusion**
📌 **Div-4 to Div-1 Progression:**
- **Div-4:** Basic Primality Test, Trial Division.  
- **Div-3:** Sieve, Prime Factorization, Counting Divisors.  
- **Div-2:** Euler’s Totient, Modular Arithmetic, Advanced Factorization.  
- **Div-1:** Miller-Rabin, Pollard’s Rho, Advanced Number Theory.  

