cmake_minimum_required(VERSION 3.5)
project(Test LANGUAGES C)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_subdirectory(C)

add_executable(Testfile test.c)
target_link_libraries(Testfile MathC)