#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);	        // Set display window colour to white

	glMatrixMode(GL_PROJECTION);		        // Set projection parameters
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	            // Clear display window

	// background sky
	glColor3f (0.000f, 0.749f, 1.000f); // deep sky blue
    glBegin(GL_POLYGON);
        glVertex3f (0, 170, 0.0);
        glVertex3f (400, 170, 0.0);
        glVertex3f (400, 400, 0.0);
        glVertex3f (0, 400, 0.0);
    glEnd();

    // ground
    glColor3f (0.561f, 0.737f, 0.561f); // dark sea green
    glBegin(GL_POLYGON);
        glVertex3f (0, 0, 0.0);
        glVertex3f (400, 0, 0.0);
        glVertex3f (400, 170, 0.0);
        glVertex3f (0, 170, 0.0);
    glEnd();

    // house structure
    glColor3f(0.957f, 0.643f, 0.376f); // sandy brown
    glBegin(GL_POLYGON);
        glVertex3f (50, 20, 0.0);
        glVertex3f (220, 20, 0.0);
        glVertex3f (220, 200, 0.0);
        glVertex3f (50, 200, 0.0);
    glEnd();

    // bottom tile
    glColor3f(0.4,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex3f (50, 200, 0.0);
        glVertex3f (220, 200, 0.0);
        glVertex3f (200, 240, 0.0);
        glVertex3f (70, 240, 0.0);
    glEnd();

    // top tile
    glColor3f(0.4,0.1,0);
    glBegin(GL_POLYGON);
        glVertex3f (70, 240, 0.0);
        glVertex3f (200, 240, 0.0);
        glVertex3f (220, 260, 0.0);
        glVertex3f (55, 260, 0.0);
    glEnd();

    // left window
    glColor3f(0.545f, 0.271f, 0.075f);
    glBegin(GL_POLYGON);
        glVertex3f (60, 70, 0.0);
        glVertex3f (100, 70, 0.0);
        glVertex3f (100, 100, 0.0);
        glVertex3f (60, 100, 0.0);
    glEnd();

    // door
    glColor3f(0.545f, 0.271f, 0.075f);
    glBegin(GL_POLYGON);
        glVertex3f (110, 20, 0.0);
        glVertex3f (160, 20, 0.0);
        glVertex3f (160, 120, 0.0);
        glVertex3f (110, 120, 0.0);
    glEnd();

    // right window
    glColor3f(0.545f, 0.271f, 0.075f);
    glBegin(GL_POLYGON);
        glVertex3f (170, 70, 0.0);
        glVertex3f (210, 70, 0.0);
        glVertex3f (210, 100, 0.0);
        glVertex3f (170, 100, 0.0);
    glEnd();

    // tree trunk
    glColor3f(0.4,0.1,0);
    glBegin(GL_POLYGON);
        glVertex3f (270, 20, 0.0);
        glVertex3f (310, 20, 0.0);
        glVertex3f (310, 200, 0.0);
        glVertex3f (270, 200, 0.0);
    glEnd();

    // leaf bottom
    glColor3f(0.3,0.4,0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(240,200);
        glVertex2i(340,200);
        glVertex2i(290,250);
    glEnd();

    // leaf center
    glColor3f(0.3,0.4,0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(245,220);
        glVertex2i(335,220);
        glVertex2i(290,250);
    glEnd();

    // leaf top
    glColor3f(0.3,0.4,0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(250,230);
        glVertex2i(330,230);
        glVertex2i(290,300);
    glEnd();

	glFlush();	                                // Process all OpenGL routines
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);					    // Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(500, 100);			// Set window position
	glutInitWindowSize(800, 700);				// Set window size
	glutCreateWindow("GL Line house");	        // Create display window

	init();							            // Execute initialisation procedure
	glutDisplayFunc(drawShapes);		        // Send graphics to display window
	glutMainLoop();					            // Display everything and wait

	return 0;
}
