Sure! Let's look at **real-world use cases** of **Lambda functions** in C++. These examples demonstrate how lambdas can make code **cleaner, more modular, and efficient**.  

---

## **1️⃣ Filtering Data in a List (E-commerce Product Filter)**
Imagine an **e-commerce application** where you want to **filter products** based on price.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Product {
    string name;
    double price;
};

int main() {
    vector<Product> products = {{"Laptop", 1200}, {"Phone", 800}, {"Tablet", 400}, {"Monitor", 300}};

    // Filter products cheaper than $500
    cout << "Affordable Products:\n";
    for_each(products.begin(), products.end(), [](Product p) {
        if (p.price < 500) 
            cout << p.name << " - $" << p.price << endl;
    });

    return 0;
}
```
📌 **Use Case:** Dynamic filtering based on price or category (e.g., Amazon, eBay).

---

## **2️⃣ Sorting Employees by Salary (HR Application)**
A company wants to **sort employees by salary** before displaying them in the HR dashboard.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Employee {
    string name;
    double salary;
};

int main() {
    vector<Employee> employees = {{"Alice", 50000}, {"Bob", 70000}, {"Charlie", 45000}};

    // Sort employees by salary in descending order
    sort(employees.begin(), employees.end(), [](Employee a, Employee b) {
        return a.salary > b.salary;
    });

    cout << "Employees sorted by salary:\n";
    for (auto e : employees) 
        cout << e.name << " - $" << e.salary << endl;

    return 0;
}
```
📌 **Use Case:** Employee management system for payroll and HR.

---

## **3️⃣ Event Handling in GUI Applications (Button Click Example)**
Lambda functions are heavily used in **event-driven programming** for handling **button clicks** in GUI apps.

```cpp
#include <iostream>
#include <functional>
using namespace std;

// Simulated button click handler
void onButtonClick(function<void()> callback) {
    cout << "Button Clicked!" << endl;
    callback();  // Execute the lambda function
}

int main() {
    onButtonClick([]() {
        cout << "Hello, User! Welcome to the App." << endl;
    });

    return 0;
}
```
📌 **Use Case:** Button click event handling in GUI frameworks like Qt, GTK, or Windows Forms.

---

## **4️⃣ Searching in a Database (Find Students with High GPA)**
You have a **list of students** and need to find all those with a **GPA above 3.5**.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    double gpa;
};

int main() {
    vector<Student> students = {{"Alice", 3.9}, {"Bob", 3.4}, {"Charlie", 3.8}, {"David", 3.2}};

    cout << "High GPA Students:\n";
    for_each(students.begin(), students.end(), [](Student s) {
        if (s.gpa > 3.5)
            cout << s.name << " - GPA: " << s.gpa << endl;
    });

    return 0;
}
```
📌 **Use Case:** University management system for filtering students by GPA.

---

## **5️⃣ Measuring Execution Time (Performance Testing)**
Lambda functions can help measure **execution time** of code snippets (useful for **benchmarking**).

```cpp
#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int main() {
    auto start = high_resolution_clock::now(); // Start time

    // Some heavy computation (Simulating a time-consuming task)
    auto sum = [](int n) {
        long long total = 0;
        for (int i = 1; i <= n; i++)
            total += i;
        return total;
    };

    cout << "Sum: " << sum(1000000) << endl;

    auto end = high_resolution_clock::now(); // End time
    duration<double> elapsed = end - start;

    cout << "Execution Time: " << elapsed.count() << " seconds" << endl;
}
```
📌 **Use Case:** Used in **performance profiling** tools and system monitoring.

---

## **6️⃣ Multithreading with Lambda (Parallel Processing)**
Lambdas are commonly used for **multithreading** to run tasks in parallel.

```cpp
#include <iostream>
#include <thread>
using namespace std;

int main() {
    thread t1([]() { cout << "Thread 1 is running\n"; });
    thread t2([]() { cout << "Thread 2 is running\n"; });

    t1.join();
    t2.join();
}
```
📌 **Use Case:** **Game engines, web servers, and AI training** often use multithreading.

---

## **7️⃣ Dynamic Command System (Custom Shell or CLI)**
Lambda functions can act as **dynamic commands** for a CLI (Command-Line Interface).

```cpp
#include <iostream>
#include <unordered_map>
#include <functional>
using namespace std;

int main() {
    unordered_map<string, function<void()>> commands;

    commands["greet"] = []() { cout << "Hello, User!" << endl; };
    commands["exit"] = []() { cout << "Exiting..." << endl; exit(0); };

    string input;
    while (true) {
        cout << "Enter command: ";
        cin >> input;
        
        if (commands.find(input) != commands.end())
            commands[input]();
        else
            cout << "Unknown command!" << endl;
    }
}
```
📌 **Use Case:** Used in **custom shells, chatbots, and terminal applications**.

---

## **🎯 Conclusion**
Lambda functions are incredibly **powerful** and have real-world applications in:
✅ **Sorting & Searching (Databases, HR Systems)**  
✅ **Event Handling (GUI Applications, Web Dev)**  
✅ **Performance Benchmarking (Testing, AI Models)**  
✅ **Multithreading (Game Engines, Servers)**  
✅ **Command Systems (Custom Shells, AI Assistants)**  
