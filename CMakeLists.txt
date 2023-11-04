cmake_minimum_required(VERSION 3.27)

project(Sdlk VERSION 1.0)
configure_file(SdlkConfig.h.in SdlkConfig.h)
add_library(${PROJECT_NAME} src/Sdlk.cpp)

include(CPack)