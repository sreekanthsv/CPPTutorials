cmake_minimum_required(VERSION 3.22)

project(TryckyQuestions  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES DerivedClass.cpp BaseClass.cpp TrickyQuestions.cpp)
add_executable(TryckyQuestions ${SRC_FILES})
