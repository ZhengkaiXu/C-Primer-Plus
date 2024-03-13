cmake_minimum_required(VERSION 3.27)
project(tree_c C)

set(CMAKE_C_STANDARD 11)

add_executable(tree_c main.c
        tree.h
        temp.c)
