BUILD_DIR = build
SRC_DIR = src
runBash = bash scripts/buildDir.sh
CC = gcc
CFLAGS = -Wall
COMPILABLES = $(SRC_DIR)/main.c $(BUILD_DIR)/student.o $(BUILD_DIR)/course.o

all: $(BUILD_DIR)/main

$(BUILD_DIR)/student.o: $(SRC_DIR)/student.c
    $(runBash) $(BUILD_DIR)
    $(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/course.o: $(SRC_DIR)/course.c
    $(runBash) $(BUILD_DIR)
    $(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/documentation/docs/docsFile.txt:
    $(runBash) $(BUILD_DIR)/documentation
    $(runBash) $(BUILD_DIR)/documentation/docs
    touch $@
    echo "Hello World" > $@

$(BUILD_DIR)/main: $(COMPILABLES) $(BUILD_DIR)/documentation/docs/docsFile.txt docs
    $(runBash) $(BUILD_DIR)
    $(CC) $(CFLAGS) -o $@ $(COMPILABLES)

Doxyfile: 
     doxygen -g

docs: Doxyfile
    doxygen Doxyfile
    
clean:
    rm -rf $(BUILD_DIR)
#!/bin/bash
