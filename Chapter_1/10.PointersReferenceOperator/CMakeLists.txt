cmake_minimum_required(VERSION 3.22)

project(PointersReferenceOperator  CXX)
     
set (CMAKE_CXX_STANDARD 20)

set(SRC_FILES PointersReferenceOperator.cpp )

add_executable(PointersReferenceOperator ${SRC_FILES})

