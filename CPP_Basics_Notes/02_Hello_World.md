## HELLO WORLD 
* Every C++ program must have exactly one main() function.
* Execution starts from  main().
* Minimal program : int main(){}
* **{} curly braces:**  Define the body of function.
* **// comment:** They are ignored by the compiler and used for human understanding.
* **Output in C++:** cout is used for printing output.
* **main() return type:** int returns status to system ( 0 = success | non-zero  = failure)
* #include <iostream>: Include input/output library for cout.
* **<< operator:** sends data to output stream for cout.
* \n: New line character.
* **string literal(""):** Text inside "" is printed as output.
* **std:: :** Indicates standard library namespace.
* void function is the function that returns nothing.
  
### Hello World Program

```cpp
#include <iostream>
using namespace std;
int main() {
    cout << "Hello World C++" << endl;
    return 0;
}
```

### Explanation

This program includes the iostream library, prints "Hello World" to the console using cout, and returns 0 to indicate successful execution.

### Output:

<img width="402" height="40" alt="image" src="https://github.com/user-attachments/assets/47116c68-06b4-4142-a307-552b88f7213b" />

