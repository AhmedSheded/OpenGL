cmake_minimum_required(VERSION 3.17) # common to every CLion project
project(untitled5) # project name


set(OpenGlLinkers -lglut -lGLU -lGL) # setting all the Glut libraries as one variable.


add_executable(untitled5 main.cpp ) #common to all clion project
target_link_libraries(untitled5 ${OpenGlLinkers}) # linking opengl libraries to the project
