cmake_minimum_required(VERSION 2.8)
project(Me2D)

find_library(sfml, sfml)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(include)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)
set(SOURCES "src/*.cpp")
file(GLOB SOURCES "src/*.cpp")

add_executable(Me2D ${SOURCES})

target_link_libraries(Me2D sfml-graphics sfml-window sfml-system sfml-network sfml-audio)
