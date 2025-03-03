
---

# Triangular Numbers and the Triangle Height Problem

## **What are Triangular Numbers?**
Triangular numbers are a sequence of numbers where each number represents the total number of dots that can form an equilateral triangle. For example:

- **1 coin**: Forms a triangle of height 1.
- **3 coins**: Forms a triangle of height 2.
- **6 coins**: Forms a triangle of height 3.
- **10 coins**: Forms a triangle of height 4.

The \( n \)-th triangular number \( T_n \) is given by the formula:

\[
T_n = \frac{n(n+1)}{2}
\]

Where:
- \( n \) is the height of the triangle.
- \( T_n \) is the total number of coins (dots) required to form the triangle.

---

## **Problem Statement**
Given a number of coins \( x \), find the maximum height \( n \) of a triangle that can be formed such that:

\[
T_n \leq x
\]

In other words, find the largest integer \( n \) where the \( n \)-th triangular number is less than or equal to \( x \).

---

## **Solution Approach**
To solve this problem, we can rearrange the triangular number formula to solve for \( n \):

\[
\frac{n(n+1)}{2} \leq x
\]

This is a quadratic inequality. Solving for \( n \), we get:

\[
n^2 + n - 2x \leq 0
\]

Using the quadratic formula \( n = \frac{-b \pm \sqrt{b^2 - 4ac}}{2a} \), where \( a = 1 \), \( b = 1 \), and \( c = -2x \), the positive root is:

\[
n = \frac{-1 + \sqrt{1 + 8x}}{2}
\]

The largest integer \( n \) satisfying the inequality is the floor of this value.

---

## **C++ Implementation**
Here’s the C++ program to compute the height of the triangle:

```cpp
#include <iostream>
#include <cmath>

int getTriangleHeight(int coins) {
    // Using the quadratic formula to solve for n
    int n = (int)((-1 + sqrt(1 + 8 * coins)) / 2;
    return n;
}

int main() {
    int coins;
    std::cout << "Enter the number of coins: ";
    std::cin >> coins;

    if (coins < 0) {
        std::cout << "Invalid input. Number of coins must be non-negative." << std::endl;
        return 1;
    }

    int height = getTriangleHeight(coins);
    std::cout << "The height of the triangle that can be formed with " 
              << coins << " coins is: " << height << std::endl;

    return 0;
}
```

---

### **How It Works**
1. The program takes the number of coins \( x \) as input.
2. It calculates the maximum height \( n \) using the formula:
   \[
   n = \frac{-1 + \sqrt{1 + 8x}}{2}
   \]
3. The result is cast to an integer to get the largest possible height.
4. The program outputs the height of the triangle.

---

### **Example Input/Output**
#### Input:
```
Enter the number of coins: 10
```

#### Output:
```
The height of the triangle that can be formed with 10 coins is: 4
```

---

### **Key Points**
- Triangular numbers grow quadratically, so the height \( n \) increases slowly as the number of coins increases.
- The formula \( n = \frac{-1 + \sqrt{1 + 8x}}{2} \) ensures an efficient solution with \( O(1) \) time complexity.

---

