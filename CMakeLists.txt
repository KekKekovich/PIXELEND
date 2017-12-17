cmake_minimum_required(VERSION 3.8)
project(PIXELEND)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Pixel.cpp Pixel.h derived.cpp derived.h)
add_executable(PIXELEND ${SOURCE_FILES})