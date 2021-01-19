#include <iostream>
#include <GL/glut.h>
void display(){
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,0);

    glEnable(GL_POINT_SMOOTH);
    glPointSize(15);
    glBegin(GL_POINTS);
    glVertex2f(10,10);
    glVertex2f(110, 10);
    glVertex2f(110, 110);
    glVertex2f(10, 110);
    glVertex2f(60,10);
    glVertex2f(110,60);
    glVertex2f(60,110);
    glVertex2f(10,60);
    glVertex2f(35,35);
    glVertex2f(85,35);
    glVertex2f(85, 85);
    glVertex2f(35,85);
    glVertex2f(60,35);
    glVertex2f(85,60);
    glVertex2f(60,85);
    glVertex2f(35,60);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINE_LOOP);

    glVertex2f(10,10);
    glVertex2f(110, 10);
    glVertex2f(110, 110);
    glVertex2f(10, 110);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(60,10);
    glVertex2f(110,60);
    glVertex2f(60,110);
    glVertex2f(10,60);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(35,35);
    glVertex2f(85,35);
    glVertex2f(85, 85);
    glVertex2f(35,85);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(60,35);
    glVertex2f(85,60);
    glVertex2f(60,85);
    glVertex2f(35,60);
    glEnd();


    glFlush();
}
int main(int argc, char **vrgc) {
    glutInit(&argc, vrgc);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("window");
    gluOrtho2D(0,200,0,200);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
