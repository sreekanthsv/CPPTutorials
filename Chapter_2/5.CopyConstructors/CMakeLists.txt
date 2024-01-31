cmake_minimum_required(VERSION 3.22)

project(CopyConstructor  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES CopyConstructor.cpp )

add_executable(CopyConstructor ${SRC_FILES})

