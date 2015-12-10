cmake_minimum_required(VERSION 3.3)
project(ImageFeatureExtraction)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ImageFeatureExtraction.cpp ImageFeatureExtraction.h)
add_executable(ImageFeatureExtraction ${SOURCE_FILES} ImageFeatureExtraction.cpp ImageFeatureExtraction.h)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)

target_link_libraries(ImageFeatureExtraction Qt5::Core Qt5::Widgets Qt5::Gui)