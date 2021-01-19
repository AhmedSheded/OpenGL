#include <iostream>
#include <GL/glut.h>

void Display(){
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    glLineWidth(5);
    glBegin(GL_LINE_LOOP);

    glVertex2f(10,10);
    glVertex2f(10,90);
    glVertex2f(90,90);
    glVertex2f(90,10);
    glEnd();
    glFlush();
}
int main(int args, char **argv) {

   glutInit(&args,argv);
   glutInitWindowPosition(100,100);
   glutInitWindowSize(600,600);
   glutCreateWindow("lines");
   gluOrtho2D(0,100, 0, 100);
   glutDisplayFunc(Display);
   glutMainLoop();
    return 0;
}
