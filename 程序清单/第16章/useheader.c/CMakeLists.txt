cmake_minimum_required(VERSION 3.27)
project(useheader_c C)

set(CMAKE_C_STANDARD 11)

add_executable(useheader_c main.c
        names_st.h
        name_st.c)
