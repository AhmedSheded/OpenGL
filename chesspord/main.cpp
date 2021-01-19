#include <iostream>
#include "GL/glut.h"
void display(){
    glClearColor(0.5,0.5,0.5,1);
    glClear(GL_COLOR_BUFFER_BIT);
    bool c=0;
    float py=75, deltay=50;

     for(int j=0;j<400;j+=50) {
         for (int i = 0; i < 400; i += 50)  {
             glBegin(GL_POLYGON);
             glColor3f(c, c, c);
             glVertex2f(i + 50, j+50);
             glVertex2f(i + 100, j+50);
             glVertex2f(i + 100, j+100);
             glVertex2f(i + 50, j+100);
             glEnd();
             c = !c;
         }
         c = !c;
     }
     glPointSize(50);
     glBegin(GL_POINTS);
     glColor3f(0.5,0.5,0.5);
     glVertex2f(75,py);

    py+=deltay;
    if (py>425 || py<75)
        deltay=-deltay;
    glEnd();
    glFlush();
    glutPostRedisplay();

}
int main(int argc, char **vrgc) {
   glutInit(&argc, vrgc);
   glutInitWindowPosition(100,100);
   glutInitWindowSize(600,600);
   glutCreateWindow("chess pord");
   gluOrtho2D(0,550,0,550);
   glutDisplayFunc(display);
   glutMainLoop();

    return 0;
}
