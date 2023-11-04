cmake_minimum_required(VERSION 3.27)
project(myProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
configure_file("${PROJECT_NAME}Config.h.in" "${PROJECT_NAME}Config.hpp")

add_subdirectory(src)
add_subdirectory(tests)

install(FILES "build/${PROJECT_NAME}Config.hpp" DESTINATION "include/${PROJECT_NAME}")