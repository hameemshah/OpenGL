#!/bin/bash

# Compile the C++ code
g++ -o "$1"

# Check if compilation was successful
if [ $? -eq 0 ]; then
    # Run the executable
    ./a

    # Delete the executable
    rm a
else
    echo "Compilation failed. Please check your code."
