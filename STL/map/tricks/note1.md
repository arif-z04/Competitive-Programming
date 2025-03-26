### 🚀 **C++ `map` Tricks for Competitive Programming** 🚀  
`map` is a powerful data structure in **Competitive Programming (CP)** when you need efficient key-value storage with fast insertions, deletions, and lookups in **O(log n)** time.  

### 🔥 **Key Tricks for Efficient `map` Usage in CP** 🔥  

---

## **1️⃣ Use `unordered_map` for Faster Access (O(1))**
🔹 **`unordered_map`** gives average **O(1) time complexity** instead of **O(log n)** (for `map`).  

🔹 Use **`map` when ordering of keys is required**, else **use `unordered_map`** for speed.  

```cpp
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, string> ump;
    ump[3] = "Alice";
    ump[1] = "Bob";
    ump[2] = "Charlie";

    for (auto it : ump) {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }

    return 0;
}
```
🔴 **Warning:** `unordered_map` has **O(n) worst-case complexity** (due to hash collisions), while `map` has O(log n) always.

---

## **2️⃣ Finding Frequency of Elements (Frequency Map)**
✅ **Count occurrences of numbers or characters in O(n log n) using `map`**  
```cpp
#include <iostream>
#include <map>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 2, 1, 4, 3, 2};
    map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    for (auto it : freq) {
        cout << "Number: " << it.first << ", Frequency: " << it.second << endl;
    }
    return 0;
}
```
🔹 **Use `unordered_map<int, int>` for O(n) solution** in larger constraints.

---

## **3️⃣ Checking If an Element Exists in O(log n)**
✅ **Use `.find()` instead of `[]` to check if a key exists**  
```cpp
if (mp.find(key) != mp.end()) {
    cout << "Key exists!";
} else {
    cout << "Key not found!";
}
```
🔴 **Avoid `if (mp[key])` because it inserts a new key with a default value (0 for int, empty for string).**

---

## **4️⃣ Sorting Elements by Key (Default `map` Behavior)**
✅ **`map` stores keys in sorted order automatically**  
```cpp
map<int, string> mp;
mp[5] = "E";
mp[1] = "A";
mp[3] = "C";

for (auto it : mp) {
    cout << it.first << " " << it.second << endl;
}
```
🔹 **Output:**  
```
1 A  
3 C  
5 E  
```

---

## **5️⃣ Sorting by Value Using `vector`**
✅ **Use a `vector<pair<>>` to sort a `map` by values**  
```cpp
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;  // Sort by value in descending order
}

int main() {
    map<int, int> mp = {{1, 5}, {2, 3}, {3, 8}};
    vector<pair<int, int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), cmp);

    for (auto it : v) {
        cout << it.first << " -> " << it.second << endl;
    }
}
```

---

## **6️⃣ Erasing Elements Efficiently**
✅ **Remove a single key**
```cpp
mp.erase(key);
```
✅ **Erase a range of keys**
```cpp
mp.erase(mp.begin(), mp.end()); // Erases all elements
```
✅ **Erase while iterating safely**
```cpp
for (auto it = mp.begin(); it != mp.end(); ) {
    if (it->second < 10) {
        it = mp.erase(it);  // Safe erase
    } else {
        ++it;
    }
}
```

---

## **7️⃣ Using `map` for Coordinate Compression**
✅ **Use `map` to compress large numbers into smaller indices**  
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {100, 200, 50, 200, 100};
    map<int, int> mp;
    int idx = 1;

    for (int num : arr) {
        if (mp.find(num) == mp.end()) {
            mp[num] = idx++;
        }
    }

    for (int num : arr) {
        cout << "Compressed value of " << num << " is " << mp[num] << endl;
    }
}
```
🔹 **Useful in Range Queries and Graph Problems!**

---

## **8️⃣ Multi-Map for Duplicate Keys**
✅ **`multimap` allows duplicate keys**  
```cpp
multimap<int, string> mm;
mm.insert({1, "Alice"});
mm.insert({1, "Bob"}); // Duplicate keys allowed
```

---

## **9️⃣ Finding the Smallest or Largest Key Efficiently**
✅ **First (smallest) and last (largest) key in `map`**
```cpp
cout << "Smallest Key: " << mp.begin()->first << endl;
cout << "Largest Key: " << prev(mp.end())->first << endl;
```

---

## **🔟 Optimized Code for Competitive Programming**
💡 **Full program demonstrating frequency counting, sorting, and fast lookups**
```cpp
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;  // Sort by value in descending order
}

int main() {
    int n;
    cin >> n;
    
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    vector<pair<int, int>> sorted_freq(freq.begin(), freq.end());
    sort(sorted_freq.begin(), sorted_freq.end(), cmp);

    for (auto it : sorted_freq) {
        cout << "Number: " << it.first << ", Frequency: " << it.second << endl;
    }

    return 0;
}
```
✅ **Efficient for counting, sorting, and searching in CP problems!** 🚀

---

### 🎯 **Final Takeaways**
| Trick | Usage |
|-------|-------|
| Use `unordered_map` | O(1) average time for lookup |
| Frequency counting | `map<int, int> freq;` |
| Check key existence | `if (mp.find(x) != mp.end())` |
| Sort by value | Convert `map` to `vector<pair>` and sort |
| Coordinate compression | Map large values to small indices |
| Erase safely while iterating | `it = mp.erase(it);` |
| Multi-key storage | Use `multimap` |

---

