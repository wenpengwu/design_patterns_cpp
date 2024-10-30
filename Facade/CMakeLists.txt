cmake_minimum_required(VERSION 3.16)

project(Facade LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Facade STATIC
  facade.cpp
  facade.h

  systema.h systema.cpp
)

target_compile_definitions(Facade PRIVATE FACADE_LIBRARY)
