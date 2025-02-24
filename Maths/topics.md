The **"math"** tag in **Codeforces** covers a broad range of topics that are essential for **competitive programming**. Some of these topics are used frequently in contests, while others are more specialized but still useful. Below is a categorized list of the most important math-related topics, along with their relevance in competitive programming.

---

### 🔹 **Basic Mathematics**
These form the foundation and are necessary for solving many problems efficiently.

1. **Number Theory**  
   - Prime Numbers & Sieve of Eratosthenes  
   - GCD & LCM (Greatest Common Divisor & Least Common Multiple)  
   - Modular Arithmetic (mod, inverse, properties)  
   - Euler's Totient Function  
   - Fermat's Theorem & Wilson’s Theorem  

2. **Divisibility & Factorization**  
   - Finding Divisors  
   - Prime Factorization (Trial Division, Sieve-based factorization)  
   - Counting Divisors Efficiently  

3. **Modular Arithmetic**  
   - Fast Modular Exponentiation (Binary Exponentiation)  
   - Modular Multiplicative Inverse  
   - Chinese Remainder Theorem (CRT)  
   - Modular Inverse using Fermat’s Little Theorem  

4. **Bit Manipulation & Properties**  
   - Binary Representation & Bitwise Operations  
   - Counting Set Bits (Hamming Weight)  
   - XOR Properties & Applications  
   - Masking & Bit Manipulation Tricks  

---

### 🔹 **Intermediate Mathematics**
These topics are frequently used in problems requiring deeper mathematical insights.

5. **Combinatorics & Probability**  
   - Permutations & Combinations (nCr, nPr)  
   - Stars and Bars Theorem  
   - Inclusion-Exclusion Principle (IEP)  
   - Pigeonhole Principle  
   - Expected Value & Probability Calculations  

6. **Linear Algebra & Matrix Exponentiation**  
   - Matrix Multiplication  
   - Matrix Exponentiation (Fast Fibonacci, DP Optimization)  
   - Gaussian Elimination (for solving linear equations)  

7. **Logarithms & Exponentiation**  
   - Logarithmic Identities & Properties  
   - Fast Exponentiation  
   - Handling Large Powers Efficiently  

8. **Diophantine Equations & Integer Solutions**  
   - Linear Diophantine Equations (Ax + By = C)  
   - Bezout's Identity & Extended Euclidean Algorithm  
   - Chinese Remainder Theorem for solving systems of congruences  

---

### 🔹 **Advanced Mathematics**
These are useful for high-level contests like ICPC, Codeforces Div 1, and AtCoder Grand Contests.

9. **Game Theory & Grundy Numbers**  
   - Nim Game & Grundy Numbers  
   - Sprague-Grundy Theorem  
   - Impartial & Partisan Games  

10. **Geometry & Computational Geometry**  
   - Convex Hull Algorithm (Graham's Scan, Andrew’s Monotone Chain)  
   - Line Intersection & Orientation (CCW & CW Tests)  
   - Polygon Area using Shoelace Theorem  
   - Point in Polygon Tests (Ray-Casting Algorithm)  

11. **Advanced Number Theory & Cryptography**  
   - Miller-Rabin Primality Test  
   - Pollard’s Rho Algorithm (Factorization)  
   - Discrete Logarithm Problem  
   - Elliptic Curve Cryptography Basics  

12. **Generating Functions & Recurrence Relations**  
   - Solving Recurrences using Generating Functions  
   - Z-Transform & Convolution Theorems  
   - Fast Walsh-Hadamard Transform (FWHT) for XOR Convolution  

---

### 🔹 **Algorithmic Applications of Math**
Some math topics are used alongside algorithms in competitive programming.

13. **Graph Theory with Math Applications**  
   - Eulerian Path & Euler’s Circuit  
   - Counting Connected Components with Matrix Exponentiation  
   - Kirchoff’s Theorem (Counting Spanning Trees)  

14. **Combinatorial Game Theory**  
   - Grundy Numbers & Nim Game  
   - SG Function in Graph Games  

15. **Probability & Expected Value in DP**  
   - Linearity of Expectation  
   - DP with Probability Transitions  

---

### 🔥 **Most Important Topics for Beginners & Intermediate Contestants**
For regular contests (Codeforces Div 2, Div 3), focus on these first:
✅ **Number Theory (GCD, LCM, Prime Numbers, Modular Arithmetic)**  
✅ **Modular Exponentiation & Modular Inverse**  
✅ **Combinatorics (nCr, Inclusion-Exclusion)**  
✅ **Bit Manipulation Tricks**  
✅ **Matrix Exponentiation for Recurrence Relations**  

For **Div 1 and harder problems**, explore advanced topics like:
🔥 **Diophantine Equations, Game Theory, and Combinatorial Mathematics**  
🔥 **Advanced Number Theory (Miller-Rabin, Pollard’s Rho, Chinese Remainder Theorem)**  
🔥 **Computational Geometry for grid-based and geometric problems**  

---


For progressing from **Div-4 to Div-1** in **Codeforces**, you should learn math topics in a structured way. Here’s a **roadmap** of what math topics to focus on at each level.

---

## **📌 Division 4 (Beginner, Rating: 0 - 1200)**
At this level, problems mostly require **basic math, number properties, and simple calculations**.

✅ **Basic Number Theory**  
- GCD & LCM (using `__gcd()` or Euclidean Algorithm)  
- Prime Numbers & Basic Factorization  
- Modulo Properties (`(a + b) % m = (a % m + b % m) % m`)  

✅ **Basic Arithmetic & Properties**  
- Even/Odd properties  
- Sum of Digits, Reverse a Number  
- Divisibility Rules  

✅ **Basic Combinatorics**  
- Factorial Calculation  
- Simple Counting Problems (e.g., counting pairs, subsets)  

✅ **Bit Manipulation (Basic)**  
- Checking if a number is even/odd using `(x & 1)`  
- Checking if a bit is set `(x & (1 << i))`  

🚀 **Practice**: Solve **Div-4** & **Div-3 A/B** problems tagged "math".

---

## **📌 Division 3 (Beginner-Intermediate, Rating: 1200 - 1600)**
Here, math becomes **more structured**, and problems start using **modular arithmetic and combinatorics**.

✅ **Intermediate Number Theory**  
- Fast Exponentiation (`Binary Exponentiation`)  
- Modular Arithmetic & Modular Inverse  
- Sieve of Eratosthenes (for prime numbers)  

✅ **Divisors & Factorization**  
- Counting Number of Divisors Efficiently  
- Prime Factorization (Trial Division + Optimized)  

✅ **Combinatorics & Probability**  
- Permutations & Combinations (`nCr using factorials/mod`)  
- Pigeonhole Principle  
- Expected Value in Probability Problems  

✅ **Bit Manipulation (Intermediate)**  
- XOR Properties (`x ^ x = 0`)  
- Counting Set Bits (`__builtin_popcount(x)`)  

🚀 **Practice**: Solve **Div-3 B/C** & easier **Div-2 A/B** problems.

---

## **📌 Division 2 (Intermediate, Rating: 1600 - 2100)**
At this stage, you must be comfortable with **modular arithmetic, combinatorics, and number theory tricks**.

✅ **Advanced Number Theory**  
- Euler’s Totient Function  
- Chinese Remainder Theorem (CRT)  
- Fermat’s Theorem & Modular Inverse  

✅ **Modular Arithmetic (Advanced)**  
- Lucas Theorem (for computing `nCr % p`)  
- Wilson’s Theorem (for prime factorials)  

✅ **Diophantine Equations**  
- Solving `Ax + By = C` using Extended Euclidean Algorithm  

✅ **Combinatorics & Recurrence Relations**  
- Catalan Numbers  
- Generating Functions  
- Matrix Exponentiation (for Fibonacci-type sequences)  

✅ **Graph Theory with Math Applications**  
- Euler’s Path & Circuit  
- Counting Connected Components using Matrix Exponentiation  

🚀 **Practice**: Solve **Div-2 C/D** & easier **Div-1 A** problems.

---

## **📌 Division 1 (Advanced, Rating: 2100+)**
This level requires **deep knowledge of combinatorial mathematics, game theory, and computational geometry**.

✅ **Advanced Number Theory & Cryptography**  
- Miller-Rabin Primality Test  
- Pollard’s Rho Algorithm (Efficient Factorization)  
- Discrete Logarithm Problem  

✅ **Game Theory**  
- Grundy Numbers & Nim Game  
- Sprague-Grundy Theorem  

✅ **Computational Geometry**  
- Convex Hull Algorithm  
- Line Intersections & Rotating Calipers  

✅ **Combinatorial Game Theory**  
- DP with Grundy Numbers  
- Nim Game with Graph Theory  

✅ **Generating Functions & Advanced Probability**  
- Convolutions & FFT  
- Probabilistic Methods in Graphs  

🚀 **Practice**: Solve **Div-1 A/B/C** problems.

---

| Division | Topics to Learn |
|----------|--------------------------------|
| **Div-4 (0-1200)** | GCD, LCM, Prime Numbers, Basic Modulo, Bitwise Basics |
| **Div-3 (1200-1600)** | Sieve, Fast Exponentiation, nCr, Probability, XOR Tricks |
| **Div-2 (1600-2100)** | CRT, Euler’s Totient, Diophantine Equations, Matrix Expo |
| **Div-1 (2100+)** | Pollard's Rho, FFT, Game Theory, Computational Geometry |

