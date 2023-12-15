#include <iostream>
#include "glad/glad.h"
#include <GLFW/glfw3.h>

int main(){
        GLFWwindow* window;
    if (!glfwInit()){
        std::cout << "Failed to initialize GLFW" << std::endl;
        return -1;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    window = glfwCreateWindow(640, 480, "FirstWindow", NULL, NULL);

    if (!window){
        std::cout << "Failed to Creat Widow" << std::endl;
        return -1;
    }
    glfwMakeContextCurrent(window);
    if (!gladLoadGL()){
        std:: cout << "Couldnt load OpenGL" << std::endl;
        glfwTerminate();
        return -1;
    }
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
    }
    glfwTerminate();
    return 0;
}