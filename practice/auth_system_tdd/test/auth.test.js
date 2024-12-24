import request from "supertest";
import app from "../src/app.js";

describe("Auth API", () => {
  it("should register a new user", async () => {
    const res = await request(app).post("/auth/register").send({
      username: "testuser",
      password: "testpass",
    });

    expect(res.status).toBe(201);
    expect(res.body.message).toBe("User registered successfully");
  });

  it("should login an existing user", async () => {
    await request(app).post("/auth/register").send({
      username: "testuser",
      password: "testpass",
    });

    const res = await request(app).post("/auth/login").send({
      username: "testuser",
      password: "testpass",
    });

    expect(res.status).toBe(200);
    expect(res.body.token).toBeDefined();
  });

  it("should return an error for invalid credentials", async () => {
    const res = await request(app).post("/auth/login").send({
      username: "testuser",
      password: "wrongpass",
    });

    expect(res.status).toBe(401);
    expect(res.body.error).toBe("Invalid credentials");
  });
});

