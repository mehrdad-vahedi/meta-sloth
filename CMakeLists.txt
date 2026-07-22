cmake_minimum_required(VERSION 3.15)
project(meta_sloth VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/randomization/map.cpp
)

add_library(meta_sloth STATIC ${SOURCES})

target_include_directories(meta_sloth
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_executable(sandbox sandbox.cpp)
target_link_libraries(sandbox PRIVATE meta_sloth)