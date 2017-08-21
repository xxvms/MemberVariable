cmake_minimum_required(VERSION 3.8)
project(MemberVariable)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Person.cpp Person.h Resource.cpp Resource.h)
add_executable(MemberVariable ${SOURCE_FILES})