cmake_minimum_required(VERSION 3.16)

project(SimpleFactory LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(SimpleFactory SHARED

  simplef_factory.cpp simplef_factory.h
  simplef_product.h
  simplef_concreteproducta.h simplef_concreteproducta.cpp
  simplef_concreteproductb.h simplef_concreteproductb.cpp
)

target_compile_definitions(SimpleFactory PRIVATE SIMPLEFACTORY_LIBRARY)
