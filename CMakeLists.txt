cmake_minimum_required(VERSION 3.28)

project(cses CXX)
find_package(GTest REQUIRED)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_SCAN_FOR_MODULES OFF)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Data SHARED tests/WeirdAlgorithmData.cpp)

add_executable(WeirdAlgorithmTest src/WeirdAlgorithm.cpp
                                  tests/WeirdAlgorithmTest.cpp)
target_link_libraries(
  WeirdAlgorithmTest
  PRIVATE Data
  PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(WeirdAlgorithmTest)
enable_testing()
