#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);	        // Set display window colour to white
	glMatrixMode(GL_PROJECTION);		        // Set projection parameters
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	            // Clear display window

	// background sky
    glBegin(GL_POLYGON);
        glColor3ub(245, 183, 177);
        glVertex3f (0, 400, 0.0);
        glVertex3f (600, 400, 0.0);
        glColor3ub(133, 193, 233);
        glVertex3f (600, 600, 0.0);
        glVertex3f (0, 600, 0.0);
    glEnd();

    //  gradient water body
    glBegin(GL_POLYGON);
        glColor3ub (36, 113, 163);
        glVertex3f (0, 200, 0.0);
        glVertex3f (600, 200, 0.0);
        glVertex3f (600, 400, 0.0);
        glColor3ub(133, 193, 233);
        glVertex3f (0, 400, 0.0);
    glEnd();

    // gradient grass
        glBegin(GL_POLYGON);
        glColor3ub(11, 83, 69);
        glVertex3f (0, 0, 0.0);
        glVertex3f (600, 0, 0.0);
        glVertex3f (600, 200, 0.0);
         glColor3ub (46, 204, 113);
        glVertex3f (0, 200, 0.0);
    glEnd();


	glFlush();	  // Process all OpenGL routines
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);					    // Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(500, 20);			// Set window position
	glutInitWindowSize(1000, 800);				// Set window size
	glutCreateWindow("GL Line house");	        // Create display window

	init();							            // Execute initialisation procedure
	glutDisplayFunc(drawShapes);		        // Send graphics to display window
	glutMainLoop();					            // Display everything and wait

	return 0;
}
