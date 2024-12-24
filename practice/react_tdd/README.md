
# React TDD Example

This project demonstrates a Test-Driven Development (TDD) workflow for building a simple React application.

## Table of Contents

1. [Features](#features)
2. [Getting Started](#getting-started)
3. [Scripts](#scripts)
4. [Testing Workflow](#testing-workflow)
5. [Folder Structure](#folder-structure)



---

## Features

- **Component Testing**: Test React components for proper rendering and functionality.
- **React Testing Library**: Utilize `@testing-library/react` for DOM testing.
- **Jest Integration**: Write unit and integration tests using Jest.
- **Counter Example**: Simple Counter component implemented with TDD principles.

---

## Getting Started

### Prerequisites

Make sure you have the following installed on your machine:

- **Node.js** (>= 14.x)
- **pnpm** (preferred package manager) or npm

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/edaywalid/Testing101.git
   cd practice/react_tdd
   ```

2. Install dependencies:

   ```bash
   pnpm install
   ```

3. Run the application in development mode:

   ```bash
   pnpm start
   ```

---

## Scripts

The following scripts are available:

- **`pnpm start`**: Start the development server.
- **`pnpm test`**: Run tests with Jest.

---

## Testing Workflow

### Tools Used

- **Jest**: Test runner for unit and integration tests.
- **React Testing Library**: Utility for testing React components in a DOM-like environment.

### Writing a Test

1. Start by creating a test file in the `test` directory (e.g., `Counter.test.js`).
2. Write a failing test that describes the desired behavior.
3. Implement just enough functionality in the component to pass the test.
4. Refactor the code while ensuring all tests still pass.

Example Test (for Counter component):

```javascript
import React from "react";
import { render, screen, fireEvent } from "@testing-library/react";
import Counter from "../src/components/Counter";

describe("Counter Component", () => {
  test("renders Counter component", () => {
    render(<Counter />);
    expect(screen.getByText(/Counter:/i)).toBeInTheDocument();
  });

  test("increments count on button click", () => {
    render(<Counter />);
    const button = screen.getByText(/Increment/i);
    fireEvent.click(button);
    expect(screen.getByText(/Counter: 1/i)).toBeInTheDocument();
  });
});
```

---

## Folder Structure

```
├── src
│   ├── components
│   │   └── Counter.js 
├── test
│   └── Counter.test.js 
├── package.json
└── README.md
```

---


