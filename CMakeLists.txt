cmake_minimum_required(VERSION 3.10.2)
project(MyProject VERSION 1.0.0 LANGUAGES C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(study/src)
add_subdirectory(study)
