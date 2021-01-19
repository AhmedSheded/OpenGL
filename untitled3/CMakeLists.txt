cmake_minimum_required(VERSION 3.17) # common to every CLion project

project(untitled3) # project name

set(OpenGlLinkers -lglut -lGLU -lGL) # setting all the Glut libraries as one variable.

add_executable(untitled3 main.cpp ) #common to all clion project

target_link_libraries(untitled3 ${OpenGlLinkers}) # linking opengl libraries to the project
