cmake_minimum_required(VERSION 3.5)

project(scultor-project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(scultor-project main.cpp)

install(TARGETS scultor-project
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
