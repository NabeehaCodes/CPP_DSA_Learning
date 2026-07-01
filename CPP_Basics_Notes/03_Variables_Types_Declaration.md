## VARIABLE TYPES AND DECLARATIONS
* Every variable stores data of a specific type
* **Declaration:** introduces a name and specifies its type. Eg: int age;
----------------------------------------
### **Definitions:**

1. Type -> set of values and operations.(int will have values like digits) 
2. Object -> memory holding value.
3. Value -> bits interpreted according to a type.
4. Variable -> A named object. Its a type of container for certain type of data .


------------------------------------------
* **Fundamental Types:**
bool:true/false, char:character, int, double
* **sizeof operator:** Returns size of a type in bytes Eg: sizeof(int)
```cpp
sizeof(int) //4B
sizeof(bool) //1B
sizeof(char) //1B
sizeof(float) //4B
sizeof(double) //8B (to store more numbers)
```
*  Arithmetic operators: + - / %
*  Comparison Operators: == != < > <= >=
*  Assignment (=) vs Equality(==)
*  **Initialization:**
```cpp
int x=5;
int y{5}; //Prefer {} initialization because  it prevents narrowing
```
*  **Narrowing Conversion:**
```cpp
int x=7.2; // becomes 7
int y{7.2}; //error 
char ch{300}; // error: value cannot be represented safely in char because the range of char can vary by implementation.
```
* *auto:* Compiler deduce type automatically
```cpp
auto d = 3.5; // double
auto x = 5;   // int
```
* Compound Operators:
```cpp
x += 5;   // x = x + 5
x -= 2;   // x = x - 2
x *= 3;   // x = x * 3
x /= 2;   // x = x / 2
x %= 2;   // x = x % 2
++x; // increment
--x; // decrement
```
* User defined library can also be initialized with {}
```cpp
complex<double> z = 1;
complex<double> z2{d1, d2};
```
### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int age{20};
    double gpa{3.5};
    bool passed{true};

    cout << age << endl;
}
```
```text
20
```

## CONSTANTS IN C++

### `const`

* Used when a value should not be changed after initialization.
* The compiler prevents accidental modification.
* Mainly used for safety and function interfaces so data can be passed to the function without fear of getting modified.

```cpp
const int d = 17;
```

### `constexpr`

* Used when a value must be known at compile time.
* The compiler calculates it before the program runs.
* Useful for performance and true constants.

```cpp
constexpr int x = 10;
```

## Difference Between `const` and `constexpr`

| const                       | constexpr                         |
| --------------------------- | --------------------------------- |
| Cannot be modified          | Cannot be modified                |
| May be evaluated at runtime | Must be evaluated at compile time |
| Used for read-only values   | Used for compile-time constants   |

* Examples:

```cpp
const int d = 7;
int var = 7;

constexpr double m1 = 1.4 * square(d); // OK
constexpr double m2 = 1.4 * square(var); // Error
const double m3 = 1.4 * square(var);     // OK
```
### **Why is `max2` an error?**

`constexpr` requires all values to be known during compilation.

`var` is a normal variable, so its value is not considered a compile-time constant.

* `constexpr` Functions

A function can be evaluated at compile time if it is declared with `constexpr`.

```cpp
constexpr double square(double x)
{
    return x * x;
}
```

### Important Point

A `constexpr` function can still be called with normal variables.

```cpp
int a = 5;
double b = square(a);   // Valid
```
The function is still `constexpr`, but the result is computed at runtime because `a` is not a compile-time constant.

### Runtime vs Compile-Time

```cpp
vector<double> v {1.6, 3.9, 4.5};

const double s1 = sum(v);      // OK
constexpr double s2 = sum(v);  // Error
```
### Why?

`v` is created while the program runs.

Therefore:

* `sum(v)` can only be calculated at runtime.
* `const` accepts runtime values.
* `constexpr` requires compile-time values.

### When Compile-Time Constants Are Required

Some language features require `constexpr` values:

* Array sizes
* `case` labels in switch statements
* Certain template arguments
* Variables declared as `constexpr`

### Quick Memory Trick

```text
const     = Read-only value
constexpr = Read-only + known at compile time
```
## 
