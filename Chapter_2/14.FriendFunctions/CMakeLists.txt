cmake_minimum_required(VERSION 3.22)

project(FriendFunctions  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES FriendFunctions.cpp )

add_executable(FriendFunctions ${SRC_FILES})

