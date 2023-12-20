#include "config.h"


struct Points
{
    float x;
    float y;
};
struct USER_PROMPT
{
    int order; // order of bezier curve
    std::vector<Points> control_points;
    bool interactive;

};

USER_PROMPT process_user_input(){
    USER_PROMPT inputs;
    std::cout << "To display Bezier Curve Enter Order(>2):" << std::endl;
    std::cin >> inputs.order;
    std::cout << "To display Bezier Curve Enter control points:" << std::endl;
    inputs.control_points.resize(inputs.order+1);
    for (size_t i = 0; i < inputs.order+1; i++)
    {    Points point;
        std::cout << "Point " << i << std::endl;
        std::cout << "x-coordinate:" << std::endl;
        std::cin >> point.x;
        std::cout << "y-coordinate:" << std::endl;
        std::cin >> point.y;
        inputs.control_points[i] = point;
    }
    std::cout << "interactive control points:" << std::endl;
    std::cin >> inputs.interactive;
    return inputs;
}

Points calc_bezier(const std::vector<Points>& control_points, float t) {
    std::vector<Points> points = control_points;
    int n = static_cast<int>(points.size());

    for (int k = 1; k < n; ++k) {
        for (int i = 0; i < n - k; ++i) {
            points[i].x = (1 - t) * points[i].x + t * points[i + 1].x;
            points[i].y = (1 - t) * points[i].y + t * points[i + 1].y;
        }
    }

    return points[0];
}


void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

int render(USER_PROMPT data){
    GLFWwindow* window;
    if(!glfwInit()){
        std::cout << "Couldnt initialize GLFW3" << std::endl;
        return -1;
    }
    std::cout<< "Creating Window" << std::endl;
    // initializing widow using glfw
    window = glfwCreateWindow(1366, 720, "OpenGL_Basics", NULL, NULL);

    // Check for window is created
    if(!window){
        std::cout << "No window created" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    // initialize GLAD to load opengl
    if (!gladLoadGL()) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    glViewport(0, 0, 1366, 720);
    // setting what color the screen will clear to red in this case
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    
    while(!glfwWindowShouldClose(window)){
        // glPointSize(10.f);
        // glBegin(GL_POINTS);
        // for(size_t i = 0; i < data.order+1; ++i){
        //     glColor3f((i*2)/10.0f, 1.0f, 0.0f);
        //     glVertex2f(data.control_points[i].x, data.control_points[i].y);
        // }
        // glEnd();
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_LINE_STRIP);
        for(int t = 0; t < 100; ++t){
            glColor3f(1.0f, 0.0f, 0.0f);
            float normalized_t = t/ 100.0f;
            Points pen;
            pen = calc_bezier(data.control_points, normalized_t);
            std::cout << "Time:"<< t << "(" << pen.x << "," << pen.y << ")" <<std::endl;
            glVertex2f(pen.x, pen.y);
        }       
        glEnd();
        glfwSwapBuffers(window); // displays the processed image form back buffer
        glfwPollEvents(); // checks for user input i.e mouse click, key press on keyboard
    }
    glfwTerminate();
    return 0;
}

int main(){
    std::cout<< "Welcome to OpenGL Basics Program" << std::endl;

    USER_PROMPT curve_info;
    curve_info = process_user_input();
    render(curve_info);
    
    return 0;
}