cmake_minimum_required(VERSION 3.16)

project(brige LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(brige SHARED
  abstraction.h abstraction.cpp
  implementor.h implementor.cpp
  concreteimplementora.h concreteimplementora.cpp
  concreteimplementorb.h concreteimplementorb.cpp
  refinedabstraction.h refinedabstraction.cpp
)

target_compile_definitions(brige PRIVATE BRIGE_LIBRARY)
