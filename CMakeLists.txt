cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)

add_executable(mystl src/main.cpp)
target_include_directories(mystl PUBLIC include)
