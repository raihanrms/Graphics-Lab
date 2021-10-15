#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1.0f, 1.0f, 1.0f);


	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glColor3f (0.933f, 0.510f, 0.933f);
	glVertex3f(0.1f, 0.05f, 0.0f);
	glVertex3f(0.35f, 0.05f, 0.0f);
	glVertex3f(0.40f, 0.35f, 0.0f);
	glVertex3f(0.05f, 0.35f, 0.0f);

	glEnd(); //End quadrilateral coordinates

	glBegin(GL_TRIANGLES); //Begin triangle coordinates

	//Pentagon
	glColor3f (1.000f, 0.271f, 0.000f);
	glVertex3f(0.5f, 0.05f, 0.0f);
	glVertex3f(0.75f, 0.05f, 0.0f);
	glVertex3f(0.5f, 0.35f, 0.0f);

	glColor3f (1.000f, 0.271f, 0.000f);
	glVertex3f(0.5f, 0.35f, 0.0f);
	glVertex3f(0.75f, 0.05f, 0.0f);
	glVertex3f(0.75f, 0.35f, 0.0f);

	glColor3f (1.000f, 0.271f, 0.000f);
	glVertex3f(0.5f, 0.35f, 0.0f);
	glVertex3f(0.75f, 0.35f, 0.0f);
	glVertex3f(0.63f, 0.50f, 0.0f);

	//Triangle
	glColor3f (0.0, 0.3, 0.6);
	glVertex3f(0.30f, 0.65f, 0.0f);
	glVertex3f(0.60f, 0.65f, 0.0f);
	glVertex3f(0.45, 0.85f, 0.0f);

	// Triangle 2
	glColor3f (0.6, 0.7, 0.3);
	glVertex3f(0.35f, 0.4f, 0.0f);
	glVertex3f(0.50f, 0.4f, 0.0f);
	glVertex3f(0.42f, 0.6f, 0.0f);

	glEnd();//End triangle coordinates
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0); // the size of graph
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 800);
glutInitWindowPosition (100, 100);
glutCreateWindow ("basic shapes with color");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
