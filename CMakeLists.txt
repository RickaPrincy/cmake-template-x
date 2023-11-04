cmake_minimum_required(VERSION 3.27)
project(myProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
configure_file(myProjectConfig.h.in myProjectConfig.h)

add_subdirectory(src)
add_subdirectory(tests)