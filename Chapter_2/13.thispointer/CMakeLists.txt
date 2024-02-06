cmake_minimum_required(VERSION 3.22)

project(pointers  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES ConstructorDestruction.cpp DummyClass.cpp)

add_executable(pointers ${SRC_FILES})

