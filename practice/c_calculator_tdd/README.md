
# C Calculator TDD Example

This project demonstrates a Test-Driven Development (TDD) workflow for building a simple calculator application in C.

## Table of Contents

1. [Features](#features)
2. [Getting Started](#getting-started)
3. [Scripts](#scripts)
4. [Testing Workflow](#testing-workflow)
5. [Folder Structure](#folder-structure)

---

## Features

- **Calculator Functionality**: Implement basic calculator operations (addition, subtraction, multiplication, division) with TDD.
- **Unit Testing**: Write unit tests for individual calculator functions.
- **CUnit**: Use CUnit for testing functions.
- **Modular Design**: Split the application into source and header files.

---

## Getting Started

### Prerequisites

Make sure you have the following installed on your machine:

- **GCC** (GNU Compiler Collection)
- **CUnit** (for testing)

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/edaywalid/Testing101.git
   cd Testing101/c-calculator-tdd
   ```

2. Install dependencies (CUnit):

   ```bash
   yay -S cunit 
   ```

3. Compile the project:

   ```bash
   make
   ```

4. Run the tests:

   ```bash
   make test
   ```

---

## Scripts

The following scripts are available:

- **`make`**: Compiles the C project and generates the executable.
- **`make test`**: Runs unit tests with CUnit.

---

## Testing Workflow

### Tools Used

- **CUnit**: A C unit testing framework used for testing individual functions.
- **GCC**: The compiler for compiling the C application.

### Writing a Test

1. Start by creating a test file in the `test` directory (e.g., `calculator_test.c`).
2. Write a failing test that describes the desired behavior of the calculator function.
3. Implement just enough functionality in the source files to pass the test.
4. Refactor the code while ensuring all tests still pass.

Example Test (for addition function):

```c
#include <CUnit/Basic.h>
#include "calculator.h"

void test_addition(void) {
    CU_ASSERT_EQUAL(add(2, 3), 5);
    CU_ASSERT_EQUAL(add(-2, 3), 1);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("Calculator Tests", 0, 0);
    CU_add_test(suite, "Addition Test", test_addition);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return 0;
}
```

---

## Folder Structure

```
├── src
│   ├── calculator.c     
│   ├── calculator.h     
│   └── main.c           
├── test
│   └── calculator_test.c 
├── Makefile
└── README.md
```

---

