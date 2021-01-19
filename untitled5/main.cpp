#include <iostream>
#include <GL/glut.h>
#include <math.h>
void display(){
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_STRIP);
    int x=50,y=50,r=40;

    double pi=22.0/7.0;

    glColor3f(0,1,0); 
    for (float i=0; i <=pi/2; i+=pi/100)
        glVertex2f(x+sin(i)*r,y+cos(i)*r);

    glColor3f(0,0,1);
    for (float i=pi/2; i <=pi; i+=pi/100)
        glVertex2f(x+sin(i)*r,y+cos(i)*r);

    glColor3f(1,1,0);
    for (float i=pi; i <=pi*1.5; i+=pi/100)
        glVertex2f(x+sin(i)*r,y+cos(i)*r);

    glColor3f(0,0,0);
    for (float i=pi*1.5; i <=pi*2; i+=pi/100)
        glVertex2f(x+sin(i)*r,y+cos(i)*r);
    glEnd();
    glFlush();

}

int main(int argc, char **vrgc) {
    glutInit(&argc, vrgc );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("window");
    gluOrtho2D(0,200,0,200);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
