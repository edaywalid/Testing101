# Auth System TDD Example

This project demonstrates a Test-Driven Development (TDD) workflow for building an authentication system using Node.js and Express.

## Table of Contents

1. [Features](#features)
2. [Getting Started](#getting-started)
3. [Scripts](#scripts)
4. [Testing Workflow](#testing-workflow)
5. [Folder Structure](#folder-structure)

---

## Features

- **Authentication**: Implements user registration, login, and JWT-based authentication.
- **Test Coverage**: Tests routes, controllers, and utility functions with Jest and Supertest.
- **Environment Variables**: Uses dotenv for secure environment variable management.
- **Modular Structure**: Organized into controllers, models, routes, and utility files.

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
   cd auth_system_tdd

2. Install dependencies :

```bash
  pnpm install
```
3. Start the application: 

```bash 
  pnpm start 4000 # you change the port number 
```

4. Run the tests:

```bash
  pnpm test
```

## Scripts

The following scripts are available:

- **`pnpm start`**: Start the development server.
- **`pnpm test`**: Run tests with Jest and Supertest.
- **`pnpm dev`** : Start the application with Nodemon for live reloading during development.


## Testing Workflow

### Tools Used

- **Jest**:Test runner for unit and integration tests.
- **Supertest**: HTTP assertions for testing routes.

### Writing a Test

1. Start by creating a test file in the `test` directory (e.g., `auth.test.js`).
2. Write a failing test that describes the desired behavior.
3. Implement just enough functionality in the component to pass the test.
4. Refactor the code while ensuring all tests still pass.

Example Test (for Counter component):

```javascript

import request from "supertest";
import app from "../src/app";

describe("Auth Routes", () => {
  test("POST /api/auth/login should return a token on valid credentials", async () => {
    const res = await request(app)
      .post("/api/auth/login")
      .send({ email: "user@example.com", password: "password123" });
    expect(res.status).toBe(200);
    expect(res.body).toHaveProperty("token");
  });
});

```

---

## Folder Structure

```
auth_system_tdd
├── jest.config.js          
├── src
│   ├── app.js              
│   ├── controllers
│   │   └── authController.js 
│   ├── models
│   │   └── userModel.js    
│   ├── routes
│   │   └── auth.js         
│   └── utils
│       └── jwt.js          
├── test
│   └── auth.test.js        
├── package.json
└── README.md
```

---

