cmake_minimum_required(VERSION 3.25.0)

project(CTemplate VERSION 1.0.0)
configure_file(CTemplateConfig.h.in "${CMAKE_SOURCE_DIR}/include/CTemplate/CTemplateConfig.hpp")

add_subdirectory(src)