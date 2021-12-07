cmake_minimum_required(VERSION 2.6)
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(DesignPattens)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(mainForm1 Beginning/src/mainForm1.cpp)
add_executable(mainForm2 Beginning/src/mainForm2.cpp)



