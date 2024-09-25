#!/bin/bash

# Check if the source file is provided
if [ -z "$1" ]; then
    echo "Usage: ./run.sh <source-file.cpp>"
    exit 1
fi

# Extract the base name of the file (without extension)
executable="${1%.*}"

# Compile the C++ code
g++ "$1" -o "$executable" -lGL -lGLU -lglut

# Check if compilation was successful
if [ $? -eq 0 ]; then
    # Run the executable
    ./"$executable"

    # Delete the executable after running
    rm "$executable"
else
    echo "Compilation failed. Please check your code."
fi
