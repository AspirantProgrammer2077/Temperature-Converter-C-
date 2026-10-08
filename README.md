# Temperature Converter (C++)

A simple console program that converts temperatures between **Celsius**, **Kelvin**, and **Fahrenheit**. Built with C++ in Embarcadero Dev-C++.

## Features

- Six conversions in one menu-driven program
- Accepts decimal values (uses `double`)
- Loops so you can convert again without restarting
- Clears the screen between conversions

## Conversions

| # | Conversion | Formula |
|---|------------|---------|
| 1 | Celsius to Kelvin | K = C + 273.15 |
| 2 | Kelvin to Celsius | C = K - 273.15 |
| 3 | Celsius to Fahrenheit | F = C × 1.8 + 32 |
| 4 | Fahrenheit to Celsius | C = (F - 32) / 1.8 |
| 5 | Fahrenheit to Kelvin | K = (F - 32) / 1.8 + 273.15 |
| 6 | Kelvin to Fahrenheit | F = (K - 273.15) × 1.8 + 32 |

## How to Use

1. Run the program.
2. Pick a conversion by typing a number from 1 to 6.
3. Enter the temperature you want to convert.
4. The result is displayed.
5. Type `Y` to convert again or `N` to exit.

### Example

```
Which temperature converter would you like to use? 1
Enter the sample Celsius number to convert it to Kelvin: 100
The conversion of Celsius to Kelvin is 373.15
Do you want to continue [Y/N?] N
```

## Requirements

- Windows (the program uses `conio.h` and `system("cls")`)
- Dev-C++ or any MinGW-based C++ compiler

## Build and Run

**Dev-C++:** open `Temperature_Converter.dev`, then press **F11** (Compile & Run).

**Command line (MinGW):**

```bash
g++ main.cpp -o main
./main
```

## Concepts Practiced

- `switch` statements
- `do-while` loops
- User input and output with `std::cin` / `std::cout`
- Operator precedence in formulas

## Future Improvements

- Input validation for invalid menu choices
- Reject temperatures below absolute zero
- Make it cross-platform (remove `conio.h` and `system("cls")`)

## Author

Dominic Andrei Pantoliaga ([@AspirantProgrammer2077](https://github.com/AspirantProgrammer2077))
