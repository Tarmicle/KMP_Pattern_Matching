cmake_minimum_required(VERSION 3.8)
project(KMP_Pattern_Matching)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c kmpsearch.c kmpsearch.h)
add_executable(KMP_Pattern_Matching ${SOURCE_FILES})