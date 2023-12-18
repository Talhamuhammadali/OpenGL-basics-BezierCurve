cmake_minimum_required(VERSION 3.0.0)
project(OpenGL_Basics VERSION 1.0.0)
set(CMAKE_GENERATOR "Ninja")
find_package(OpenGL REQUIRED)
add_executable(OpenGL_Basics 
    src/config.h
    src/main.cpp
    src/glad.c
)
target_include_directories(OpenGL_Basics PRIVATE dependencies)
target_link_libraries(OpenGL_Basics glfw OpenGL::GL)
