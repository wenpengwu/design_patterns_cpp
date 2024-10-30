cmake_minimum_required(VERSION 3.16)

project(Mediator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Mediator SHARED

  mediator.cpp
  mediator.h
  colleague.h colleague.cpp
  concretecolleaguea.h concretecolleaguea.cpp
  concretecolleagueb.h concretecolleagueb.cpp
  concretemediator.h concretemediator.cpp
)

target_compile_definitions(Mediator PRIVATE MEDIATOR_LIBRARY)
