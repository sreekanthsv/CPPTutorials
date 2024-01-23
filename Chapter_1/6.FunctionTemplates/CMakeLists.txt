cmake_minimum_required(VERSION 3.22)

project(FunctionTemplates  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES FunctionTemplates.cpp )

add_executable(FunctionTemplates ${SRC_FILES})

