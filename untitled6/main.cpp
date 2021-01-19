#include <iostream>
#include "GL/glut.h"
int c =1;
float p1=10, p2=10, deltax=0.04, deltay=0.3;
bool stop =false;

void display(){
    glClearColor(c,c,c,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glPointSize(15);
    glBegin(GL_POINTS);
    glColor3f(0,0,1);
    glVertex2f(p1,p1);
    glColor3f(1,0,0);
    glVertex2f(p2,p2);
    glEnd();
    glFlush();

    p1+=deltax;
    if (p1>=200 or p1<=10)
        deltax=-deltax;
    p2+=deltay;
        if (p2>=200 or p2<= 10)
            deltay=-deltay;

    if (stop == false)
       glutPostRedisplay();
}
void keyboard(unsigned char key, int x, int y){
    if (key == 'a')stop = !stop;
    else if (key == 'e') exit(0);
    else if (key=='r') p1=100;p2=100;deltax=0.04;deltay=0.03;
    if (key=='h') c=!c;
    glutPostRedisplay();
}

int main(int argc, char **vrgc) {
    glutInit(&argc, vrgc);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("window");
    gluOrtho2D(0,200,0,200);
    glutKeyboardFunc(keyboard);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
