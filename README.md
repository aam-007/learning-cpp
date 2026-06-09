# C++ for DSA — 3rd Semester

> Personal repo to store all files written while learning C++ for Data Structures & Algorithms (3rd Sem, 2nd Year UG).  
> Language: C++17 | Compiler: g++ (MINGW) | Purpose: DSA prep, not software engineering.

---

## Table of Contents

1. [Basics](#1--basics)
2. [Functions & Files](#2--functions--files)
3. [Fundamental Data Types](#3--fundamental-data-types)
4. [Strings](#4--strings)
5. [Operators](#5--operators)
6. [Control Flow](#6--control-flow)
7. [References and Pointers](#7--references-and-pointers)
8. [Dynamic Arrays](#8--dynamic-arrays)
9. [Misc — Structs & Classes](#misc--structs--classes)
10. [Applications](#applications)

---

## Folder Structure

```
C:.
├── 1 – Basics
├── 2 – Functions & Files
├── 3 – Fundamental Data Types
├── 4 – Strings
├── 5 – Operators
├── 6 – Control Flow
├── 7 – References and Pointers
├── 8 – Dynamic arrays
├── Applications
└── Misc
```

---

## 1 – Basics

**Files:** `1_hello.cpp`, `2_variables.cpp`, `3_intro_to_io_stream.cpp`, `4_operators.cpp`, `5_writing_a_full_program.cpp`

The absolute starting point. Covers how a C++ program is structured, how to declare variables, and how to take input/output.

### Hello World

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

### Variables

```cpp
int age = 20;
double gpa = 9.1;
bool isEnrolled = true;
char grade = 'A';
```

### I/O Stream

```cpp
#include <iostream>

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "You entered: " << x << std::endl;
}
```

`std::cin` reads input, `std::cout` prints output, `<<` and `>>` are the insertion/extraction operators.

### Basic Operators

| Operator | Meaning         | Example        |
|----------|-----------------|----------------|
| `+`      | Addition        | `a + b`        |
| `-`      | Subtraction     | `a - b`        |
| `*`      | Multiplication  | `a * b`        |
| `/`      | Division        | `a / b`        |
| `%`      | Modulo          | `a % b`        |

Integer division truncates: `7 / 2 = 3`, not `3.5`.

---

## 2 – Functions & Files

**Files:** `1_intro.cpp`, `2_value-returning_funcs.cpp`, `3_void_funcs.cpp`, `4_func_parameters_and_args.cpp`, `5_preprocessors.cpp`, `6_headerFiles.cpp`

Functions let you break code into reusable chunks. Critical for DSA — every algorithm you write will be a function.

### Value-Returning Function

```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 5);  // result = 8
}
```

### Void Function

```cpp
void printMessage(std::string msg) {
    std::cout << msg << std::endl;
    // no return value
}
```

### Parameters vs Arguments

- **Parameter** — variable in the function definition: `int a`
- **Argument** — actual value passed when calling: `add(3, 5)` → `3` and `5` are arguments

### Preprocessors

```cpp
#include <iostream>     // include standard library header
#define MAX 100         // macro constant — replaced by 100 before compilation
```

`#include`, `#define`, `#ifndef` etc. are preprocessor directives — they run before actual compilation.

### Header Files

Split code across files using `.h` (header) and `.cpp` (source):

```cpp
// getInput.h
int getInput();          // declaration

// getInput.cpp
#include "getInput.h"
int getInput() {         // definition
    int x;
    std::cin >> x;
    return x;
}

// main.cpp
#include "getInput.h"    // use it
```

---

## 3 – Fundamental Data Types

**Files:** `1_size_of.cpp`, `2_if_statements.cpp`, `3_chars.cpp`, `4_typeConversions.cpp`

### sizeof

```cpp
std::cout << sizeof(int)    << std::endl;  // 4 bytes
std::cout << sizeof(double) << std::endl;  // 8 bytes
std::cout << sizeof(char)   << std::endl;  // 1 byte
std::cout << sizeof(bool)   << std::endl;  // 1 byte
```

### Common Types

| Type      | Size    | Range (approx)              |
|-----------|---------|-----------------------------|
| `int`     | 4 bytes | −2.1B to 2.1B               |
| `long long` | 8 bytes | −9.2 quintillion to 9.2Q  |
| `double`  | 8 bytes | ~15 decimal digits precision|
| `char`    | 1 byte  | single character (ASCII)    |
| `bool`    | 1 byte  | `true` or `false`           |

> For DSA: prefer `int` for most things, switch to `long long` when values can exceed ~2 billion (e.g. sum of large arrays).

### Chars

```cpp
char c = 'A';
std::cout << (int)c << std::endl;  // prints 65 (ASCII value)

// char arithmetic — useful in DSA
char ch = 'a';
std::cout << (char)(ch + 1);       // prints 'b'
```

### Type Conversions

```cpp
// Implicit (automatic)
int x = 3;
double d = x;       // int → double, safe

// Explicit (cast)
double pi = 3.14;
int n = (int)pi;    // n = 3, decimal truncated

// Careful with integer division
int a = 7, b = 2;
double result = (double)a / b;  // 3.5, not 3
```

---

## 4 – Strings

**Files:** `1_strings.cpp`, `2_std_view.cpp`

### std::string

```cpp
#include <string>

std::string name = "Alice";
std::cout << name.length() << std::endl;   // 5
std::cout << name[0]       << std::endl;   // 'A'
std::cout << name.substr(1, 3) << std::endl; // "lic"

// Concatenation
std::string full = "Hello" + std::string(", World!");

// Input with spaces
std::string sentence;
std::getline(std::cin, sentence);
```

### Useful String Methods

| Method            | What it does                        |
|-------------------|-------------------------------------|
| `.length()`       | number of characters                |
| `.substr(pos, n)` | substring starting at pos, length n |
| `.find(s)`        | index of first occurrence of s      |
| `.empty()`        | true if string is empty             |
| `.push_back(c)`   | append a character                  |
| `.pop_back()`     | remove last character               |

### std::string_view

```cpp
#include <string_view>

// Read-only, non-owning view of a string — no copy made
std::string_view sv = "Hello";
```

Faster than `std::string` for read-only access. Not required for basic DSA.

---

## 5 – Operators

**Files:** `1_increment_decrement_ops.cpp`, `2_comma_op.cpp`, `3_conditional_op.cpp`

### Increment / Decrement

```cpp
int x = 5;

x++;   // post-increment: use x (5), then increment → x is now 6
++x;   // pre-increment:  increment first, then use → x is now 7

x--;   // post-decrement
--x;   // pre-decrement
```

In DSA loops, prefer `++i` over `i++` (avoids creating a temporary copy — negligible but good habit).

### Conditional (Ternary) Operator

```cpp
int a = 10, b = 20;
int max = (a > b) ? a : b;   // max = 20

// Equivalent to:
// if (a > b) max = a;
// else max = b;
```

Great for compact comparisons inside DSA functions.

### Comma Operator

```cpp
int x = (1, 2, 3);   // x = 3 (evaluates all, returns last)
```

Rarely used directly, but shows up in `for` loop syntax.

---

## 6 – Control Flow

**Files:** `1_if-else.cpp`, `2_switch_statements.cpp`, `3_while_loop.cpp`, `4_for_loop.cpp`, `5_static.cpp`

### if / else

```cpp
int score = 85;

if (score >= 90) {
    std::cout << "A";
} else if (score >= 75) {
    std::cout << "B";
} else {
    std::cout << "C";
}
```

### switch

```cpp
int day = 2;
switch (day) {
    case 1:  std::cout << "Mon"; break;
    case 2:  std::cout << "Tue"; break;
    default: std::cout << "Other";
}
```

`break` is mandatory — without it, execution falls through to the next case.

### while Loop

```cpp
int i = 0;
while (i < 5) {
    std::cout << i << " ";
    i++;
}
// 0 1 2 3 4
```

### for Loop

```cpp
for (int i = 0; i < 5; i++) {
    std::cout << i << " ";
}
// 0 1 2 3 4
```

Structure: `for (init; condition; update)`

### static Variables

```cpp
void counter() {
    static int count = 0;  // initialized only once
    count++;
    std::cout << count << std::endl;
}

counter();  // 1
counter();  // 2
counter();  // 3
```

`static` local variables retain their value between function calls.

---

## 7 – References and Pointers

**Files:** `1_Lvalue_refrences.cpp`, `2_intro_to_pointers.cpp`, `3_null_pointers.cpp`, `4_practice.cpp`

This is the most important section for DSA. Linked lists, trees, and graphs are all built on pointers.

### L-value References

```cpp
int x = 10;
int &ref = x;    // ref is an alias for x

ref = 20;
std::cout << x;  // 20 — x itself changed

// Pass by reference — avoids copying, allows modification
void increment(int &n) {
    n++;
}

int a = 5;
increment(a);
std::cout << a;  // 6
```

### Pointers

```cpp
int x = 42;
int *ptr = &x;    // ptr holds the address of x

std::cout << ptr;   // address (e.g. 0x61fe14)
std::cout << *ptr;  // 42 — dereference: value at that address

*ptr = 100;
std::cout << x;     // 100
```

Key operators:
- `&` — address-of: gives the memory address of a variable
- `*` — dereference: gives the value stored at an address

### Pointer Arithmetic

```cpp
int arr[] = {10, 20, 30};
int *p = arr;          // points to arr[0]

std::cout << *p;       // 10
std::cout << *(p + 1); // 20
std::cout << *(p + 2); // 30
```

### Null Pointers

```cpp
int *ptr = nullptr;    // points to nothing

if (ptr == nullptr) {
    std::cout << "Pointer is null";
}
```

Always initialize pointers. Dereferencing a null pointer crashes the program.

---

## 8 – Dynamic Arrays

**Files:** `1_intro_to_std_vector.cpp`, `2_arrays_and_loops.cpp`, `3_range-based_loops.cpp`, `4_resize_arrays.cpp`

`std::vector` is the go-to container for DSA in C++. Resizable, fast, and compatible with all STL algorithms.

### std::vector Basics

```cpp
#include <vector>

std::vector<int> v = {1, 2, 3, 4, 5};

std::cout << v[0];        // 1
std::cout << v.size();    // 5
std::cout << v.front();   // 1 (first element)
std::cout << v.back();    // 5 (last element)
```

### Common Operations

```cpp
std::vector<int> v;

v.push_back(10);    // add to end
v.push_back(20);
v.pop_back();       // remove from end

v.insert(v.begin() + 1, 99);  // insert 99 at index 1
v.erase(v.begin() + 1);       // remove element at index 1

v.clear();          // remove all elements
v.empty();          // true if size == 0
```

### Loops with Vectors

```cpp
std::vector<int> v = {10, 20, 30};

// Index-based
for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
}

// Range-based (cleaner)
for (int x : v) {
    std::cout << x << " ";
}

// By reference (to modify elements)
for (int &x : v) {
    x *= 2;
}
```

### Resizing

```cpp
std::vector<int> v(5, 0);    // [0, 0, 0, 0, 0]

v.resize(8, -1);             // [0, 0, 0, 0, 0, -1, -1, -1]
v.resize(3);                 // [0, 0, 0] — truncates
```

### 2D Vector (for grids/graphs)

```cpp
int rows = 3, cols = 4;
std::vector<std::vector<int>> grid(rows, std::vector<int>(cols, 0));

grid[1][2] = 5;

// Traverse
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        std::cout << grid[i][j] << " ";
    }
    std::cout << std::endl;
}
```

---

## Misc – Structs & Classes

**Files:** `1_struct.cpp`, `2_classes.cpp`

### Structs

Group related data together. Think of it as a blueprint for a node in a linked list or tree.

```cpp
struct Student {
    std::string name;
    int age;
    double gpa;
};

Student s1;
s1.name = "Alice";
s1.age  = 20;
s1.gpa  = 9.1;

// Or initialize directly
Student s2 = {"Bob", 21, 8.7};
```

### Struct with Functions (in DSA context)

```cpp
struct Node {
    int data;
    Node *next;         // pointer to next node

    Node(int val) {     // constructor
        data = val;
        next = nullptr;
    }
};

Node *head = new Node(10);
head->next = new Node(20);   // -> dereferences pointer and accesses member
```

### Classes

```cpp
class Stack {
private:
    std::vector<int> data;   // hidden from outside

public:
    void push(int val) {
        data.push_back(val);
    }

    void pop() {
        data.pop_back();
    }

    int top() {
        return data.back();
    }

    bool isEmpty() {
        return data.empty();
    }
};

Stack s;
s.push(5);
s.push(10);
std::cout << s.top();   // 10
s.pop();
std::cout << s.top();   // 5
```

### Struct vs Class

| | `struct` | `class` |
|--|----------|---------|
| Default access | `public` | `private` |
| Used for | Simple data grouping (nodes) | Full abstractions (ADTs) |
| In DSA | Linked list nodes, tree nodes | Stack, Queue, Graph implementations |

---

## Applications

**Files:** `1_calculator.cpp`

### Calculator

A full program that applies: I/O, conditionals, functions, loops, and operators together. Good reference for writing a complete standalone program in C++.

---

## Quick Reference Card

### Compilation

```bash
g++ filename.cpp -o output
./output
```

With C++17:
```bash
g++ -std=c++17 filename.cpp -o output
```

### Headers You'll Use in DSA

```cpp
#include <iostream>    // cin, cout
#include <vector>      // std::vector
#include <string>      // std::string
#include <algorithm>   // sort(), reverse(), min(), max()
#include <climits>     // INT_MAX, INT_MIN, LLONG_MAX
#include <cmath>       // sqrt(), pow(), abs()
#include <map>         // std::map, std::unordered_map
#include <set>         // std::set, std::unordered_set
#include <queue>       // std::queue, std::priority_queue
#include <stack>       // std::stack
```

### Things to Remember

- Integer overflow: use `long long` when values exceed ~2 × 10⁹
- `int / int` truncates — cast to `double` when needed
- Vectors are 0-indexed
- Always initialize pointers to `nullptr`
- Pass large containers by reference (`std::vector<int> &v`) to avoid copying
- `v.size()` returns an `unsigned` type — compare with care against signed ints

---

