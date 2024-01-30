cmake_minimum_required(VERSION 3.22)

project(ConstMutableinClass  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES ConstMutableinClass.cpp ConstMutable.cpp)

add_executable(ConstMutableinClass ${SRC_FILES})

