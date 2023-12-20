# HPC-OpenGL Repository

This repository documents my journey in High Performance Computing (HPC) using OpenGL, showcasing a progression of projects exploring various graphics and computational concepts.
## Setup
- GLFW:  This is to generate the window. My goal is to learn OpenGL and not waste time one genrating windows therefor this library comes in handy.
- GLAD: This is to load the opengl from drivers.
- Guide to setup both on [windows & linux]([https://www.youtube.com/watch?v=Y4F0tI7WlDs](https://www.youtube.com/watch?v=4m9RHfdUU_M&list=PLn3eTxaOtL2PHxN8EHf-ktAcN-sGETKfw&index=7))
- Additional Linux command
  ```
  sudo apt-get install libglfw3-dev
  ```
## Projects

### 1. Basic Bezier Curves

- Description: Implementation of basic Bezier curves using OpenGL.
- How to use:
  - Provide Order and control points
  - Render Bezier curves.
- **Example**:
    - Use order 3 and following control points
    - Stating Point = (0.0 , 0.0) , End Point = (1.0, 0.0)
    - Mid Points: (0.25, 1.0 ), (0.75, 1.0) 
    - This will genarate the following:
      ![image](https://github.com/Talhamuhammadali/HPC-OpenGL/assets/46277852/0265da52-f0c6-4648-ad42-12b9e9ed4b1b)

- **Try you self**:
    - Use following Point to get the plot shown: (0.0, 0.3), (0.1, 0.5), (0.3, -0.1), (0.4, 0.0) with order 3.
      
     ![image](https://github.com/Talhamuhammadali/HPC-OpenGL/assets/46277852/edcec322-7bf4-4742-8845-6957bca1cf87)

    
### 2. B-Splines

- Description: Extension of the project to handle B-splines.
- Features:
  - Rendering and manipulation of B-spline curves.
  - Comparison with Bezier curves.
- **Directory:** `B_Splines/`
  - [More Details](./B_Splines/README.md)

### 3. Surface Form B-Splines

- Description: Implementation of surface form B-splines.
- Features:
  - Rendering and manipulation of surface forms.
  - Exploration of different surface types.
- **Directory:** `Surface_Form_B_Splines/`
  - [More Details](./Surface_Form_B_Splines/README.md)

### 4. Parametric Modeling

- Description: Expansion to support parametric surfaces.
- Features:
  - Implement parametric surfaces like Torus, Sphere, etc.
  - User interaction for dynamic surface creation.
- **Directory:** `Parametric_Modeling/`
  - [More Details](./Parametric_Modeling/README.md)

This repository serves as a living documentation of my journey into HPC using OpenGL. Each project represents a milestone in my learning process and showcases my growth in the field. Thank you for visiting!

