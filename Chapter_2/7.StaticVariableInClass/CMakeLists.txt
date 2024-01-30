cmake_minimum_required(VERSION 3.22)

project(StaticVariableInClass  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES StaticVariable.cpp StaticVariableInClass.cpp)

add_executable(StaticVariableInClass ${SRC_FILES})

