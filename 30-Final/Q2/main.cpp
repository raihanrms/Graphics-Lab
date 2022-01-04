#include <time.h>
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdio.h>

float x1_position = -100.0, x2_position = 100.0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity();
    glTranslatef( x1_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub (74, 35, 90);
        glVertex3f (25, -25, 0.0);
        glVertex3f (75, -25, 0.0);
        glColor3ub (136, 78, 160);
        glVertex3f (75, 25, 0.0);
        glColor3ub (155, 89, 182);
        glVertex3f (25, 25, 0.0);
    glEnd();


    glLoadIdentity();
    glTranslatef( x2_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub (127, 179, 213);
        glVertex3f (25, -25, 0.0);
        glVertex3f (75, -25, 0.0);
        glColor3ub (41, 128, 185);
        glVertex3f (75, 25, 0.0);
        glColor3ub (31, 97, 141);
        glVertex3f (25, 25, 0.0);
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

    if (x1_position > 200)
        x1_position = -200; // so they simultaneously move to the right together
            else x1_position += 0.5;

    if (x2_position > 200)
        x2_position = -200;
            else x2_position += 0.5;

}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("181400138 Gradient");

    initOpenGL();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutTimerFunc(0, timer, 0);
    //void glutTimerFunc(unsigned int numMilliseconds, functionCallback, value);
    glutMainLoop();


    return 0;


}
