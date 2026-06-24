## TESTS AND LOOPS

### Input and Output

* `cout` is used for output.
* `cin` is used for input.
* `<<` sends data to the output stream.
* `>>` reads data from the input stream.
* `\n` represents a new line.

```cpp
cout << "Hello\n";
cin >> value;
```

---

### `if` Statement

* Used for decision making.
* Executes code only if the condition is true.

```cpp
if (answer == 'y')
    return true;
```

---

### `switch` Statement

* Tests a value against multiple constants.
* `case` values must be unique.
* `default` executes when no case matches.
* If `default` is omitted and no case matches, nothing happens.

```cpp
switch(answer)
{
    case 'y':
        return true;
    case 'n':
        return false;
    default:
        return false;
}
```

---

## Loops

* Used to repeat a block of code.
* Useful when user input may need multiple attempts.

### `while` Loop

* Repeats while the condition remains true.
* Stops when the condition becomes false.

```cpp
while (tries < 4)
{
    // code
}
```

---

## Increment Operator

* `++variable` increases the value by 1.

```cpp
++tries;
```

---

## Key Idea

* `if` -> choose between two possibilities.
* `switch` -> choose between many possibilities.
* `while` -> repeat until a condition becomes false.
