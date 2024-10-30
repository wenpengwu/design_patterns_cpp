cmake_minimum_required(VERSION 3.16)

project(Flyweight LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Flyweight SHARED

  flyweight.cpp
  flyweight.h
  concreteflyweight.h concreteflyweight.cpp
  flyweightfactory.h flyweightfactory.cpp
  unsharedconcreteflyweight.h unsharedconcreteflyweight.cpp
)

target_compile_definitions(Flyweight PRIVATE FLYWEIGHT_LIBRARY)
