cmake_minimum_required(VERSION 2.6)
project(mser_picture)

include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/src")

link_directories("${PROJECT_SOURCE_DIR}/src")

add_executable(mser_picture	main.cpp
							src/Point.cpp
							src/Image.cpp)

target_link_libraries(mser_picture opencv_core opencv_highgui opencv_features2d opencv_imgproc)