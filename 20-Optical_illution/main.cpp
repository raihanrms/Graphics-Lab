#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 1000.0, 0.0, 1000.0);
}

void Optics(void)
{

    // 1
    glColor3ub(74, 35, 90);
    glBegin(GL_POLYGON);
        glVertex3f(500, 180, 0.0);
        glVertex3f(600, 140, 0.0);
        glVertex3f(600, 550, 0.0);
        glVertex3f(500, 590, 0.0);
    glEnd();

    // 2
    glColor3ub(91, 44, 111);
    glBegin(GL_POLYGON);
        glVertex3f(600, 140, 0.0);
        glVertex3f(720, 180, 0.0);
        glVertex3f(720, 690, 0.0);
        glVertex3f(600, 630, 0.0);
    glEnd();


    // 3
    glColor3ub(215, 189, 226);
    glBegin(GL_POLYGON);
        glVertex3f(400, 550, 0.0);
        glVertex3f(500, 490, 0.0);
        glVertex3f(600, 550, 0.0);
        glVertex3f(500, 610, 0.0);
    glEnd();


    // 4
    glColor3ub(125, 60, 152);
    glBegin(GL_POLYGON);
        glVertex3f(400, 200, 0.0);
        glVertex3f(500, 260, 0.0);
        glVertex3f(500, 490, 0.0);
        glVertex3f(400, 550, 0.0);
    glEnd();



    // 5
    glColor3ub(142, 68, 173);
    glBegin(GL_POLYGON);
        glVertex3f(280, 260, 0.0);
        glVertex3f(400, 200, 0.0);
        glVertex3f(400, 690, 0.0);
        glVertex3f(280, 750, 0.0);
    glEnd();

    // 6
    glColor3ub(136, 78, 160);
    glBegin(GL_POLYGON);
        glVertex3f(400, 550, 0.0);
        glVertex3f(500, 610, 0.0);
        glVertex3f(500, 750, 0.0);
        glVertex3f(400, 690, 0.0);
    glEnd();

    // 7
    glColor3ub(155, 89, 182);
    glBegin(GL_POLYGON);
        glVertex3f(500, 610, 0.0);
        glVertex3f(600, 550, 0.0);
        glVertex3f(600, 630, 0.0);
        glVertex3f(500, 690, 0.0);
    glEnd();

    // 8
    glColor3ub(215, 189, 226);
    glBegin(GL_POLYGON);
        glVertex3f(500, 690, 0.0);
        glVertex3f(600, 630, 0.0);
        glVertex3f(720, 690, 0.0);
        glVertex3f(600, 750, 0.0);
    glEnd();

    // 9
    glColor3ub(81, 46, 95);
    glBegin(GL_POLYGON);
        glVertex3f(500, 690, 0.0);
        glVertex3f(600, 750, 0.0);
        glVertex3f(600, 860, 0.0);
        glVertex3f(500, 800, 0.0);
    glEnd();

    // 10
    glColor3ub(215, 189, 226);
    glBegin(GL_POLYGON);
        glVertex3f(500, 800, 0.0);
        glVertex3f(600, 860, 0.0);
        glVertex3f(500, 920, 0.0);
        glVertex3f(400, 860, 0.0);
    glEnd();

    // 11
    glColor3ub(99, 57, 116);
    glBegin(GL_POLYGON);
        glVertex3f(400, 810, 0.0);
        glVertex3f(500, 750, 0.0);
        glVertex3f(500, 800, 0.0);
        glVertex3f(400, 860, 0.0);
    glEnd();

    // 12
    glColor3ub(215, 189, 226);
    glBegin(GL_POLYGON);
        glVertex3f(400, 690, 0.0);
        glVertex3f(500, 750, 0.0);
        glVertex3f(400, 810, 0.0);
        glVertex3f(280, 750, 0.0);
    glEnd();

    // Process all OpenGL routines
    glFlush();

}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100, 90);
	glutInitWindowSize(1000, 800);
	glutCreateWindow("181400138");
	init();
	glutDisplayFunc(Optics);
	glutMainLoop();

	return 0;
}
