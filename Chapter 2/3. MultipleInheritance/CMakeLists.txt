cmake_minimum_required(VERSION 3.22)

project(MultipleInheritance  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES Line.cpp RedLine.cpp BlueLine.cpp DerivingAClass.cpp)
add_executable(MultipleInheritance ${SRC_FILES})
