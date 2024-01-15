cmake_minimum_required(VERSION 3.22)

project(HelloClass  CXX)
     
set (CMAKE_CXX_STANDARD 11)

# How to setup a include folder
include_directories( include/)

# How to setup a environment to build multiple cpp files
set(SRC_F source/HelloClass.cpp source/additional.cpp )
CMAKE_SOURCE_DIR()

add_executable(HelloClass ${SRC_F})

