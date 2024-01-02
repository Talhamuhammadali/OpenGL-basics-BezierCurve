# Basic Bezier Curve Renderer using OpenGL

This repository showcases a basic implementation of rendering a Bezier curve using OpenGL. It serves as an introductory project into OpenGL, covering fundamental OpenGL functions, GLFW for window creation, GLAD for OpenGL loading, and a CMake configuration for project setup.

## Features

- **Bezier Curve Rendering:** Demonstrates the rendering of a simple Bezier curve using OpenGL.
- **OpenGL Fundamentals:** Utilizes essential OpenGL functions for rendering graphics.
- **GLFW Window Management:** Implements GLFW for creating and managing the rendering window.
- **GLAD Integration:** Uses GLAD to handle OpenGL loading and extensions.
- **CMake Build Configuration:** Includes a CMake file for project compilation and configuration.

## Setup
- GLFW:  This is to generate the window. My goal is to learn OpenGL and not waste time one genrating windows therefor this library comes in handy.
- GLAD: This is to load the opengl from drivers.
- Guide to setup both on [windows and linux](https://www.youtube.com/watch?v=4m9RHfdUU_M&list=PLn3eTxaOtL2PHxN8EHf-ktAcN-sGETKfw&index=7)
- Additional Linux command
  ```
  sudo apt-get install libglfw3-dev
  ```
## Projects

###Basic Bezier Curves

- Description: Implementation of basic Bezier curves using OpenGL.
- How to use:
  - Provide Order and control points
  - Render Bezier curves.
- **Example**:
    - Use order 3 and following control points to get sin wave
    - Stating Point = (0.0 , 0.0) , End Point = (1.0, 0.0)
    - Mid Points: (0.25, 1.0 ), (0.75, 1.0) 
    - This will genarate the following:
      ![image](https://github.com/Talhamuhammadali/HPC-OpenGL/assets/46277852/0265da52-f0c6-4648-ad42-12b9e9ed4b1b)

- **Try you self**:
    - Use following Point to get the plot shown: (0.0, 0.3), (0.1, 0.5), (0.3, -0.1), (0.4, 0.0) with order 3.
      
     ![image](https://github.com/Talhamuhammadali/HPC-OpenGL/assets/46277852/edcec322-7bf4-4742-8845-6957bca1cf87)

This repository serves as a living documentation of my journey into HPC using OpenGL. I choose to learn OpenGL first to get a general idea of how computations are performed by GPUs. As my understanding grows, I will learn advanced languages such as MPI, OpenMP, CUDA, etc.

