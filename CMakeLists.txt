cmake_minimum_required(VERSION 3.10)

# Project name and language
project(D1 C)

# include header directory
include_directories(Inc)

# source files
set(SOURCES Src/main.c Src/add.c Src/mul.c)

# create the executable
add_executable(calc ${SOURCES})

