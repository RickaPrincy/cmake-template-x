cmake_minimum_required(VERSION 3.27)
project(example VERSION 1.0)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} myProject)