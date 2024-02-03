cmake_minimum_required(VERSION 3.27)
project(r_driver1_c C)

set(CMAKE_C_STANDARD 11)

add_executable(r_driver1_c main.c
        s_and_r.c)
