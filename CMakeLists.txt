cmake_minimum_required(VERSION 3.21)
project(clox C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(
        clox
        src/chunk.c
        include/chunk.h
        src/debug.c
        include/debug.h
        src/main.c
        src/memory.c
        include/memory.h
        src/value.c
        include/value.h
        src/vm.c
        include/vm.h
        src/compiler.c
        include/compiler.h
        src/scanner.c
        include/scanner.h
)
