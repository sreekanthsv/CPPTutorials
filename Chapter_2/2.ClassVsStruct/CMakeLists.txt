cmake_minimum_required(VERSION 3.22)

project(Struct  CXX)
     
set (CMAKE_CXX_STANDARD 20)

set(SRC_FILES Struct.cpp )

add_executable(Struct ${SRC_FILES})


project(Class  CXX)


set(SRC_FILES Class.cpp )

add_executable(Class ${SRC_FILES})