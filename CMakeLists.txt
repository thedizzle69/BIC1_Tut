cmake_minimum_required(VERSION 3.26)
project(Clion_Test C)

set(CMAKE_C_STANDARD 99)

add_executable(Clion_Test main.c
        mainmenu.h
        mainmenu.c)
