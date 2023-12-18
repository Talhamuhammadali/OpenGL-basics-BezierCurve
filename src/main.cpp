#include "config.h"

int main(){
    std::cout<< "Testing 123" << std::endl;
    GLFWwindow* window;
    
    if(!glfwInit()){
        std::cout << "Couldnt initialize GLFW3" << std::endl;
        return -1;
    }
    std::cout<< "Creating Window" << std::endl;
    window = glfwCreateWindow(1366, 720, "OpenGL_Basics", NULL, NULL);

    if(!window){
        std::cout << "No window created" << std::endl;
        glfwTerminate();
        return -1;
    }

    glClearColor(1.0f, 0.0f, 0.0f, 0.0f);

    while(!glfwWindowShouldClose(window)){
        
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}