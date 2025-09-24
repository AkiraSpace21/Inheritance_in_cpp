# Inheritance Programs in C++

## **Aim**
To understand and implement various types of inheritance in C++ including single, multiple, multilevel, and hierarchical inheritance.

## **Theory**
- **Class:** A class is a blueprint or template for creating objects in C++. It defines data members (attributes) and member functions (methods) that operate on the data. Classes enable encapsulation, allowing data and functions to be bundled together.

- **Object:** An object is an instance of a class. Each object has its own copy of the data members defined in the class, but can access class methods to perform operations.

- **Inheritance:** Inheritance is a fundamental concept of Object-Oriented Programming (OOP) that allows a new class (called a derived class) to acquire the properties and behaviors of an existing class (called a base class). This promotes code reusability and hierarchical class relationships.

- **Types of Inheritance in C++:**
  1. **Single Inheritance:** Derived class inherits from one base class.  
     - *Example:* `Car` inherits from `Vehicle`.  
  2. **Multiple Inheritance:** Derived class inherits from more than one base class.  
     - *Example:* `Department` inherits from both `University` and `Facility`.  
  3. **Multilevel Inheritance:** A chain of inheritance where a class is derived from a derived class.  
     - *Example:* `Lab` inherits from `Department` which in turn inherits from `University`.  
  4. **Hierarchical Inheritance:** Multiple derived classes inherit from a single base class.  
     - *Example:* `Department`, `Hostel`, and `Library` inherit from `University`.

- **Access Specifiers and Inheritance:**  
  - **Public:** Members remain public in the derived class.  
  - **Protected:** Members become protected in the derived class.  
  - **Private:** Members are not accessible directly by the derived class.  

- **Advantages of Inheritance:**  
  - Promotes **code reusability** by avoiding duplication.  
  - Helps in establishing a **hierarchical relationship** among classes.  
  - Makes code **easier to maintain** and extend.  

---

## **Algorithms**

### **Program 1: Vehicle and Car (Single Inheritance)**
1. Define a base class `Vehicle` with data members and a method.  
2. Define a derived class `Car` that inherits from `Vehicle` and adds its own members.  
3. In `main()`, create an object of `Car`.  
4. Call base class and derived class methods using the object.  

---

### **Program 2: University and Department (Single Inheritance)**
1. Define a base class `University` with a string variable and a method.  
2. Define a derived class `Department` with additional properties.  
3. In `main()`, create a `Department` object.  
4. Access base class and derived class members using the object.  

---

### **Program 3: University, Department, and Facility (Multiple Inheritance)**
1. Define base class `University` with data members and a method.  
2. Define another base class `Facility` with its own members.  
3. Define a derived class `Department` inheriting from both `University` and `Facility`.  
4. Add department-specific members and method.  
5. In `main()`, create a `Department` object and access all inherited and local members.  

---

### **Program 4: University → Department → Lab (Multilevel Inheritance)**
1. Define a base class `University` with properties and a method.  
2. Define a derived class `Department` inheriting from `University` and adding more members.  
3. Define another derived class `Lab` inheriting from `Department`.  
4. In `main()`, create a `Lab` object.  
5. Call methods from `University`, `Department`, and `Lab` using the object.  

---

### **Program 5: University → Department / Hostel / Library (Hierarchical Inheritance)**
1. Define a base class `University` with properties and a method.  
2. Define derived classes `Department`, `Hostel`, and `Library` inheriting from `University`.  
3. Add specific members and display methods in each derived class.  
4. In `main()`, create objects of each derived class.  
5. Call base class and derived class methods using respective objects.  

---

## **Conclusion**
- Inheritance is a key feature of object-oriented programming that facilitates **code reusability**, **modularity**, and **logical class hierarchy**.  
- By implementing single, multiple, multilevel, and hierarchical inheritance, programmers can model real-world relationships efficiently.  
- The programs demonstrate how derived classes can access and extend the properties and behavior of base classes, reducing redundancy and improving maintainability.  
- Understanding inheritance is essential for designing scalable and robust software systems in C++.
