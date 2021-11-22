#include <GL/glut.h>

void init()

{
// Set display window color to as glClearColor(R,G,B,Alpha)
glClearColor(0.5, 0.9, 0.4, 0.0);
// Set projection parameters.
glMatrixMode(GL_PROJECTION);
// Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
gluOrtho2D(0.0, 800, 0.0, 600);
}

void home()
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear display window
    // Set line segment color as glColor3f(R,G,B)

    //side Wall
    glColor3f(0.1, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(200, 350);
    glVertex2i(600, 350);
    glVertex2i(600, 100);
    glVertex2i(200, 100);
    glEnd();

    //Left window 
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(230, 320);
    glVertex2i(350, 320);
    glVertex2i(350, 230);
    glVertex2i(230, 230);
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

     // Front Door
    glColor3f(0.7, 0.2, 0.9);
    glBegin(GL_POLYGON);
    glVertex2i(350, 200);
    glVertex2i(425, 200);
    glVertex2i(425, 100);
    glVertex2i(350, 100);
    glEnd();

    // Front Door Lock/knob
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2i(400,150);
    glEnd();

    
    // Process all OpenGL routine s as quickly as possible
    glFlush();
}

int main(int argc, char ** argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);

    // Set display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // Set top - left display window position.
    glutInitWindowPosition(100, 100);

    // Set display window width and height
    glutInitWindowSize(800, 600);

    // Create display window with the given title
    glutCreateWindow("2D House Assignment");

    // Execute initialization procedure
    init();

    // Send graphics to display window
    glutDisplayFunc(home);

    // Display everything and wait.
    glutMainLoop();
    
}