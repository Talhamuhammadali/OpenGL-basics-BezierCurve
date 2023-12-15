#include <iostream>
#include "glad/glad.h"
#include <GLFW/glfw3.h>

int main(){
        GLFWwindow* window;
    if (!glfwInit()){
        std::cout << "Failed to initialize GLFW" << std::endl;
        return -1;
    }
    
    window = glfwCreateWindow(640, 480, "FirstWindow", NULL, NULL);
    if (!window){
        std::cout << "Failed to Creat Widow" << std::endl;
        return -1;
    }
    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        glfwSwapBuffers(window);
    }
    glfwTerminate();
    return 0;
}