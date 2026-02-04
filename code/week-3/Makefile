CC = gcc
CFLAGS = -Wall -Wextra -g -I.

BUILD_DIR = build
VEC_DIR = cpp-vector

SRCS = main.c $(VEC_DIR)/vector.c
OBJS = $(BUILD_DIR)/main.o $(BUILD_DIR)/vector.o
TARGET = $(BUILD_DIR)/my_program

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(OBJS) -o $(TARGET)

$(BUILD_DIR)/main.o: main.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c main.c -o $@

$(BUILD_DIR)/vector.o: $(VEC_DIR)/vector.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $(VEC_DIR)/vector.c -o $@

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean