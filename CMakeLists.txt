cmake_minimum_required(VERSION 3.28)
project(laptopHM)

set(CMAKE_CXX_STANDARD 17)

add_executable(laptopHM main.cpp
        HDD.h
        RAM.h
        CPU.h
        VGA.h
        laptop.h)
