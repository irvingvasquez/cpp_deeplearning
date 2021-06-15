cmake_minimum_required(VERSION 2.6)
project(cpp_deeplearning)

add_subdirectory(src/01_introduccion/)

add_executable(cpp_deeplearning main.cpp)

install(TARGETS cpp_deeplearning RUNTIME DESTINATION bin)
