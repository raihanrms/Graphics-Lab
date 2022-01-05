#include <time.h>
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdio.h>

float x1_position = -100.0, x2_position = -100.0; // position altered so they appear
                                                 // one after another.
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity();
    glTranslatef( x1_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub (74, 35, 90);
        glVertex3f (-70, -27, 0.0);
        glVertex3f (-10, -27, 0.0);
        glColor3ub (155, 89, 182);
        glVertex3f (-40, 40, 0.0);
    glEnd();

    glLoadIdentity();
    glTranslatef( x2_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub (127, 179, 213);
        glVertex3f (40, -50, 0.0);
        glVertex3f (70, 7, 0.0);
        glColor3ub (41, 128, 185);
        glVertex3f (10, 7, 0.0);
    glEnd();


    glutSwapBuffers();
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D(-100, 100, -100, 100);
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

    if (x1_position > 39)
        x1_position = 40;
            else x1_position += 0.5;

    if (x2_position > -41)
        x2_position = -40;
            else x2_position += 0.5;

}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(500, 100);
    glutCreateWindow("181400138 Gradient star");

    initOpenGL();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutTimerFunc(0, timer, 0);
    //void glutTimerFunc(unsigned int numMilliseconds, functionCallback, value);
    glutMainLoop();


    return 0;


}
