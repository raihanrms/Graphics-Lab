#include <time.h>
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdio.h>

float x1_position = 0.0, x2_position = 0.0, x3_position = 0.0;
bool position = 0;
GLfloat x1 = -15.0f;
GLfloat y1 = 420.0f;

GLfloat x2 = -25.0f;
GLfloat y2 = 70.0f;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity();
    glTranslatef( x1_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub(94, 57, 171);
        glVertex2f(0, 0);
        glVertex2f(60, 0);
        glVertex2f(60, 60);
        glVertex2f(0, 60);
    glEnd();

    glLoadIdentity();
    glTranslatef( x2_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub(204, 33, 33);
        glVertex2f(0, 440);
        glVertex2f(60, 440);
        glVertex2f(60, 500);
        glVertex2f(0, 500);
    glEnd();

    glLoadIdentity();
    //glRotated( x3_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub(41, 182, 246);
        glVertex2f(95, 220);
        glVertex2f(155, 220);
        glVertex2f(155, 280);
        glVertex2f(95, 280);
    glEnd();


    glLoadIdentity();
    //glRotated( x4_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub(33, 204, 69);
        glVertex2f(345, 220);
        glVertex2f(405, 220);
        glVertex2f(405, 280);
        glVertex2f(345, 280);
    glEnd();

    glutSwapBuffers();
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D(0, 500, 0, 500);
    glMatrixMode(GL_MODELVIEW);
}

void initOpenGL()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60, timer, 0);

    if (x1_position > 500)
        x1_position = -380; // so they simultaneously move to the right together
            else x1_position += 1;

     if(x2_position==440) position = 1;
     else if(x2_position==0) position = 0;

     if(position) x2_position -= 1;
     else x2_position += 1;

}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(1100, 100);
    glutCreateWindow("181400138");

    initOpenGL();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutTimerFunc(0, timer, 0);
    //void glutTimerFunc(unsigned int numMilliseconds, functionCallback, value);
    glutMainLoop();


    return 0;


}
