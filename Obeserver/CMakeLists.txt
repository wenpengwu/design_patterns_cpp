cmake_minimum_required(VERSION 3.16)

project(Obeserver LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Obeserver SHARED

  obeserver.cpp
  obeserver.h
  subject.h subject.cpp
  concreteobeserver.h concreteobeserver.cpp
  concretesubject.h concretesubject.cpp
)

target_compile_definitions(Obeserver PRIVATE OBESERVER_LIBRARY)
