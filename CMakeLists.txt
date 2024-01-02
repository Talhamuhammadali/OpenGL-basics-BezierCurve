cmake_minimum_required(VERSION 3.0.0)
project(OpenGL_basics VERSION 1.0.0)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_executable(OpenGL_basics
    src/config.h
    src/main.cpp 
    src/glad.c
)

target_include_directories(OpenGL_basics 
    PRIVATE
    dependencies 
)

target_link_libraries(OpenGL_basics
    glfw3
    OpenGL::GL 
)