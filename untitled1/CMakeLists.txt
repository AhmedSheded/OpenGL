cmake_minimum_required(VERSION 3.6)

project(untitled1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -framework GLUT -framework OpenGL") # compiler version and compiler flags.

set(untitled1 main.cpp) # which files should be compiled

add_executable(opengl_projects ${SOURCE_FILES}) # which files should produce executables

#cmake_minimum_required(VERSION 3.10) # common to every CLion project
#project(untitled1) # project name
#
#
#set(OpenGlLinkers -lglut -lGLU -lGL) # setting all the Glut libraries as one variable.
#
#
#################################################
#
#add_executable(untitled1 main.cpp ) #common to all clion project
#target_link_libraries(OpenGLLinuxTest ${OpenGlLinkers}) # linking opengl libraries to the project
#
##################################################
#include_directories(GL)
#
#target_link_libraries(OpenGL GL/Glaux.lib GL/GLU32.LIB GL/glui32.lib GL/glut32.lib GL/OPENGL32.LIB)
#

#cmake_minimum_required(VERSION 3.14)
#project(untitled1)
#
#set(CMAKE_CXX_STANDARD 17)
#
#add_executable(
#        untitled1
#        AdjacencyList.h
#        main.cpp
#        Node.h
#        UsefulFunctions.h
#        Macros.h
#        Coordinates.h
#        GraphDrawer.h
#)
#
#find_package(OpenGL REQUIRED)
#find_package(GLUT REQUIRED)
#
## Included these two lines:
#
#include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
#target_link_libraries(untitled1 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
#
#
#
#
#
#
#
#
#
#
###cmake_minimum_required(VERSION 3.17)
###project(untitled1)
###
###set(OpenGlLinkers -lglut -lglu -lGL CMAKE_CXX_STANDARD 14) # setting all the Glut libraries as one variable.
####set(gcc hw_opengl.cpp -o hw_opengl -lGL -lGLU -lglut)
####set(CMAKE_CXX_STANDARD 11)
####set(SOURCE_FILES main.cpp)
####
###add_executable(OpenGLLinuxTest1 untitled1 main.cpp ) #common to all clion project
###
##
##cmake_minimum_required(VERSION 3.17)
##project(untitled1)
##
##set(OpenGlLinkers -lglut -lglu -lGL CMAKE_CXX_STANDARD 14)
##
##add_executable(
##        untitled1
##        main.cpp
##
##)
##
##find_package(OpenGL REQUIRED)
##find_package(GLUT REQUIRED)
##
##include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
##target_link_libraries(untitled1 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
##
##
