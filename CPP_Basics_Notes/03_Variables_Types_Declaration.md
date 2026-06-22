## VARIABLE TYPES AND DECLARATIONS
* Every variable stores data of a specific type
* **Declaration:** introduces a name and specifies its type. Eg: int age;
----------------------------------------
* **Definitions:**

1. Type -> set of values and operations.(int will have values like digits) 
2. Object -> memory holding value.
3. Value -> bits interpreted according to a type.
4. Variable -> A named object.


------------------------------------------
* **Fundamental Types:**
bool:true/false, char:character, int, double
* **sizeof operator:** Returns size of a type in bytes Eg: sizeof(int)
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
