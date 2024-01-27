cmake_minimum_required(VERSION 3.22)

project(MultipleInheritance  CXX)
     
set (CMAKE_CXX_STANDARD 17)

set(SRC_FILES Refill.cpp RedRefill.cpp BlueRefill.cpp Pen.cpp)
add_executable(MultipleInheritance ${SRC_FILES})


project(VirtualInheritance  CXX)
     
set(SRC_FILES2 Refill.cpp RedRefill.cpp BlueRefill.cpp MultiColourPen.cpp)
add_executable(VirtualInheritance ${SRC_FILES2})
