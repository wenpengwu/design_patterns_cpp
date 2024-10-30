cmake_minimum_required(VERSION 3.16)

project(design_patterns LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(design_patterns main.cpp
    adaptee.h adaptee.cpp
    target.h target.cpp
    adapter.h adapter.cpp
)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/brige)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Builder)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Command)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Decorator)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Facade)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/FactoryMethod)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Flyweight)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Mediator)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Obeserver)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Proxy)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/SimpleFactory)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Singleton)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/State)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Strategy)

target_link_libraries(design_patterns
    brige Builder Command Decorator Facade FactoryMethod
    Flyweight Mediator Obeserver Proxy SimpleFactory Singleton
    State Strategy
)


add_subdirectory(brige)
add_subdirectory(Builder)
add_subdirectory(Command)
add_subdirectory(Decorator)
add_subdirectory(Facade)
add_subdirectory(FactoryMethod)
add_subdirectory(Flyweight)
add_subdirectory(Mediator)
add_subdirectory(Obeserver)
add_subdirectory(Proxy)
add_subdirectory(SimpleFactory)
add_subdirectory(Singleton)
add_subdirectory(State)
add_subdirectory(Strategy)


include(GNUInstallDirs)
install(TARGETS design_patterns
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
