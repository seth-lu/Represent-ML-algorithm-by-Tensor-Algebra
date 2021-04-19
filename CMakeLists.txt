# This is a example.

# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 2.6)

# Set the project name
project (example)

# Add an executable
add_executable(example test.cpp)
# Or add_executable(${PROJECT_NAME} test.cpp)
