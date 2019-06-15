cmake_minimum_required(VERSION 2.4)

INCLUDE_DIRECTORIES(../Game)

add_executable(sharedPointer sharedPointer.cpp)
target_link_libraries(sharedPointer Game)