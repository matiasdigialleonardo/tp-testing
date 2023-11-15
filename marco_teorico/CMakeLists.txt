cmake_minimum_required(VERSION 3.10)

project(example LANGUAGES CXX)

add_executable(main)
target_sources(main PRIVATE "main.cpp")
target_include_directories(main PRIVATE "${PROJECT_SOURCE_DIR}")
add_subdirectory("src")
install(TARGETS main)
