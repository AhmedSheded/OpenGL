#include <iostream>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
 void display(){
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);

    glBegin(GL_POINTS);
    glVertex2f(100, 100);
    glEnd();
    glFlush();
}

int main() {
 glutInitWindowPosition(100,100);
 glutInitWindowSize(600, 600);
 glutCreateWindow("POINTS");
 gluOrtho2D(0,200,0,200);
 glutDisplayFunc(display);
 glutMainLoop();
    return 0;
}