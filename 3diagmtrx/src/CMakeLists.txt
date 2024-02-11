set(HEADERS
    3/3diagmtrx.h
)

set(SOURCES
    3/3diagmtrx.cpp
)

add_library(3 ${HEADERS} ${SOURCES})

target_include_directories(3PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
