cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(mul)

find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

add_executable(mul mul.cpp)
target_link_libraries(mul "${TORCH_LIBRARIES}")
set_property(TARGET mul PROPERTY CXX_STANDARD 14)
