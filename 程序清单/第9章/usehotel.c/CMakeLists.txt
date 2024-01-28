cmake_minimum_required(VERSION 3.27)
project(usehotel_c C)

set(CMAKE_C_STANDARD 11)

add_executable(usehotel_c main.c
        hotel.h
        hotel.c)
