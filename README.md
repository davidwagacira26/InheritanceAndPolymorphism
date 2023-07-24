# Employee Management System

This C++ program demonstrates a simple Employee Management System using inheritance and polymorphism. The program defines different classes to represent staff members such as teachers, officers, regular typists, and casual typists. Each class inherits from a base class `Staff`, which holds common properties like code and name. The derived classes add specific details for each staff category.

## Requirements

To compile and run this code, you need a C++ compiler installed on your system.

## How to Use

1. Copy the code into a C++ source file with the extension `.cpp`.
2. Use your preferred C++ compiler to compile the code.
3. Run the compiled executable to see the details of various staff members.

## Code Explanation

1. The `Staff` class holds two public members: `code` (to store staff code) and `name` (to store staff name). It also has a `setInfo` method to set the staff's name and code.

2. The `Teacher`, `Officer`, `Regular`, and `Casual` classes are derived from the `Staff` class using public inheritance. Each derived class adds specific details related to their category, such as `subject`, `publication`, `grade`, `speed`, and `wage`.

3. The `display` method is defined in each derived class to print the details of the respective staff category using `cout`.

4. In the `main` function, objects of `Teacher`, `Officer`, `Regular`, and `Casual` classes are created and their details are set using the appropriate methods.

5. The `display` method is called on each object to print the staff details on the console.

## Example Output

When you run the code, you will see the details of various staff members displayed on the console, such as:

```
About teacher:
Name: Christopher Nolan   Code: 420
Subject: Computer Science    Publication: Hollywood Hill

About officer:
Name: Cillian Murphy   Code: 222
Category: First class

About regular typist:
Name: Margot Robbie   Code: 333
Speed: 85.5         Wage: 15000

About casual typist:
Name: Ryan Gosling   Code: 444
Speed: 78.9         Wage: 10000
```

These outputs represent the details of a teacher, an officer, a regular typist, and a casual typist, respectively. Each staff category's specific information is displayed using the appropriate method overrides defined in the derived classes.