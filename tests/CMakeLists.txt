set(BINARY ${CMAKE_PROJECT_NAME}_test)
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)
add_executable(${BINARY} ${TEST_SOURCES})

target_include_directories(${BINARY} 
    PUBLIC ${CMAKE_SOURCE_DIR}/include
)

target_link_directories( ${BINARY} 
    PUBLIC ${CMAKE_SOURCE_DIR}/src 
)

target_link_libraries(${BINARY} 
    PUBLIC ${CMAKE_PROJECT_NAME}
)