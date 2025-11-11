## ✅ **1. Runnable Interface – Get Thread Names**

```java
class MyRunnable implements Runnable {
    @Override
    public void run() {
        System.out.println("Thread name: " + Thread.currentThread().getName());
    }
}

public class ThreadNames {
    public static void main(String[] args) {
        Thread t1 = new Thread(new MyRunnable(), "Thread A");
        Thread t2 = new Thread(new MyRunnable(), "Thread B");

        System.out.println("Thread names are following:");
        t1.start();
        t2.start();
    }
}
```

🟢 **Output Example:**

```
Thread names are following:
Thread name: Thread A
Thread name: Thread B
```

---

## ✅ **2. Three Threads – Sum Calculation**

```java
class SumThread extends Thread {
    public SumThread(String name) {
        super(name);
    }

    @Override
    public void run() {
        int sum = 0;
        for (int x = 0; x < 10; x++) {
            sum += x;
            System.out.println("Thread : " + getName() + " - value : " + sum);
        }
        System.out.println("Thread : " + getName() + " - Sum : " + sum);
    }
}

public class MultiSum {
    public static void main(String[] args) {
        Thread t1 = new SumThread("A");
        Thread t2 = new SumThread("B");
        Thread t3 = new SumThread("C");

        t1.start();
        t2.start();
        t3.start();
    }
}
```

🟢 **Output Example (unordered due to concurrency):**

```
Thread : A - value : 1
Thread : B - value : 1
Thread : C - value : 1
...
Thread : A - Sum : 45
Thread : B - Sum : 45
Thread : C - Sum : 45
```

---

## ✅ **3. Print “Good morning” and “Welcome” continuously using Threads**

```java
class GoodMorningThread extends Thread {
    public void run() {
        while (true) {
            System.out.println("Good morning");
        }
    }
}

class WelcomeThread extends Thread {
    public void run() {
        while (true) {
            System.out.println("Welcome");
        }
    }
}

public class GreetingThreads {
    public static void main(String[] args) {
        new GoodMorningThread().start();
        new WelcomeThread().start();
    }
}
```

⚠️ Note: This will run infinitely — press **Ctrl + C** to stop it.

---

## ✅ **4. Add Delay (200ms) in “Welcome” Thread**

```java
class GoodMorning extends Thread {
    public void run() {
        while (true) {
            System.out.println("Good morning");
        }
    }
}

class Welcome extends Thread {
    public void run() {
        while (true) {
            System.out.println("Welcome");
            try {
                Thread.sleep(200); // delay 200ms
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class DelayedGreeting {
    public static void main(String[] args) {
        new GoodMorning().start();
        new Welcome().start();
    }
}
```

🟢 **Output Example:**

```
Good morning
Welcome
Good morning
Good morning
Welcome
...
```

---

## ✅ **5. Largest Number of Divisors (1–10,000 and Multithreaded 1–100,000)**

### 🧩 Single-threaded version:

```java
public class DivisorFinder {
    public static void main(String[] args) {
        int maxDivisors = 0;
        int numberWithMax = 0;

        for (int i = 1; i <= 10000; i++) {
            int divisors = countDivisors(i);
            if (divisors > maxDivisors) {
                maxDivisors = divisors;
                numberWithMax = i;
            }
        }

        System.out.println("Number with most divisors: " + numberWithMax);
        System.out.println("Divisors count: " + maxDivisors);
    }

    static int countDivisors(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++)
            if (n % i == 0) count++;
        return count;
    }
}
```

---

### 🧩 Multithreaded version (1–100,000)

```java
class DivisorTask extends Thread {
    int start, end;
    int maxDivisors = 0;
    int numberWithMax = 0;

    DivisorTask(int start, int end) {
        this.start = start;
        this.end = end;
    }

    public void run() {
        for (int i = start; i <= end; i++) {
            int divisors = countDivisors(i);
            if (divisors > maxDivisors) {
                maxDivisors = divisors;
                numberWithMax = i;
            }
        }
    }

    int countDivisors(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++)
            if (n % i == 0) count++;
        return count;
    }
}

public class MultiDivisorFinder {
    public static void main(String[] args) throws InterruptedException {
        long startTime = System.currentTimeMillis();

        DivisorTask t1 = new DivisorTask(1, 25000);
        DivisorTask t2 = new DivisorTask(25001, 50000);
        DivisorTask t3 = new DivisorTask(50001, 75000);
        DivisorTask t4 = new DivisorTask(75001, 100000);

        t1.start(); t2.start(); t3.start(); t4.start();
        t1.join(); t2.join(); t3.join(); t4.join();

        // Combine results
        DivisorTask[] threads = {t1, t2, t3, t4};
        int maxDivisors = 0;
        int numberWithMax = 0;

        for (DivisorTask t : threads) {
            if (t.maxDivisors > maxDivisors) {
                maxDivisors = t.maxDivisors;
                numberWithMax = t.numberWithMax;
            }
        }

        long endTime = System.currentTimeMillis();

        System.out.println("Number with most divisors: " + numberWithMax);
        System.out.println("Divisors count: " + maxDivisors);
        System.out.println("Elapsed time: " + (endTime - startTime) + " ms");
    }
}
```

🟢 **Output Example (depends on machine):**

```
Number with most divisors: 83160
Divisors count: 128
Elapsed time: 850 ms
```

