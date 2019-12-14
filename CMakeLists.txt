cmake_minimum_required(VERSION 3.10)
project(CppDemo4)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

include(cmake/common.cmake)

message("--CMAKE_CXX_STANDARD--> ${CMAKE_CXX_STANDARD}")

#find_package
# find_package(FFmpeg REQUIRED)
# if(FFMPEG_FOUND)
# message (STATUS "FFMPEG_ROOT = ${FFMPEG_ROOT}")
# message (STATUS "FFMPEG_INCLUDE_DIRS = ${FFMPEG_INCLUDE_DIRS}")
# message (STATUS "FFMPEG_LIBRARIES = ${FFMPEG_LIBRARIES}")
# message (STATUS "FFMPEG_DEFINITIONS = ${FFMPEG_DEFINITIONS} ")
# endif(FFMPEG_FOUND)

# find_package(JPEG REQUIRED)
# if(JPEG_FOUND)
# message (STATUS "JPEG_ROOT = ${JPEG_ROOT}")
# message (STATUS "JPEG_INCLUDE_DIRS = ${JPEG_INCLUDE_DIRS}")
# message (STATUS "v_LIBRARIES = ${JPEG_LIBRARIES}")
# message (STATUS "JPEG_DEFINITIONS = ${JPEG_DEFINITIONS} ")
# endif(JPEG_FOUND)

find_path(AVCODEC_INCLUDE_DIR libavcodec/avcodec.h)
find_library(AVCODEC_LIBRARY avcodec)
message (STATUS "AVCODEC_INCLUDE_DIR = ${AVCODEC_INCLUDE_DIR} ")
message (STATUS "AVCODEC_LIBRARY = ${AVCODEC_LIBRARY} ")

find_path(AVFORMAT_INCLUDE_DIR libavformat/avformat.h)
find_library(AVFORMAT_LIBRARY avformat)

find_path(AVUTIL_INCLUDE_DIR libavutil/avutil.h)
find_library(AVUTIL_LIBRARY avutil)

find_path(AVDEVICE_INCLUDE_DIR libavdevice/avdevice.h)
find_library(AVDEVICE_LIBRARY avdevice)


#find_path
find_path(TEST_PATH NAMES common.cmake PATHS ./cmake)

message("--TEST_PATH--> ${TEST_PATH}")

#find_file
find_file(TEST_FILE NAMES common.cmake PATHS ./cmake)

message("--TEST_FILE--> ${TEST_FILE}")

#file GLOB
file(GLOB HEADERS "*.h" "*.hpp")

message("---HEADERS--> ${HEADERS}")

add_executable(CppDemo4 main.cpp)

