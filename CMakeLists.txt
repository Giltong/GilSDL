cmake_minimum_required(VERSION 3.2)
project(GilSDL)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2)

set(SDL2_PATH "C:\\libs\\SDL2-2.0.22\\x86_64-w64-mingw32")
find_package(SDL2 REQUIRED)

add_executable(GilSDL main.cpp)
target_link_libraries(${PROJECT_NAME} mingw32 SDL2::Main)

