cmake_minimum_required(VERSION 2.6)
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(DesignPattens)

add_executable(mainForm1 Beginning/src/mainForm1.cpp)
target_include_directories(mainForm1 PRIVATE Beginning/inc)
add_executable(mainForm2 Beginning/src/mainForm2.cpp)
target_include_directories(mainForm2 PRIVATE Beginning/inc)

add_executable(singleton Singleton/src/singleTonClient.cpp)
target_include_directories(singleton PRIVATE Singleton/inc)
target_link_libraries(singleton pthread)


add_executable(factoryMethod Factory/src/factoryMethodClient.cpp)
target_include_directories(factoryMethod PRIVATE Factory/inc)
add_executable(simpleFactory Factory/src/simpleFactoryClient.cpp)
target_include_directories(simpleFactory PRIVATE Factory/inc)




