cmake_minimum_required(VERSION 3.16)

project(State LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(State STATIC
  state.cpp
  state.h
  context.h context.cpp
  concretestatea.h concretestatea.cpp
  concretestateb.h concretestateb.cpp
)

target_compile_definitions(State PRIVATE STATE_LIBRARY)
