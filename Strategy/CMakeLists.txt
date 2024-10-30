cmake_minimum_required(VERSION 3.16)

project(Strategy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Strategy STATIC
  strategy.cpp
  strategy.h
  strategy_context.h strategy_context.cpp
  concretestrategya.h concretestrategya.cpp
  concretestrategyb.h concretestrategyb.cpp
)

target_compile_definitions(Strategy PRIVATE STRATEGY_LIBRARY)
