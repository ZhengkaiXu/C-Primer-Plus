cmake_minimum_required(VERSION 3.27)
project(use_q_c C)

set(CMAKE_C_STANDARD 11)

add_executable(use_q_c main.c
        queue.h)
