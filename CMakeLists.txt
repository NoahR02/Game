cmake_minimum_required(VERSION 3.19)
project(game)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} WIN32 main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC user32 gdi32)