cmake_minimum_required(VERSION 3.22)

project(RTTI  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES DerivedClass.cpp BaseClass.cpp RTTI1.cpp)
add_executable(RTTI ${SRC_FILES})
