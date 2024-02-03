cmake_minimum_required(VERSION 3.27)
project(manydice_c C)

set(CMAKE_C_STANDARD 11)

add_executable(manydice_c main.c
        diceroll.c
        diceroll.h)
