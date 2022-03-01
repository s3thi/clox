cmake_minimum_required(VERSION 3.21)
project(clox C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(
        clox
        src/chunk.c
        src/debug.c
        src/main.c
        src/memory.c
        src/value.c
        src/vm.c
)
