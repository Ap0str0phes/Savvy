cmake_minimum_required(VERSION 3.28)

project(SimpleList)

add_executable(SimpleList main.cpp)

target_include_directories(SimpleList PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
