import React from 'react';
import '@testing-library/jest-dom';
import { render, screen, fireEvent } from "@testing-library/react";
import Counter from "../src/components/Counter";

describe("Counter Component", () => {
  test("renders Counter component", () => {
    render(<Counter />);
    expect(screen.getByText(/Counter:/i)).toBeInTheDocument();
  });

  test("increments the counter", () => {
    render(<Counter />);
    const incrementButton = screen.getByText("Increment");
    fireEvent.click(incrementButton);
    expect(screen.getByText("Counter: 1")).toBeInTheDocument();
  });

  test("decrements the counter", () => {
    render(<Counter />);
    const decrementButton = screen.getByText("Decrement");
    fireEvent.click(decrementButton);
    expect(screen.getByText("Counter: -1")).toBeInTheDocument();
  });
});

