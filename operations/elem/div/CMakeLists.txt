cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(div)

find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

div_executable(div div.cpp)
target_link_libraries(div "${TORCH_LIBRARIES}")
set_property(TARGET div PROPERTY CXX_STANDARD 14)
