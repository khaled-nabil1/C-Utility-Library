
# C Utility Library

A collection of useful C functions for operations on numbers, strings, arrays, matrices, and encryption ciphers. This library is designed to simplify common programming tasks and provide robust solutions for computational problems.
You can find a detailed report for each functions in the functions directory.
## Table of Contents
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)

## Features
- Perform numerical computations like prime checks and GCD/LCM calculations.
- Handle string manipulations, including trimming, reversing, and conversions.(working on it)
- Work with arrays for sorting, searching, and transformations.
- Perform matrix operations like addition, multiplication, and transposition.(working on it)
- Use encryption ciphers like Caesar cipher, Vigenère cipher, and basic XOR encryption.

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/khaled-nabil1/C-Utility-Library.git
   ```
2. Navigate to the project directory:
   ```bash
   cd C-Utility-Library
   ```
3. Include the library in your C project by adding the `mylib.h` and `mylib.c` files to your project.

## Usage
Include the library in your code:
```c
#include "mylib.h"

int main() {
    int gcd = gcd(48, 18);
    printf("GCD: %d\n", gcd);

    caesarCipher("hello", 3);
    printf("Encrypted: %s\n", encrypted);

    return 0;
}
```

Compile your program with the library:
```bash
gcc main.c mylib.c -o program
```

## Contributing
Contributions are welcome! Please follow these steps:
1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature-branch
   ```
3. Make your changes and commit:
   ```bash
   git commit -m "Add feature"
   ```
4. Push your branch and open a pull request:
   ```bash
   git push origin feature-branch
   ```

