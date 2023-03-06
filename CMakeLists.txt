cmake_minimum_required(VERSION 3.24)
project(datastructure C)

set(CMAKE_C_STANDARD 11)

add_executable(datastructure linkedlist/main.c linkedlist/arrays.c)
