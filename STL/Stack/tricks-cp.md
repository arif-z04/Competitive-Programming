In **Competitive Programming (CP)**, `stack` is a powerful data structure for solving problems efficiently. Here are some **tips, tricks, and common problem patterns** when using `stack` in CP.  

---

## **🔹 1. Use `stack` for Problems with LIFO Nature**
If a problem requires processing elements in a **Last In, First Out (LIFO)** order, `stack` is the go-to choice.

Example: **Undo operations**, **Backtracking**, **Valid parentheses**, **Reverse operations**.

---

## **🔹 2. Always Check `empty()` Before `top()` or `pop()`**
Accessing the top of an empty stack causes **runtime errors** (segmentation fault).

✅ **Correct way:**
```cpp
if (!s.empty()) {
    cout << s.top();
}
```

❌ **Wrong way:**
```cpp
cout << s.top(); // Undefined behavior if stack is empty
```

---

## **🔹 3. Use `stack` to Solve Parentheses Matching Problems**
For **valid parentheses** or **balanced bracket** problems, a `stack` is useful.

🔹 **Example: Valid Parentheses**
```cpp
#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            if ((c == ')' && st.top() != '(') ||
                (c == '}' && st.top() != '{') ||
                (c == ']' && st.top() != '[')) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string s = "{[()]}";
    cout << (isValid(s) ? "Valid" : "Invalid") << endl; // Output: Valid
}
```

---

## **🔹 4. Use `stack` for Monotonic Stack Problems**
A **monotonic stack** maintains a stack where elements are **strictly increasing or decreasing**. This is useful in:

- **Next Greater Element (NGE)**
- **Next Smaller Element**
- **Stock Span Problem**
- **Histogram Largest Rectangle**

### **📌 Example: Next Greater Element (NGE)**
Find the **next greater element** for each number in an array.

```cpp
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreater(vector<int>& nums) {
    int n = nums.size();
    vector<int> nge(n, -1);  // Default to -1 if no greater element
    stack<int> st;           // Stores indexes

    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[st.top()] < nums[i]) {
            nge[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return nge;
}

int main() {
    vector<int> nums = {4, 5, 2, 10, 8};
    vector<int> nge = nextGreater(nums);
    for (int x : nge) cout << x << " ";  // Output: 5 10 10 -1 -1
}
```

---

## **🔹 5. Use `stack` for Largest Rectangle in Histogram**
A **monotonic stack** approach helps solve this problem in **O(n)** instead of **O(n²)**.

📌 **Histogram Problem**
```cpp
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int maxArea = 0, n = heights.size();
    
    for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || heights[i] < heights[st.top()])) {
            int height = heights[st.top()];
            st.pop();
            int width = st.empty() ? i : (i - st.top() - 1);
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    return maxArea;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << largestRectangleArea(heights);  // Output: 10
}
```

---

## **🔹 6. Implement Min Stack for Constant Time Min**
A **min stack** allows you to find the minimum element in **O(1)** time.

📌 **Min Stack Implementation**
```cpp
#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> st, minSt;
public:
    void push(int x) {
        st.push(x);
        if (minSt.empty() || x <= minSt.top()) minSt.push(x);
    }
    void pop() {
        if (st.top() == minSt.top()) minSt.pop();
        st.pop();
    }
    int top() {
        return st.top();
    }
    int getMin() {
        return minSt.top();
    }
};

int main() {
    MinStack ms;
    ms.push(3);
    ms.push(5);
    ms.push(2);
    ms.push(1);
    cout << ms.getMin() << endl; // Output: 1
    ms.pop();
    cout << ms.getMin() << endl; // Output: 2
}
```

---

## **🔹 7. Use `stack` for Expression Evaluation**
### **📌 Convert Infix to Postfix (Shunting-Yard Algorithm)**
```cpp
#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

string infixToPostfix(string s) {
    stack<char> st;
    string result;

    for (char c : s) {
        if (isalnum(c)) result += c;
        else if (c == '(') st.push(c);
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    return result;
}

int main() {
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    cout << infixToPostfix(infix) << endl;  // Output: abcd^e-fgh*+^*+i-
}
```

---

## **🔹 8. Common Stack-Based Interview Questions**
1. **Next Greater Element** (Monotonic Stack)
2. **Largest Rectangle in Histogram** (Monotonic Stack)
3. **Valid Parentheses** (Stack Matching)
4. **Stock Span Problem** (Monotonic Stack)
5. **Min Stack** (Tracking Minimum Efficiently)
6. **Evaluate Postfix/Prefix Expressions**
7. **Infix to Postfix/Prefix Conversion**
8. **Remove Duplicate Letters (Lexicographically Smallest String)**

---

## **🔥 Final Tips for CP**
✅ **Use `stack<int>` instead of `stack<long long>` unless needed** (to save memory).  
✅ **Use `vector<int>` instead of `stack<int>` if iteration is required.**  
✅ **Avoid excessive `pop()` calls inside loops unless necessary** (may cause TLE).  
✅ **Optimize with `monotonic stacks` for NGE-type problems.**  
✅ **Always handle edge cases (`empty()` before `top()` or `pop()`).**  

---

This should give you a strong foundation for using **stack in Competitive Programming**! 🚀  
Want help with a **specific problem?** 😊