cmake_minimum_required(VERSION 3.22)

project(HelloClass  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES HelloClass.cpp )

add_executable(HelloClass ${SRC_FILES})

