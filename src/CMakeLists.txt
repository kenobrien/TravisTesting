cmake_minimum_required (VERSION 2.6)

project(TravisTesting)
set (CMAKE_CXX_STANDARD 11)
add_executable(TravisTesting main.cpp)

find_package(Threads REQUIRED)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(ArithTest test.cpp)
target_link_libraries(ArithTest ${GTEST_LIBRARIES})

enable_testing()
add_test(NAME ArithTest COMMAND ArithTest)
