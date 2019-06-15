cmake_minimum_required(VERSION 2.4)

INCLUDE_DIRECTORIES(../Game)

add_executable(lambda lambda.cpp)
target_link_libraries(lambda Game)