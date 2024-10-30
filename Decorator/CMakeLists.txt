cmake_minimum_required(VERSION 3.16)

project(Decorator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Decorator SHARED

  decorator.cpp
  decorator.h
  component.h component.cpp
  concretecomponent.h concretecomponent.cpp
  concretedecoratora.h concretedecoratora.cpp
  concretedecoratorb.h concretedecoratorb.cpp
)

target_compile_definitions(Decorator PRIVATE DECORATOR_LIBRARY)
