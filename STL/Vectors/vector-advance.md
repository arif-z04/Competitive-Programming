### 🚀 **Advanced Vector Tricks for Competitive Programming (CP)**  

In **competitive programming**, mastering **advanced vector operations** can help you write **optimized** and **concise** code. Here are some **powerful tricks** to take your vector skills to the next level.  

---

## **1️⃣ Prefix Sum in `O(1)` Query Time**
Instead of recalculating sums repeatedly (`O(N)`), use **prefix sum** to get **any subarray sum in `O(1)`**.  

### **🔹 How It Works?**  
Create `prefix[i]`, where:  
\[
\text{prefix}[i] = \text{prefix}[i-1] + v[i]
\]
Then, any **subarray sum** from index `L` to `R` is:  
\[
\text{sum}(L, R) = \text{prefix}[R] - \text{prefix}[L-1]
\]

### **🔹 Example:**  
```cpp
vector<int> v = {3, 2, 1, 7, 5};
vector<int> prefix(v.size());

prefix[0] = v[0];
for (int i = 1; i < v.size(); i++)
    prefix[i] = prefix[i - 1] + v[i];

int L = 1, R = 3;
cout << "Sum from " << L << " to " << R << ": " 
     << prefix[R] - (L > 0 ? prefix[L - 1] : 0);  // Output: 10
```
✅ **Useful for range sum queries in `O(1)`.**  

---

## **2️⃣ Sliding Window Maximum (Deque + Vector)**
Find the **maximum in each subarray of size `K`** in `O(N)` time using **deque**.

### **🔹 Example:**
```cpp
vector<int> v = {1, 3, -1, -3, 5, 3, 6, 7};
int k = 3;
deque<int> dq;
vector<int> res;

for (int i = 0; i < v.size(); i++) {
    if (!dq.empty() && dq.front() == i - k) dq.pop_front(); // Remove out-of-window elements
    while (!dq.empty() && v[dq.back()] <= v[i]) dq.pop_back(); // Remove smaller elements
    dq.push_back(i);
    if (i >= k - 1) res.push_back(v[dq.front()]); // Store max
}

for (int x : res) cout << x << " ";  // Output: 3 3 5 5 6 7
```
✅ **Best for finding max in a moving window efficiently!**  

---

## **3️⃣ Finding Majority Element (Appears > N/2 Times)**
**Using Boyer-Moore Voting Algorithm (`O(N)`)**  

```cpp
vector<int> v = {2, 2, 1, 1, 1, 2, 2};
int count = 0, candidate = -1;

for (int num : v) {
    if (count == 0) candidate = num;
    count += (num == candidate) ? 1 : -1;
}

cout << "Majority Element: " << candidate;  // Output: 2
```
✅ **Great for majority element problems in `O(N)`.**  

---

## **4️⃣ Binary Search in Unsorted Vector**
Instead of `sort() + binary_search()`, use **unordered_map for O(1) lookups**.  
```cpp
vector<int> v = {10, 3, 5, 2, 8};
unordered_map<int, int> mp;
for (int num : v) mp[num]++;

int X = 5;
if (mp.find(X) != mp.end()) cout << "Found!";  // Output: Found!
```
✅ **Useful when searching frequently in an unsorted vector.**  

---

## **5️⃣ Longest Increasing Subsequence (`O(N log N)`)**
Use **binary search + `lower_bound()`** for fast LIS calculation.  

```cpp
vector<int> v = {10, 9, 2, 5, 3, 7, 101, 18};
vector<int> lis;

for (int num : v) {
    auto it = lower_bound(lis.begin(), lis.end(), num);
    if (it == lis.end()) lis.push_back(num);
    else *it = num;
}

cout << "Length of LIS: " << lis.size();  // Output: 4
```
✅ **Best for LIS problems in `O(N log N)`.**  

---

## **6️⃣ Efficient Range Updates Using Difference Array**
Use **difference arrays** to perform range updates in `O(1)`, then compute results in `O(N)`.  

### **🔹 Problem:**  
Update **range `[L, R]` by adding `X`** in `O(1)`.  
```cpp
vector<int> v(10, 0);  // Vector of size 10, initialized to 0
vector<int> diff(11, 0);  // Difference array

// Range update: Add +5 to [2, 5]
int L = 2, R = 5, X = 5;
diff[L] += X;
diff[R + 1] -= X;

// Compute final values
for (int i = 1; i < v.size(); i++) diff[i] += diff[i - 1];
for (int i = 0; i < v.size(); i++) v[i] += diff[i];

for (int num : v) cout << num << " ";
```
✅ **Great for range update problems.**  

---

## **7️⃣ Finding Kth Smallest Element in `O(N log K)`**
Use a **min-heap (priority queue)** to efficiently find the `K`th smallest element.  

```cpp
vector<int> v = {7, 10, 4, 3, 20, 15};
priority_queue<int> pq;

int K = 3;
for (int num : v) {
    pq.push(num);
    if (pq.size() > K) pq.pop();
}

cout << "3rd Smallest: " << pq.top();  // Output: 7
```
✅ **More efficient than sorting for Kth-smallest element problems.**  

---

## **8️⃣ Finding Subarrays with Given Sum (`O(N)`)**
Using **unordered_map** to find **subarrays with sum `S`** in `O(N)`.  

```cpp
vector<int> v = {10, 2, -2, -20, 10};
int target = -10, sum = 0, count = 0;
unordered_map<int, int> mp;
mp[0] = 1;

for (int num : v) {
    sum += num;
    if (mp.find(sum - target) != mp.end()) count += mp[sum - target];
    mp[sum]++;
}

cout << "Total Subarrays: " << count;  // Output: 3
```
✅ **Best for subarray sum problems in `O(N)`.**  

---

## **9️⃣ Sorting a Vector of Pairs Efficiently**
**Sort by second element (ascending)**  
```cpp
vector<pair<int, int>> v = {{1, 3}, {2, 2}, {3, 1}};
sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
});
```
✅ **Useful when sorting based on specific attributes.**  

---

## **🔟 Convert Vector into a Heap (`O(N)`)**
Instead of inserting one by one (`O(N log N)`), **use `make_heap()` in `O(N)`.**  
```cpp
vector<int> v = {4, 10, 3, 5, 1};
make_heap(v.begin(), v.end());

cout << "Max Element: " << v.front();  // Output: 10
```
✅ **Faster than inserting elements one by one.**  

---

### **🎯 Final Takeaways**
✔ **Use `prefix sum` for fast subarray queries.**  
✔ **Use `deque` for `O(N)` sliding window problems.**  
✔ **Use `priority_queue` for Kth smallest/largest problems.**  
✔ **Use `unordered_map` for efficient frequency counting.**  
✔ **Use `binary search` techniques (`lower_bound/upper_bound`).**  
✔ **Use `make_heap()` for fast heap creation.**  

---

### Check `sheet-2.md` for practice these methods!

---