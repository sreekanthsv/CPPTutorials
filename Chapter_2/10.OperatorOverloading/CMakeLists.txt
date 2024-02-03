cmake_minimum_required(VERSION 3.22)

project(OperatorOverloading  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES OperatorOverloading.cpp )

add_executable(OperatorOverloading ${SRC_FILES})

