cmake_minimum_required(VERSION 3.22)

project(Inheritance  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES DerivedClass.cpp BaseClass.cpp DerivingAClass.cpp)
add_executable(Inheritance ${SRC_FILES})
