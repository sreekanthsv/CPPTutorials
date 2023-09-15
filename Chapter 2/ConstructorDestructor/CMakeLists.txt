cmake_minimum_required(VERSION 3.22)

project(ConstructorDestructor  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES ConstructorDestruction.cpp DummyClass.cpp)

add_executable(ConstructorDestructor ${SRC_FILES})

