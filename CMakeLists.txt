cmake_minimum_required(VERSION 3.29)
project(P1_Labs C)

set(CMAKE_C_STANDARD 11)

include_directories(stdneb)

add_executable(P1_Labs
    L4/Zadatak1.c
    L4/zadatak2.c
    L5/Zadatak1.c
    L5/Zadatak2.c
    L5/Zadatak3.c
    L5/Zadatak4.c
    L6/Zadatak1.c
    L6/Zadatak2.c
    stdneb/stdneb.c
    stdneb/stdneb.h)

add_executable(Zadatak2 L6/Zadatak2.c)
add_executable(Zadatak1 L6/Zadatak1.c)