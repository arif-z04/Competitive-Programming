
---

## **1. Divide by Zero Handling**

```java
import java.util.Scanner;

public class DivideByZero {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter numerator: ");
        int a = sc.nextInt();
        System.out.print("Enter denominator: ");
        int b = sc.nextInt();

        try {
            int result = a / b;
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Cannot divide by zero!");
        }

        sc.close();
    }
}
```

---

## **2. Array Index Out of Bound**

```java
import java.util.Scanner;

public class ArrayIndexExample {
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50};
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter index (0–4): ");
        try {
            int index = sc.nextInt();
            System.out.println("Element at index " + index + ": " + arr[index]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: Invalid index!");
        }

        sc.close();
    }
}
```

---

## **3. Number Format Exception**

```java
import java.util.Scanner;

public class NumberFormatExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        String input = sc.nextLine();

        try {
            int num = Integer.parseInt(input);
            System.out.println("The number is: " + num);
        } catch (NumberFormatException e) {
            System.out.println("Error: Invalid number format!");
        }

        sc.close();
    }
}
```

---

## **4. Multiple Exception Handling**

```java
import java.util.InputMismatchException;
import java.util.Scanner;

public class MultipleExceptionExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Enter first number: ");
            int a = sc.nextInt();

            System.out.print("Enter second number: ");
            int b = sc.nextInt();

            int result = a / b;
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero!");
        } catch (InputMismatchException e) {
            System.out.println("Error: Invalid input. Please enter numbers only!");
        }

        sc.close();
    }
}
```

---

## **5. Custom Exception – Age Validation**

```java
import java.util.Scanner;

class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}

public class AgeValidation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        try {
            if (age < 18) {
                throw new InvalidAgeException("You must be at least 18 to apply for a driving license.");
            }
            System.out.println("You are eligible for a driving license.");
        } catch (InvalidAgeException e) {
            System.out.println("Error: " + e.getMessage());
        }

        sc.close();
    }
}
```

---

## **6. Nested Try-Catch**

```java
public class NestedTryExample {
    public static void main(String[] args) {
        try {
            int[] arr = new int[3];
            arr[0] = 10;
            arr[1] = 20;

            try {
                int result = arr[1] / 0;
                System.out.println("Result: " + result);
            } catch (ArithmeticException e) {
                System.out.println("Inner catch: Division by zero!");
            }

            System.out.println(arr[5]); // This will cause ArrayIndexOutOfBoundsException
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Outer catch: Array index out of bounds!");
        }
    }
}
```

---

## **7. Finally Block Example**

```java
public class FinallyExample {
    public static void main(String[] args) {
        try {
            int a = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Exception caught: " + e.getMessage());
        } finally {
            System.out.println("Finally block always executes (e.g., closing resources).");
        }
    }
}
```

---

## **8. Bank Transaction Simulation**

```java
class InsufficientBalanceException extends Exception {
    public InsufficientBalanceException(String message) {
        super(message);
    }
}

class BankAccount {
    private double balance;

    public BankAccount(double balance) {
        this.balance = balance;
    }

    public void withdraw(double amount) throws InsufficientBalanceException {
        if (amount > balance) {
            throw new InsufficientBalanceException("Insufficient balance! Withdrawal denied.");
        } else {
            balance -= amount;
            System.out.println("Withdrawal successful. Remaining balance: " + balance);
        }
    }
}

public class BankTransaction {
    public static void main(String[] args) {
        BankAccount account = new BankAccount(1000);

        try {
            account.withdraw(500);
            account.withdraw(600);
        } catch (InsufficientBalanceException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
```

---

## **9. File Handling with Exceptions**

```java
import java.io.*;

public class FileHandlingExample {
    public static void main(String[] args) {
        File file = new File("example.txt");

        try (BufferedReader br = new BufferedReader(new FileReader(file))) {
            String line;
            System.out.println("File Content:");
            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }
        } catch (FileNotFoundException e) {
            System.out.println("Error: File not found!");
        } catch (IOException e) {
            System.out.println("Error: Problem reading file.");
        }
    }
}
```

---

## **10. Student Result Processing**

```java
import java.util.Scanner;

class InvalidMarksException extends Exception {
    public InvalidMarksException(String message) {
        super(message);
    }
}

public class StudentResult {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] marks = new int[3];
        try {
            for (int i = 0; i < 3; i++) {
                System.out.print("Enter marks for subject " + (i + 1) + ": ");
                marks[i] = sc.nextInt();
                if (marks[i] < 0 || marks[i] > 100) {
                    throw new InvalidMarksException("Marks must be between 0 and 100.");
                }
            }

            double average = (marks[0] + marks[1] + marks[2]) / 3.0;
            System.out.println("Average Marks: " + average);
        } catch (InvalidMarksException e) {
            System.out.println("Error: " + e.getMessage());
        }

        sc.close();
    }
}
```
---

## **11. Command-Line Argument Validation**

```java
public class CommandLineSum {
    public static void main(String[] args) {
        try {
            if (args.length < 2)
                throw new IllegalArgumentException("Error: Please provide two numbers.");

            int num1 = Integer.parseInt(args[0]);
            int num2 = Integer.parseInt(args[1]);

            System.out.println("Sum = " + (num1 + num2));
        } catch (NumberFormatException e) {
            System.out.println("Error: Invalid (non-numeric) input.");
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        }
    }
}
```

---

## **12. Library Management System**

```java
class BookNotAvailableException extends Exception {
    public BookNotAvailableException(String message) {
        super(message);
    }
}

class Book {
    String title, author;
    boolean isAvailable;

    public Book(String title, String author) {
        this.title = title;
        this.author = author;
        this.isAvailable = true;
    }

    public void borrowBook() throws BookNotAvailableException {
        if (!isAvailable)
            throw new BookNotAvailableException("The book '" + title + "' is not available.");
        isAvailable = false;
        System.out.println("You borrowed: " + title);
    }

    public void returnBook() {
        isAvailable = true;
        System.out.println("You returned: " + title);
    }
}

public class LibrarySystem {
    public static void main(String[] args) {
        Book b1 = new Book("1984", "George Orwell");

        try {
            b1.borrowBook();
            b1.borrowBook(); // borrow again
        } catch (BookNotAvailableException e) {
            System.out.println("Error: " + e.getMessage());
        }

        b1.returnBook();
    }
}
```

---

## **13. Online Shopping Cart**

```java
import java.util.ArrayList;
import java.util.List;

class EmptyCartException extends Exception {
    public EmptyCartException(String msg) {
        super(msg);
    }
}

class InsufficientBalanceException extends Exception {
    public InsufficientBalanceException(String msg) {
        super(msg);
    }
}

class Item {
    String name;
    double price;
    int qty;

    public Item(String name, double price, int qty) {
        this.name = name;
        this.price = price;
        this.qty = qty;
    }
}

class Cart {
    List<Item> items = new ArrayList<>();

    public void addItem(Item item) {
        items.add(item);
    }

    public double checkout(double balance) throws EmptyCartException, InsufficientBalanceException {
        if (items.isEmpty()) throw new EmptyCartException("Cart is empty.");

        double total = 0;
        for (Item i : items) total += i.price * i.qty;

        if (total > balance)
            throw new InsufficientBalanceException("Total cost exceeds available balance.");

        System.out.println("Checkout successful! Total: " + total);
        return total;
    }
}

public class ShoppingCart {
    public static void main(String[] args) {
        Cart cart = new Cart();
        cart.addItem(new Item("Laptop", 50000, 1));
        cart.addItem(new Item("Mouse", 500, 1));

        try {
            cart.checkout(20000); // insufficient balance
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
```

---

## **14. Employee Payroll System**

```java
import java.util.Scanner;

class InvalidSalaryException extends Exception {
    public InvalidSalaryException(String msg) { super(msg); }
}

class InvalidTaxRateException extends Exception {
    public InvalidTaxRateException(String msg) { super(msg); }
}

public class PayrollSystem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.print("Enter salary: ");
            double salary = sc.nextDouble();

            System.out.print("Enter tax rate (%): ");
            double tax = sc.nextDouble();

            if (salary < 0)
                throw new InvalidSalaryException("Salary cannot be negative.");
            if (tax < 0 || tax > 100)
                throw new InvalidTaxRateException("Tax rate must be between 0 and 100.");

            double netSalary = salary - (salary * tax / 100);
            System.out.println("Net Salary = " + netSalary);
        } catch (InvalidSalaryException | InvalidTaxRateException e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            sc.close();
        }
    }
}
```

---

## **15. Airline Ticket Reservation**

```java
class OverbookingException extends Exception {
    public OverbookingException(String msg) { super(msg); }
}

public class Flight {
    int availableSeats;

    public Flight(int availableSeats) {
        this.availableSeats = availableSeats;
    }

    public void bookTicket(int seats) throws OverbookingException {
        if (seats <= 0)
            throw new IllegalArgumentException("Seats must be greater than zero.");
        if (seats > availableSeats)
            throw new OverbookingException("Not enough seats available.");
        availableSeats -= seats;
        System.out.println("Booked " + seats + " seat(s). Remaining: " + availableSeats);
    }

    public static void main(String[] args) {
        Flight f = new Flight(5);
        try {
            f.bookTicket(3);
            f.bookTicket(4);
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
```

---

## **16. Banking with Nested Exceptions**

```java
class BankingSystem {
    double balance = 1000;

    public void deposit(double amount) throws Exception {
        if (amount <= 0) throw new Exception("Invalid deposit amount.");
        balance += amount;
        System.out.println("Deposited: " + amount);
    }

    public void withdraw(double amount) {
        try {
            if (amount > balance)
                throw new Exception("Insufficient balance.");
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } catch (Exception e) {
            System.out.println("Inner catch: " + e.getMessage());
        }
    }
}

public class NestedBanking {
    public static void main(String[] args) {
        BankingSystem bank = new BankingSystem();
        try {
            bank.deposit(500);
            bank.withdraw(2000);
            bank.deposit(-100);
        } catch (Exception e) {
            System.out.println("Outer catch: " + e.getMessage());
        }
    }
}
```

---

## **17. File Upload Simulation (with Chaining)**

```java
class FileTooLargeException extends Exception {
    public FileTooLargeException(String msg) { super(msg); }
}

class UnsupportedFileTypeException extends Exception {
    public UnsupportedFileTypeException(String msg) { super(msg); }
}

public class FileUploader {
    public static void uploadFile(String fileName, long fileSize) throws Exception {
        try {
            if (!(fileName.endsWith(".jpg") || fileName.endsWith(".png") || fileName.endsWith(".pdf")))
                throw new UnsupportedFileTypeException("Unsupported file type.");
            if (fileSize > 100 * 1024 * 1024)
                throw new FileTooLargeException("File too large (>100MB).");

            System.out.println("File uploaded successfully: " + fileName);
        } catch (Exception e) {
            throw new Exception("Upload failed due to: " + e.getMessage(), e);
        }
    }

    public static void main(String[] args) {
        try {
            uploadFile("data.txt", 50000);
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
```

---

## **18. Student Registration System**

```java
import java.util.HashMap;
import java.util.regex.Pattern;

class DuplicateIDException extends Exception {
    public DuplicateIDException(String msg) { super(msg); }
}

class InvalidEmailException extends Exception {
    public InvalidEmailException(String msg) { super(msg); }
}

class StudentRegistry {
    private HashMap<String, String> registry = new HashMap<>();

    public void register(String id, String email) throws DuplicateIDException, InvalidEmailException {
        if (registry.containsKey(id))
            throw new DuplicateIDException("Student ID already exists: " + id);

        if (!Pattern.matches("^[\\w.-]+@[\\w.-]+\\.\\w+$", email))
            throw new InvalidEmailException("Invalid email format: " + email);

        registry.put(id, email);
        System.out.println("Registered successfully: " + id + " - " + email);
    }
}

public class RegistrationSystem {
    public static void main(String[] args) {
        StudentRegistry sr = new StudentRegistry();
        try {
            sr.register("S001", "student@pstu.edu");
            sr.register("S001", "new@pstu.edu");
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
```

---

## **19. Railway Reservation System (Exception Propagation)**

```java
class SeatNotAvailableException extends Exception {
    public SeatNotAvailableException(String msg) { super(msg); }
}

class TrainService {
    public void reserveSeat(int seatNo) throws SeatNotAvailableException {
        if (seatNo > 50)
            throw new SeatNotAvailableException("Seat number " + seatNo + " not available.");
        System.out.println("Seat " + seatNo + " reserved successfully.");
    }
}

class TrainUI {
    TrainService service = new TrainService();

    public void startReservation(int seatNo) throws SeatNotAvailableException {
        service.reserveSeat(seatNo); // exception propagated
    }
}

public class RailwayReservation {
    public static void main(String[] args) {
        TrainUI ui = new TrainUI();
        try {
            ui.startReservation(55);
        } catch (SeatNotAvailableException e) {
            System.out.println("Error caught in main: " + e.getMessage());
        }
    }
}
```

---

## **20. Banking ATM Simulation**

```java
class InvalidDenominationException extends Exception {
    public InvalidDenominationException(String msg) { super(msg); }
}

class InsufficientFundsException extends Exception {
    public InsufficientFundsException(String msg) { super(msg); }
}

class ATM {
    private double balance;

    public ATM(double balance) {
        this.balance = balance;
    }

    public void withdraw(double amount) throws InvalidDenominationException, InsufficientFundsException {
        if (amount % 500 != 0)
            throw new InvalidDenominationException("Amount must be in multiples of 500.");
        if (amount > balance)
            throw new InsufficientFundsException("Insufficient funds.");
        balance -= amount;
        System.out.println("Withdraw successful! Remaining balance: " + balance);
    }
}

public class ATMSimulation {
    public static void main(String[] args) {
        ATM atm = new ATM(2000);
        try {
            atm.withdraw(750);
        } catch (InvalidDenominationException | InsufficientFundsException e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            System.out.println("Thank you for using our service.");
        }
    }
}
```
---

# 21. Multithreaded Exception Handling

* One thread reads numbers from a file (`numbers.txt`) into a shared list.
* Another thread computes the average after reading finishes.
* Handles `FileNotFoundException`, `NumberFormatException`.
* Demonstrates thread exception handling via `UncaughtExceptionHandler` and explicit catches.

```java
// File: MultithreadedAverage.java
import java.io.*;
import java.util.*;
import java.util.concurrent.*;

public class MultithreadedAverage {

    static class SharedData {
        final List<Double> numbers = Collections.synchronizedList(new ArrayList<>());
        volatile boolean readComplete = false;
        volatile Exception readException = null;
    }

    static class ReaderThread implements Runnable {
        private final SharedData data;
        private final String filename;

        ReaderThread(SharedData data, String filename) {
            this.data = data;
            this.filename = filename;
        }

        @Override
        public void run() {
            try (BufferedReader br = new BufferedReader(new FileReader(filename))) {
                String line;
                while ((line = br.readLine()) != null) {
                    line = line.trim();
                    if (line.isEmpty()) continue;
                    try {
                        double val = Double.parseDouble(line);
                        data.numbers.add(val);
                    } catch (NumberFormatException nfe) {
                        // capture and set readException then stop reading
                        data.readException = new NumberFormatException("Invalid number format: '" + line + "'");
                        return;
                    }
                }
            } catch (FileNotFoundException fnfe) {
                data.readException = fnfe;
            } catch (IOException ioe) {
                data.readException = ioe;
            } finally {
                data.readComplete = true;
            }
        }
    }

    static class AverageThread implements Runnable {
        private final SharedData data;

        AverageThread(SharedData data) {
            this.data = data;
        }

        @Override
        public void run() {
            // Wait until reader marks readComplete
            while (!data.readComplete) {
                try {
                    Thread.sleep(50);
                } catch (InterruptedException e) {
                    Thread.currentThread().interrupt();
                    throw new RuntimeException("AverageThread interrupted");
                }
            }
            if (data.readException != null) {
                // propagate or handle
                throw new RuntimeException("Reader error", data.readException);
            }
            List<Double> copy;
            synchronized (data.numbers) {
                copy = new ArrayList<>(data.numbers);
            }
            if (copy.isEmpty()) {
                System.out.println("No numbers to average.");
                return;
            }
            double sum = 0;
            for (double d : copy) sum += d;
            System.out.println("Average = " + (sum / copy.size()));
        }
    }

    public static void main(String[] args) throws InterruptedException {
        SharedData data = new SharedData();
        String file = "numbers.txt"; // Create this file for testing

        Thread reader = new Thread(new ReaderThread(data, file), "ReaderThread");
        Thread average = new Thread(new AverageThread(data), "AverageThread");

        // Global UncaughtExceptionHandler
        Thread.setDefaultUncaughtExceptionHandler((t, e) ->
            System.out.println("Uncaught exception in " + t.getName() + ": " + e.getMessage())
        );

        reader.start();
        average.start();

        reader.join();
        average.join();

        if (data.readException != null) {
            System.out.println("Reader finished with error: " + data.readException.getMessage());
        } else {
            System.out.println("Reader finished successfully. Read " + data.numbers.size() + " numbers.");
        }
    }
}
```

**Usage / Sample**:

* Create `numbers.txt` with lines like:

  ```
  10
  20
  30
  ```

  Output: `Average = 20.0`
* If file missing → `Reader finished with error: numbers.txt (No such file or directory)` or uncaught printed.
* If non-numeric line → `Uncaught exception in AverageThread: Reader error` and details printed.

---

# 22. Hospital Patient Management

* `NoBedAvailableException` when full.
* `InvalidPatientDataException` for invalid age/name.

```java
// File: HospitalManagement.java
import java.util.*;

class NoBedAvailableException extends Exception {
    public NoBedAvailableException(String msg) { super(msg); }
}

class InvalidPatientDataException extends Exception {
    public InvalidPatientDataException(String msg) { super(msg); }
}

class Patient {
    String name;
    int age;

    public Patient(String name, int age) throws InvalidPatientDataException {
        if (name == null || name.trim().isEmpty()) throw new InvalidPatientDataException("Name cannot be empty.");
        if (age < 0) throw new InvalidPatientDataException("Age cannot be negative.");
        this.name = name;
        this.age = age;
    }

    @Override public String toString() { return name + " (" + age + ")"; }
}

class Hospital {
    private final int capacity;
    private final List<Patient> beds = new ArrayList<>();

    Hospital(int capacity) { this.capacity = capacity; }

    public synchronized void admit(Patient p) throws NoBedAvailableException {
        if (beds.size() >= capacity) throw new NoBedAvailableException("No beds available.");
        beds.add(p);
        System.out.println("Admitted: " + p);
    }

    public synchronized void discharge(Patient p) {
        beds.remove(p);
        System.out.println("Discharged: " + p);
    }

    public synchronized int availableBeds() { return capacity - beds.size(); }
}

public class HospitalManagement {
    public static void main(String[] args) {
        Hospital h = new Hospital(2);
        try {
            Patient p1 = new Patient("Alice", 30);
            Patient p2 = new Patient("Bob", 40);
            Patient p3 = new Patient("Charlie", 20);

            h.admit(p1);
            h.admit(p2);
            System.out.println("Available beds: " + h.availableBeds());
            // this will throw
            h.admit(p3);
        } catch (InvalidPatientDataException | NoBedAvailableException e) {
            System.out.println("Error: " + e.getMessage());
        }

        // Example of invalid data:
        try {
            Patient invalid = new Patient("", -5);
        } catch (InvalidPatientDataException e) {
            System.out.println("Invalid patient data: " + e.getMessage());
        }
    }
}
```

**Sample Output**:

```
Admitted: Alice (30)
Admitted: Bob (40)
Available beds: 0
Error: No beds available.
Invalid patient data: Name cannot be empty.
```

---

# 23. University Course Registration

* `SeatFullException` and `PrerequisiteNotMetException`.

```java
// File: CourseRegistration.java
import java.util.*;

class SeatFullException extends Exception {
    public SeatFullException(String msg) { super(msg); }
}

class PrerequisiteNotMetException extends Exception {
    public PrerequisiteNotMetException(String msg) { super(msg); }
}

class Course {
    String code;
    int capacity;
    Set<String> enrolled = new HashSet<>();
    Set<String> prerequisites;

    Course(String code, int capacity, Set<String> prerequisites) {
        this.code = code;
        this.capacity = capacity;
        this.prerequisites = prerequisites == null ? Collections.emptySet() : prerequisites;
    }

    public synchronized void registerStudent(String studentId, Set<String> completedCourses)
            throws SeatFullException, PrerequisiteNotMetException {
        if (enrolled.size() >= capacity) throw new SeatFullException("Course " + code + " is full.");
        if (!completedCourses.containsAll(prerequisites))
            throw new PrerequisiteNotMetException("Prerequisites not met for " + code);
        enrolled.add(studentId);
        System.out.println("Student " + studentId + " registered to " + code);
    }
}

public class CourseRegistration {
    public static void main(String[] args) {
        Set<String> prereq = new HashSet<>(Arrays.asList("MATH101"));
        Course calc = new Course("CALC201", 1, prereq);

        try {
            // student1 has prereq
            calc.registerStudent("S1", new HashSet<>(Arrays.asList("MATH101")));
            // student2 missing prereq
            calc.registerStudent("S2", new HashSet<>(Arrays.asList("ENGL101")));
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            // attempt to register third student -> seat full
            calc.registerStudent("S3", new HashSet<>(Arrays.asList("MATH101")));
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
```

**Sample**:

```
Student S1 registered to CALC201
Error: Prerequisites not met for CALC201
Error: Course CALC201 is full.
```

---

# 24. Stock Trading Platform

* `InvalidStockException`, `InvalidQuantityException`, `InsufficientFundsException`.

```java
// File: StockTrading.java
import java.util.*;

class InvalidStockException extends Exception {
    public InvalidStockException(String msg) { super(msg); }
}

class InvalidQuantityException extends Exception {
    public InvalidQuantityException(String msg) { super(msg); }
}

class InsufficientFundsException extends Exception {
    public InsufficientFundsException(String msg) { super(msg); }
}

class TradingAccount {
    double balance;
    Set<String> supportedStocks;

    TradingAccount(double balance, Set<String> supportedStocks) {
        this.balance = balance;
        this.supportedStocks = supportedStocks;
    }

    public synchronized void buyShares(String stock, int quantity, double price)
            throws InvalidStockException, InvalidQuantityException, InsufficientFundsException {
        if (!supportedStocks.contains(stock)) throw new InvalidStockException("Unknown stock: " + stock);
        if (quantity <= 0) throw new InvalidQuantityException("Quantity must be > 0.");
        double total = quantity * price;
        if (total > balance) throw new InsufficientFundsException("Not enough funds. Required: " + total);
        balance -= total;
        System.out.println("Bought " + quantity + " shares of " + stock + " at " + price + ". Remaining balance: " + balance);
    }
}

public class StockTrading {
    public static void main(String[] args) {
        Set<String> stocks = new HashSet<>(Arrays.asList("AAPL", "GOOG", "TSLA"));
        TradingAccount acct = new TradingAccount(10000, stocks);

        try {
            acct.buyShares("AAPL", 5, 1500); // ok if funds
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            acct.buyShares("XYZ", 1, 100); // invalid stock
        } catch (Exception e) { System.out.println("Error: " + e.getMessage()); }

        try {
            acct.buyShares("TSLA", -2, 100); // invalid qty
        } catch (Exception e) { System.out.println("Error: " + e.getMessage()); }

        try {
            acct.buyShares("GOOG", 100, 200); // likely insufficient funds
        } catch (Exception e) { System.out.println("Error: " + e.getMessage()); }
    }
}
```

---

# 25. Weather Forecast API Simulation

* Simulated network call; throws `NetworkFailureException`, `InvalidLocationException`.
* Demonstrates exception chaining (wrap `IOException` inside custom).

```java
// File: WeatherServiceSimulation.java
import java.io.IOException;
import java.util.Random;

class NetworkFailureException extends Exception {
    public NetworkFailureException(String msg, Throwable cause) { super(msg, cause); }
}

class InvalidLocationException extends Exception {
    public InvalidLocationException(String msg) { super(msg); }
}

class WeatherService {
    private final Random rand = new Random();

    public double fetchTemperature(String city) throws NetworkFailureException, InvalidLocationException {
        try {
            // Simulate invalid city
            if (city == null || city.trim().isEmpty()) throw new InvalidLocationException("City name not provided.");
            if ("UnknownCity".equalsIgnoreCase(city)) throw new InvalidLocationException("City not found: " + city);

            // Simulate network failure randomly
            if (rand.nextInt(5) == 0) { // 20% chance
                throw new IOException("Simulated network IO error");
            }

            // Simulated temperature
            return -10 + rand.nextDouble() * 50;
        } catch (IOException ioe) {
            // chaining: wrap IOException inside custom NetworkFailureException
            throw new NetworkFailureException("Network failure while fetching weather for " + city, ioe);
        }
    }
}

public class WeatherServiceSimulation {
    public static void main(String[] args) {
        WeatherService service = new WeatherService();

        try {
            System.out.println("Temp in Dhaka: " + service.fetchTemperature("Dhaka"));
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
            if (e.getCause() != null) {
                System.out.println("Cause: " + e.getCause().getMessage());
            }
        }

        try {
            System.out.println("Temp in UnknownCity: " + service.fetchTemperature("UnknownCity"));
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
```

---

# 26. Voting System

* `UnderageVoterException`, `DuplicateVoteException`.
* Logs voters to file; handles `IOException`.

```java
// File: VotingSystem.java
import java.io.*;
import java.util.*;

class UnderageVoterException extends Exception {
    public UnderageVoterException(String msg) { super(msg); }
}

class DuplicateVoteException extends Exception {
    public DuplicateVoteException(String msg) { super(msg); }
}

class VoterRegistry {
    private final Set<String> votedIds = new HashSet<>();
    private final File logFile;

    VoterRegistry(String logFilePath) { this.logFile = new File(logFilePath); }

    public synchronized void castVote(int age, String voterID) throws UnderageVoterException, DuplicateVoteException, IOException {
        if (age < 18) throw new UnderageVoterException("Voter is underage.");
        if (votedIds.contains(voterID)) throw new DuplicateVoteException("Duplicate vote by: " + voterID);

        // append to file (ensure file exists)
        try (FileWriter fw = new FileWriter(logFile, true);
             BufferedWriter bw = new BufferedWriter(fw)) {
            bw.write(voterID + "," + age);
            bw.newLine();
        }
        votedIds.add(voterID);
        System.out.println("Vote recorded for " + voterID);
    }
}

public class VotingSystem {
    public static void main(String[] args) {
        VoterRegistry reg = new VoterRegistry("voters.log");

        try {
            reg.castVote(25, "V001");
            reg.castVote(17, "V002"); // underage
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            reg.castVote(30, "V001"); // duplicate
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        // show file reading (with io handling)
        try (BufferedReader br = new BufferedReader(new FileReader("voters.log"))) {
            System.out.println("Voter log content:");
            String line;
            while ((line = br.readLine()) != null) System.out.println(line);
        } catch (IOException e) {
            System.out.println("Could not read voter log: " + e.getMessage());
        }
    }
}
```

---

# 27. Hotel Booking Application

* `NoRoomAvailableException`, `InvalidStayDurationException`.
* Save booking details to file (with exception handling).

```java
// File: HotelBooking.java
import java.io.*;
import java.util.*;

class NoRoomAvailableException extends Exception {
    public NoRoomAvailableException(String msg) { super(msg); }
}

class InvalidStayDurationException extends Exception {
    public InvalidStayDurationException(String msg) { super(msg); }
}

class Hotel {
    private int availableRooms;
    private final File bookingsFile;

    Hotel(int rooms, String bookingFilePath) {
        this.availableRooms = rooms;
        this.bookingsFile = new File(bookingFilePath);
    }

    public synchronized void bookRoom(String guestName, int nights) throws NoRoomAvailableException, InvalidStayDurationException, IOException {
        if (nights <= 0) throw new InvalidStayDurationException("Stay duration must be > 0.");
        if (availableRooms <= 0) throw new NoRoomAvailableException("No rooms left.");
        availableRooms--;

        // save booking to file
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(bookingsFile, true))) {
            bw.write(guestName + "," + nights + "," + new Date().toString());
            bw.newLine();
        }
        System.out.println("Booked room for " + guestName + " for " + nights + " nights. Rooms left: " + availableRooms);
    }
}

public class HotelBooking {
    public static void main(String[] args) {
        Hotel hotel = new Hotel(1, "bookings.txt");
        try {
            hotel.bookRoom("Alice", 2);
            hotel.bookRoom("Bob", 3); // no rooms
        } catch (Exception e) {
            System.out.println("Booking error: " + e.getMessage());
        }

        try {
            hotel.bookRoom("Charlie", 0); // invalid nights
        } catch (Exception e) {
            System.out.println("Booking error: " + e.getMessage());
        }

        // Show bookings file content
        try (BufferedReader br = new BufferedReader(new FileReader("bookings.txt"))) {
            System.out.println("Bookings:");
            String line;
            while ((line = br.readLine()) != null) System.out.println(line);
        } catch (IOException e) {
            System.out.println("Could not read bookings: " + e.getMessage());
        }
    }
}
```

---

# 28. Banking Transaction Logs

* Transactions stored in a file.
* Custom `TransactionLogNotFoundException`, `CorruptedDataException`.
* Uses `finally` to ensure file resources closed (try-with-resources also shown).

```java
// File: TransactionLogs.java
import java.io.*;
import java.util.*;

class TransactionLogNotFoundException extends Exception {
    public TransactionLogNotFoundException(String msg) { super(msg); }
}

class CorruptedDataException extends Exception {
    public CorruptedDataException(String msg) { super(msg); }
}

class TransactionLogger {
    private final File logFile;
    TransactionLogger(String path) { logFile = new File(path); }

    public void writeTransaction(String txn) throws IOException {
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(logFile, true))) {
            bw.write(txn);
            bw.newLine();
        }
    }

    public List<String> readTransactions() throws TransactionLogNotFoundException, CorruptedDataException {
        if (!logFile.exists()) throw new TransactionLogNotFoundException("Transaction log missing.");
        List<String> result = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(logFile))) {
            String line;
            while ((line = br.readLine()) != null) {
                if (!line.contains("|")) { // simple corruption check
                    throw new CorruptedDataException("Corrupted entry: " + line);
                }
                result.add(line);
            }
        } catch (IOException ioe) {
            // wrap or rethrow as runtime if desired
            throw new RuntimeException(ioe);
        }
        return result;
    }
}

public class TransactionLogs {
    public static void main(String[] args) {
        TransactionLogger logger = new TransactionLogger("txns.log");

        try {
            logger.writeTransaction("TXN001|DEPOSIT|1000");
            logger.writeTransaction("TXN002|WITHDRAW|500");
        } catch (IOException e) {
            System.out.println("Failed to write txn: " + e.getMessage());
        }

        try {
            List<String> txns = logger.readTransactions();
            System.out.println("Transactions:");
            txns.forEach(System.out::println);
        } catch (TransactionLogNotFoundException | CorruptedDataException e) {
            System.out.println("Log error: " + e.getMessage());
        } finally {
            System.out.println("Transaction processing complete (resources cleaned up).");
        }
    }
}
```

---

# 29. Online Food Delivery System

* `OutOfStockException`, `InvalidQuantityException`.
* Simulates multiple restaurants with menus.

```java
// File: FoodDelivery.java
import java.util.*;

class OutOfStockException extends Exception {
    public OutOfStockException(String msg) { super(msg); }
}

class InvalidQuantityException extends Exception {
    public InvalidQuantityException(String msg) { super(msg); }
}

class Restaurant {
    String name;
    Map<String, Integer> stock = new HashMap<>(); // item -> quantity
    Map<String, Double> price = new HashMap<>();

    Restaurant(String name) { this.name = name; }

    void addItem(String item, int qty, double p) {
        stock.put(item, qty);
        price.put(item, p);
    }

    void placeOrder(String item, int qty) throws OutOfStockException, InvalidQuantityException {
        if (qty <= 0) throw new InvalidQuantityException("Quantity must be > 0.");
        int available = stock.getOrDefault(item, 0);
        if (available < qty) throw new OutOfStockException(item + " is out of stock or insufficient.");
        stock.put(item, available - qty);
        System.out.println("Order placed: " + qty + " x " + item + " from " + name + " (cost: " + qty * price.get(item) + ")");
    }
}

public class FoodDelivery {
    public static void main(String[] args) {
        Restaurant r1 = new Restaurant("Pizzeria");
        r1.addItem("Pizza", 5, 7.5);
        r1.addItem("Coke", 10, 1.5);

        try {
            r1.placeOrder("Pizza", 2);
            r1.placeOrder("Pizza", 4); // out of stock
        } catch (Exception e) {
            System.out.println("Order error: " + e.getMessage());
        }

        try {
            r1.placeOrder("Coke", 0); // invalid qty
        } catch (Exception e) {
            System.out.println("Order error: " + e.getMessage());
        }
    }
}
```

---

# 30. Car Rental System

* `CarNotAvailableException`, `InvalidRentalPeriodException`.
* Returns update availability.

```java
// File: CarRental.java
import java.util.*;

class CarNotAvailableException extends Exception {
    public CarNotAvailableException(String msg) { super(msg); }
}

class InvalidRentalPeriodException extends Exception {
    public InvalidRentalPeriodException(String msg) { super(msg); }
}

class Car {
    String id;
    boolean available = true;

    Car(String id) { this.id = id; }

    @Override public String toString() { return "Car{" + id + ", available=" + available + "}"; }
}

class CarRentalService {
    Map<String, Car> fleet = new HashMap<>();

    void addCar(String id) { fleet.put(id, new Car(id)); }

    synchronized void rentCar(String id, int days) throws CarNotAvailableException, InvalidRentalPeriodException {
        if (days <= 0) throw new InvalidRentalPeriodException("Rental days must be > 0.");
        Car c = fleet.get(id);
        if (c == null) throw new CarNotAvailableException("Car not found: " + id);
        if (!c.available) throw new CarNotAvailableException("Car already rented: " + id);
        c.available = false;
        System.out.println("Car rented: " + id + " for " + days + " days.");
    }

    synchronized void returnCar(String id) {
        Car c = fleet.get(id);
        if (c != null) {
            c.available = true;
            System.out.println("Car returned: " + id);
        }
    }
}

public class CarRental {
    public static void main(String[] args) {
        CarRentalService service = new CarRentalService();
        service.addCar("C001");
        service.addCar("C002");

        try {
            service.rentCar("C001", 3);
            service.rentCar("C001", 2); // already rented
        } catch (Exception e) {
            System.out.println("Rental error: " + e.getMessage());
        }

        service.returnCar("C001");

        try {
            service.rentCar("C001", 0); // invalid period
        } catch (Exception e) {
            System.out.println("Rental error: " + e.getMessage());
        }
    }
}
```

---
##  **Exercise 31 — Banking Loan Application**

```java
class LowCreditScoreException extends Exception {
    public LowCreditScoreException(String msg) { super(msg); }
}
class InvalidLoanAmountException extends Exception {
    public InvalidLoanAmountException(String msg) { super(msg); }
}

public class LoanApplication {
    private static final double MAX_LOAN_LIMIT = 500000;

    static void applyForLoan(double amount, int creditScore)
            throws LowCreditScoreException, InvalidLoanAmountException {

        if (creditScore < 600)
            throw new LowCreditScoreException("Credit score too low: " + creditScore);

        if (amount <= 0 || amount > MAX_LOAN_LIMIT)
            throw new InvalidLoanAmountException("Invalid loan amount: " + amount);

        System.out.println("Loan approved for amount: " + amount);
    }

    public static void main(String[] args) {
        try {
            applyForLoan(600000, 650);
        } catch (LowCreditScoreException | InvalidLoanAmountException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
```

---

## 🧩 **Exercise 32 — E-Learning Platform**

```java
import java.io.*;
import java.util.*;

class DuplicateEnrollmentException extends Exception {
    public DuplicateEnrollmentException(String msg) { super(msg); }
}
class InvalidCourseException extends Exception {
    public InvalidCourseException(String msg) { super(msg); }
}

public class ELearningPlatform {
    static List<String> enrolledCourses = new ArrayList<>(Arrays.asList("CSE101"));

    static void enroll(String course) throws DuplicateEnrollmentException, InvalidCourseException {
        List<String> validCourses = Arrays.asList("CSE101", "CSE102", "CSE103");

        if (!validCourses.contains(course))
            throw new InvalidCourseException("Course not found: " + course);

        if (enrolledCourses.contains(course))
            throw new DuplicateEnrollmentException("Already enrolled in: " + course);

        enrolledCourses.add(course);
        System.out.println("Enrolled successfully in " + course);
    }

    public static void main(String[] args) {
        try {
            enroll("CSE101");
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        // file handling
        try (FileWriter fw = new FileWriter("students.txt")) {
            fw.write("Student enrolled courses: " + enrolledCourses);
        } catch (IOException e) {
            System.out.println("File saving error: " + e.getMessage());
        }
    }
}
```

---

## 🧩 **Exercise 33 — Smart Home IoT System**

```java
class DeviceNotConnectedException extends Exception {
    public DeviceNotConnectedException(String msg) { super(msg); }
}
class InvalidDeviceCommandException extends Exception {
    public InvalidDeviceCommandException(String msg) { super(msg); }
}

class IoTDevice {
    boolean isConnected;
    IoTDevice(boolean connected) { this.isConnected = connected; }

    void sendCommand(String cmd)
            throws DeviceNotConnectedException, InvalidDeviceCommandException {
        if (!isConnected)
            throw new DeviceNotConnectedException("Device is offline!");
        if (!cmd.equalsIgnoreCase("ON") && !cmd.equalsIgnoreCase("OFF"))
            throw new InvalidDeviceCommandException("Invalid command: " + cmd);

        System.out.println("Device command executed: " + cmd);
    }
}

public class SmartHome {
    public static void main(String[] args) {
        try {
            IoTDevice ac = new IoTDevice(false);
            ac.sendCommand("ON");
        } catch (Exception e) {
            System.out.println("IoT Error: " + e.getMessage());
        }
    }
}
```

---

## 🧩 **Exercise 34 — Airline Luggage Handling**

```java
class OverweightLuggageException extends Exception {
    public OverweightLuggageException(String msg) { super(msg); }
}
class InvalidLuggageException extends Exception {
    public InvalidLuggageException(String msg) { super(msg); }
}

public class LuggageCheck {
    static void checkLuggage(double weight, double limit)
            throws OverweightLuggageException, InvalidLuggageException {

        if (weight <= 0)
            throw new InvalidLuggageException("Invalid luggage weight!");
        if (weight > limit)
            throw new OverweightLuggageException("Overweight luggage: " + weight + "kg");

        System.out.println("Luggage accepted: " + weight + "kg");
    }

    public static void main(String[] args) {
        try {
            checkLuggage(35, 30);
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
```

---

## 🧩 **Exercise 35 — Taxi Ride-Hailing App**

```java
class NoDriverAvailableException extends Exception {
    public NoDriverAvailableException(String msg) { super(msg); }
}
class InvalidDestinationException extends Exception {
    public InvalidDestinationException(String msg) { super(msg); }
}

public class TaxiApp {
    static void requestRide(String destination, boolean driverAvailable)
            throws NoDriverAvailableException, InvalidDestinationException {

        if (!driverAvailable)
            throw new NoDriverAvailableException("No drivers available right now.");
        if (destination.isEmpty() || destination.equalsIgnoreCase("Unknown"))
            throw new InvalidDestinationException("Invalid destination!");

        System.out.println("Ride confirmed to " + destination);
    }

    public static void main(String[] args) {
        try {
            requestRide("Unknown", true);
        } catch (Exception e) {
            System.out.println("Booking Error: " + e.getMessage());
        }
    }
}
```

---

## 🧩 **Exercise 36 — Banking Multi-Account Transfer**

```java
class InsufficientFundsException extends Exception {
    public InsufficientFundsException(String msg) { super(msg); }
}
class InvalidTransferAmountException extends Exception {
    public InvalidTransferAmountException(String msg) { super(msg); }
}

class Account {
    String name;
    double balance;

    Account(String name, double balance) { this.name = name; this.balance = balance; }

    void transfer(Account to, double amount)
            throws InsufficientFundsException, InvalidTransferAmountException {

        if (amount <= 0)
            throw new InvalidTransferAmountException("Invalid transfer amount!");
        if (amount > this.balance)
            throw new InsufficientFundsException("Not enough funds!");

        this.balance -= amount;
        to.balance += amount;
        System.out.println("Transferred " + amount + " from " + this.name + " to " + to.name);
    }
}

public class MultiAccountBank {
    public static void main(String[] args) {
        Account a1 = new Account("Alice", 1000);
        Account a2 = new Account("Bob", 500);

        try {
            a1.transfer(a2, 1500);
        } catch (Exception e) {
            System.out.println("Transaction failed: " + e.getMessage());
        }
    }
}
```

---

## 🧩 **Exercise 37 — Cloud Storage Service**

```java
class QuotaExceededException extends Exception {
    public QuotaExceededException(String msg) { super(msg); }
}
class InvalidFileNameException extends Exception {
    public InvalidFileNameException(String msg) { super(msg); }
}

public class CloudStorage {
    static void uploadFile(String fileName, long fileSizeMB)
            throws QuotaExceededException, InvalidFileNameException {

        if (fileSizeMB > 100)
            throw new QuotaExceededException("File too large!");
        if (fileName.contains("?") || fileName.contains("/"))
            throw new InvalidFileNameException("Invalid file name!");

        System.out.println("Uploaded file: " + fileName + " (" + fileSizeMB + "MB)");
    }

    public static void main(String[] args) {
        try {
            uploadFile("data?.txt", 50);
        } catch (Exception e) {
            System.out.println("Upload error: " + e.getMessage());
        } finally {
            System.out.println("Connection closed.");
        }
    }
}
```

---

## 🧩 **Exercise 38 — Gaming Leaderboard System**

```java
import java.io.*;
import java.util.*;

class InvalidScoreException extends Exception {
    public InvalidScoreException(String msg) { super(msg); }
}
class PlayerNotFoundException extends Exception {
    public PlayerNotFoundException(String msg) { super(msg); }
}

public class Leaderboard {
    static Map<String, Integer> scores = new HashMap<>();

    static void updateScore(String player, int score)
            throws InvalidScoreException, PlayerNotFoundException {
        if (score < 0) throw new InvalidScoreException("Score cannot be negative!");
        if (!scores.containsKey(player)) throw new PlayerNotFoundException("Player not found: " + player);

        scores.put(player, scores.get(player) + score);
    }

    public static void main(String[] args) {
        scores.put("Arif", 100);
        try {
            updateScore("John", 50);
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        try (FileWriter fw = new FileWriter("leaderboard.txt")) {
            fw.write(scores.toString());
        } catch (IOException e) {
            System.out.println("File write error.");
        }
    }
}
```

---

## 🧩 **Exercise 39 — Online Banking with Multi-Level Exception Handling**

```java
class AuthException extends Exception { public AuthException(String m){super(m);} }
class AccountException extends Exception { public AccountException(String m){super(m);} }
class TransactionException extends Exception { public TransactionException(String m){super(m);} }

public class OnlineBank {
    static void authenticateUser() throws AuthException {
        throw new AuthException("Authentication failed!");
    }

    static void validateAccount() throws AccountException {
        throw new AccountException("Account not valid!");
    }

    static void processTransaction() throws TransactionException {
        throw new TransactionException("Transaction failed!");
    }

    static void performTransaction() throws Exception {
        authenticateUser();
        validateAccount();
        processTransaction();
    }

    public static void main(String[] args) {
        try {
            performTransaction();
        } catch (Exception e) {
            System.out.println("Error propagated: " + e.getMessage());
        }
    }
}
```

---

## 🧩 **Exercise 40 — Space Mission Control**

```java
class FuelShortageException extends Exception { public FuelShortageException(String m){super(m);} }
class EngineFailureException extends Exception { public EngineFailureException(String m){super(m);} }
class WeatherNotSuitableException extends Exception { public WeatherNotSuitableException(String m){super(m);} }

public class SpaceMission {
    static void launchRocket(int fuel, boolean engineOK, boolean weatherOK)
            throws FuelShortageException, EngineFailureException, WeatherNotSuitableException {

        if (fuel < 100) throw new FuelShortageException("Not enough fuel!");
        if (!engineOK) throw new EngineFailureException("Engine test failed!");
        if (!weatherOK) throw new WeatherNotSuitableException("Unsafe weather!");

        System.out.println("🚀 Launch successful!");
    }

    public static void main(String[] args) {
        try {
            launchRocket(80, true, true);
        } catch (FuelShortageException | EngineFailureException | WeatherNotSuitableException e) {
            System.out.println("Launch aborted: " + e.getMessage());
        } finally {
            System.out.println("Mission Control signing off.");
        }
    }
}
```

---

## 🧩 **Exercise 41 — Online Exam System**

```java
import java.util.*;

class InvalidCredentialsException extends Exception { public InvalidCredentialsException(String m){super(m);} }
class TimeOutException extends Exception { public TimeOutException(String m){super(m);} }
class QuestionNotFoundException extends Exception { public QuestionNotFoundException(String m){super(m);} }

public class OnlineExam {
    static Map<String,String> userDB = Map.of("arif", "1234");
    static String[] questions = {"Q1", "Q2", "Q3"};

    static void login(String user, String pass) throws InvalidCredentialsException {
        if (!userDB.containsKey(user) || !userDB.get(user).equals(pass))
            throw new InvalidCredentialsException("Invalid login!");
    }

    static void accessQuestion(int index) throws QuestionNotFoundException {
        if (index < 0 || index >= questions.length)
            throw new QuestionNotFoundException("Invalid question index!");
        System.out.println("Accessing: " + questions[index]);
    }

    public static void main(String[] args) {
        try {
            login("arif", "wrongpass");
        } catch (InvalidCredentialsException e) {
            System.out.println("Login Error: " + e.getMessage());
        }

        try {
            accessQuestion(5);
        } catch (QuestionNotFoundException e) {
            System.out.println("Exam Error: " + e.getMessage());
        }

        try {
            throw new TimeOutException("Time over!");
        } catch (TimeOutException e) {
            System.out.println("Exam ended: " + e.getMessage());
        }
    }
}
```

---

