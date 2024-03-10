cmake_minimum_required(VERSION 3.27)
project(films3_c C)

set(CMAKE_C_STANDARD 11)

add_executable(films3_c main.c
        list.h
        list.c)
