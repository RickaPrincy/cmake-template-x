set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.hpp *.h *.cpp)
include_directories(${CMAKE_SOURCE_DIR}/external/TColor/include)
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(ctemplate ${SOURCES})

install(TARGETS ctemplate DESTINATION bin)