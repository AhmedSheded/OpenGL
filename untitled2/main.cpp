#include <iostream>
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <stdlib.h>
#include <time.h>
void display(){
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);

    glEnable(GL_POINT_SMOOTH);

    srand(time(NULL));
    int x= rand()%200+1;
    int y= rand()%200+1;

    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("points");
    gluOrtho2D(0,200, 0,200);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
