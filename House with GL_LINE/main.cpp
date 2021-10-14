#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	//Set colour to black
	glColor3f(0.0, 0.0, 0.0);
	//Adjust the point size
	glPointSize(5.0);

	//Set colour to red
	glColor3f(1.0, 0.0, 0.0);

	// Draw an outlined triangle
	glBegin(GL_LINES);

	    // house
		glVertex2i(100, 200);
		glVertex2i(100,0);

		glVertex2i(100, 0);
		glVertex2i(300,0);

		glVertex2i(300, 0);
		glVertex2i(300,200);

		glVertex2i(300,200);
		glVertex2i(100,200);

		// roof
        glColor3f(0.0, 0.0, 1.0);
		glVertex2i(200,300);
		glVertex2i(100,200);
		glVertex2i(300,200);
		glVertex2i(200,300);

		// door
		glColor3f(0.0,0.0,0.0);
		glVertex2i(210, 120);
		glVertex2i(210,10);

		glVertex2i(210, 10);
		glVertex2i(290,10);

		glVertex2i(290, 10);
		glVertex2i(290,120);

		glVertex2i(290,120);
		glVertex2i(210,120);

		// window
		glColor3f(0.541f, 0.169f, 0.886f);
		glVertex2i(120, 120);
		glVertex2i(120,60);

		glVertex2i(120, 60);
		glVertex2i(190,60);

		glVertex2i(190, 60);
		glVertex2i(190,120);

		glVertex2i(190,120);
		glVertex2i(120,120);

	glEnd();

	glFlush();	// Process all OpenGL routines
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(50, 100);				// Set window position
	glutInitWindowSize(400, 400);					// Set window size
	glutCreateWindow("GL Line house");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
