#include <time.h>
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdio.h>

float x1_position = 0.0, x2_position = 0.0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity();
    glTranslatef( x1_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub(216, 55, 30);
        glVertex2f(0, 300);
        glVertex2f(40, 300);
        glVertex2f(60, 340);
        glVertex2f(-20, 340);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(0, 2, 1);
        glVertex2f(10, 340);
        glVertex2f(40, 340);
        glVertex2f(15, 360);
        glVertex2f(0, 340);
    glEnd();

    glLoadIdentity();
    glTranslatef( x2_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub(35, 118, 205);
        glVertex2f(0, 200);
        glVertex2f(40, 200);
        glVertex2f(60, 240);
        glVertex2f(-20, 240);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(0, 2, 1);
        glVertex2f(10, 240);
        glVertex2f(40, 240);
        glVertex2f(15, 260);
        glVertex2f(0, 240);
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

    if (x1_position > 550)
        x1_position = -380; // so they simultaneously move to the right together
            else x1_position += 1;

    if (x2_position > 550)
        x2_position = -500;
            else x2_position += 2;

}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("181400138");

    initOpenGL();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutTimerFunc(0, timer, 0);
    //void glutTimerFunc(unsigned int numMilliseconds, functionCallback, value);
    glutMainLoop();


    return 0;


}
