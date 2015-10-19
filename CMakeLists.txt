cmake_minimum_required(VERSION 3.3)
project(algdat_Moviestore)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Main.cpp FSK.cpp Movie.cpp Moviestore.cpp Person.cpp)
add_executable(algdat_Moviestore ${SOURCE_FILES})