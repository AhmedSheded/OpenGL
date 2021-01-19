cmake_minimum_required(VERSION 3.17) # common to every CLion project
project(untitled4) # project name


set(OpenGlLinkers -lglut -lGLU -lGL) # setting all the Glut libraries as one variable.


add_executable(untitled4 main.cpp ) #common to all clion project
target_link_libraries(untitled4 ${OpenGlLinkers}) # linking opengl libraries to the project
