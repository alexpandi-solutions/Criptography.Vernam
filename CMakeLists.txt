cmake_minimum_required(VERSION 3.15)

project(Vernam VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_REQUIRED True)

include_directories(
	headers
	src
	files
)

add_executable(
	Vernam
	src/main.cpp
	src/Algorithm.cpp
	src/FileHandler.cpp
	headers/Algorithm.hpp
	headers/FileHandler.hpp
)
