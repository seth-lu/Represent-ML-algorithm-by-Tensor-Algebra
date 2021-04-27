# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 2.6)

# Set the project name
project (MLINLA LANGUAGE CXX)

# set configurations
set(CMAKE_C_COMPILER $(C_COMPILER))
set(CMAKE_CXX_COMPILER $(CXX_COMPILER))
set(CMAKE_CXX_FLAG "--std=c++11 -O0 -g") #debug

# add subdirectory
add_subdirectory(ml_tf)
add_subdirectory(ml_cafe)
add_subdirectory(itensor)
add_subdirectory(benchmarks)
