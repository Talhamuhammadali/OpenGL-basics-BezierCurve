cmake_minimum_required(VERSION 3.0.0)
project(Basic_Bezier_Curves VERSION 0.1.0)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_library(GLAD "src/glad.c") 
add_executable(Basic_Bezier_Curves src/main.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(Basic_Bezier_Curves 
    glfw 
    GLAD
    OpenGL::GL
)
