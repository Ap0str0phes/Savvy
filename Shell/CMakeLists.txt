cmake_minimum_required(VERSION 3.28)

project(Shell)

add_executable(Shell main.cpp)

target_include_directories(Shell PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
