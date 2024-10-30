cmake_minimum_required(VERSION 3.16)

project(Command LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Command SHARED

  command.cpp
  command.h
  receiver.h receiver.cpp
  invoker.h invoker.cpp
  concretecommand.h concretecommand.cpp
)

target_compile_definitions(Command PRIVATE COMMAND_LIBRARY)
