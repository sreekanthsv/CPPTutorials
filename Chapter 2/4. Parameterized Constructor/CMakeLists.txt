cmake_minimum_required(VERSION 3.22)

project(parameterizedConstructor  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES ReceiveDataFromConsole.cpp MyString.cpp)

add_executable(parameterizedConstructor ${SRC_FILES})

