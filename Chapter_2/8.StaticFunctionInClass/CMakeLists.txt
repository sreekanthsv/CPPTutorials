cmake_minimum_required(VERSION 3.22)

project(StaticFunctionInClass  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES StaticFunction.cpp StaticFunctionInClass.cpp)

add_executable(StaticFunctionInClass ${SRC_FILES})

