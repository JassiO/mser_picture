cmake_minimum_required(VERSION 2.6)
project(mser_picture)

include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/include")

link_directories(./src)

add_executable(mser_picture	main.cpp)

target_link_libraries(mser_picture opencv_core)