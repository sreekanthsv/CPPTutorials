cmake_minimum_required(VERSION 3.22)

project(DerivedDatatypes  CXX)
     
set (CMAKE_CXX_STANDARD 20)

set(SRC_FILES DerivedDatatypes.cpp )

add_executable(DerivedDatatypes ${SRC_FILES})

