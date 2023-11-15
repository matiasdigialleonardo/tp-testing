cmake_minimum_required(VERSION 3.10)

project(testExamples CXX)
set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_subdirectory(drone_libraries)
add_subdirectory(main)
#add_subdirectory(foobar-test) link

message("Testing enabled")
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/main-test/Test.cpp ${PROJECT_SOURCE_DIR}/library/*.cpp )

add_subdirectory(ext/googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/libfolder ${gtest_SOURCE_DIR})
add_executable(runUnitTests ${TEST_SRC_FILES})
target_link_libraries(runUnitTests gtest gtest_main drone_libraries)
add_test(UnitTests runUnitTests)