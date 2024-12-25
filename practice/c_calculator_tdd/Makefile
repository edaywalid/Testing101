CC = gcc
CFLAGS = -Wall -Werror -g
TESTFLAGS= $(CFLAGS) -lcunit
TARGET = calculator
TEST_TARGET = calculator_test

SRC_DIR = src
TEST_DIR = test
SRC_FILES = $(SRC_DIR)/calculator.c $(SRC_DIR)/main.c
TEST_FILES = $(SRC_DIR)/calculator.c $(TEST_DIR)/calculator_test.c

all: $(TARGET) 

$(TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC_FILES)

test: $(TEST_FILES)
	$(CC) $(TESTFLAGS) -o $(TEST_TARGET) $(TEST_FILES) 
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)

.PHONY: all test clean

