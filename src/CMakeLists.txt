cmake_minimum_required (VERSION 2.6)

project(TravisTesting)
set (CMAKE_CXX_STANDARD 11)
add_executable(TravisTesting main.cpp)

add_executable(ArithTest test.cpp)
target_link_libraries(ArithTest gtest)

enable_testing()
add_test(NAME ArithTest COMMAND ArithTest)
