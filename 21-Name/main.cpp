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

void Name(void)
{


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
	glutDisplayFunc(Name);
	glutMainLoop();

	return 0;
}
