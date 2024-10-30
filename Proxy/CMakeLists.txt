cmake_minimum_required(VERSION 3.16)

project(Proxy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Proxy SHARED

  proxy.cpp
  proxy.h
  proxy_subject.h proxy_subject.cpp
  realsubject.h realsubject.cpp
)

target_compile_definitions(Proxy PRIVATE PROXY_LIBRARY)
