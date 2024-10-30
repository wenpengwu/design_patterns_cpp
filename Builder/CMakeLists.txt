cmake_minimum_required(VERSION 3.16)

project(Builder LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Builder STATIC
  product.h product.cpp
  builder.h builder.cpp
  concretebuilder.h concretebuilder.cpp
  director.h director.cpp
)

target_compile_definitions(Builder PRIVATE BUILDER_LIBRARY)
