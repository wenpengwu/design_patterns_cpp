cmake_minimum_required(VERSION 3.16)

project(Singleton LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Singleton STATIC
  singleton.cpp
  singleton.h
)

target_compile_definitions(Singleton PRIVATE SINGLETON_LIBRARY)
