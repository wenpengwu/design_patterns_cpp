cmake_minimum_required(VERSION 3.16)

project(FactoryMethod LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(FactoryMethod SHARED
    ft_product.h ft_product.cpp
  ft_factory.h ft_factory.cpp
  ft_concretefactory.h ft_concretefactory.cpp
  ft_concreteproduct.h ft_concreteproduct.cpp
)

target_compile_definitions(FactoryMethod PRIVATE FACTORYMETHOD_LIBRARY)
