#include <time.h>
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdio.h>

float x1_position = 0.0, x2_position = 0.0;
bool position = 0;
GLfloat x1 = -15.0f;
GLfloat y1 = 420.0f;

GLfloat x2 = -25.0f;
GLfloat y2 = 70.0f;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    // add text
    glColor3ub(23, 32, 42);
    glRasterPos2i(x1, y1);
	for (char c : "181400138")
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c);
	}

	glLoadIdentity();
    glTranslatef( x1_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub(255, 87, 51);
        glVertex2f(0, 0);
        glVertex2f(60, 0);
        glVertex2f(60, 60);
        glVertex2f(0, 60);
    glEnd();

    // add text
    glColor3ub(23, 32, 42);
    glRasterPos2i(x2, y2);
	for (char c : "Raihan Munim")
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c);
	}
    glLoadIdentity();
    glTranslatef( x2_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3ub(51, 122, 255);
        glVertex2f(0, 440);
        glVertex2f(60, 440);
        glVertex2f(60, 500);
        glVertex2f(0, 500);
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
