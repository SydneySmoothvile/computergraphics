#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <GL/glut.h>
#include <math.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(2.0);
    glBegin(GL_QUADS);
    glVertex2f(2.0, 1.0);
    glVertex2f(2.0, -1.5);
    glVertex2f(-2.0, -1.5);
    glVertex2f(-2.0, 1.0);
    glEnd();


    // lines on left window
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(290, 320);
    glVertex2i(290, 230);
    glVertex2i(230, 273);
    glVertex2i(350, 273);
    glEnd();

    //right window
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(430, 320);
    glVertex2i(550, 320);
    glVertex2i(550, 230);
    glVertex2i(430, 230);
    glEnd();

    // lines on right window 
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(490, 320);
    glVertex2i(490, 230);
    glVertex2i(430, 273);
    glVertex2i(550, 273);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2i(3.0, 2.0);
    glVertex2i(3.0, 1.0);
    glVertex2i(-3.0, 2.0);
    glVertex2i(-3.0, 1.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2i(-1.5, 2);
    glVertex2i(1.5, 2);
    glVertex2i(1, 3.5);
    glVertex2i(-1, 3.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.5, 0.0);
    glVertex2f(0.5, -1.5);
    glVertex2f(-0.5, -1.5);
    glVertex2f(-0.5, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(-1.5, 0.5);
    glVertex2f(-1.0, 0.5);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.5, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(2.5, 3.5);
    glVertex2f(3.0, 5.0);
    glVertex2f(2.0, 4.0);
    glVertex2f(4.0, 3.0);
    glVertex2f(2.0, 4.0);
    glEnd();


    glFlush();

}





void myinit()
{

    
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);

    glClearColor(0.0, 0.0, 0.0, 1.0);
    gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowSize(900, 900);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("My house");
    myinit();
    glutDisplayFunc(display);
    glutMainLoop();
}
