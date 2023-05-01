cmake_minimum_required(VERSION 3.10)
include(CMakePrintHelpers)

project(DesignPatterns)

set(EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(solid)
add_subdirectory(builder)
add_subdirectory(strategy)
