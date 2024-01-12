cmake_minimum_required(VERSION 3.28.1)

project(cses CXX)
find_package(folly REQUIRED)
find_package(gflags REQUIRED)
find_package(GTest REQUIRED)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()
