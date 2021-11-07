#include<windows.h>
#include <GL/glut.h>
#include<math.h>
#define PI  3.1412926535897932


void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);	        // Set display window colour to white

	glMatrixMode(GL_PROJECTION);		        // Set projection parameters
	//gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void display(void){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    //x-axis
    glColor3ub(23, 32, 42);
    glBegin(GL_LINES);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();


    // y-axis
    glColor3ub(23, 32, 42);
    glBegin(GL_LINES);
    glVertex3f(0.0, -1.0, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
    glEnd();

/*
    int i;
    GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.7f;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(199, 0, 57) ;
        glVertex2f(x, y);
        for (i = 0; i <= triangleAmount; i++){
            glVertex2f(
                       x = (radius * cos(i * twicePi / triangleAmount)),
                       y = (radius * sin(i * twicePi / triangleAmount))
                       );
        }
        glEnd();

        x=.5f; y=.5f; radius =.65f;
        triangleAmount = 40;
        twicePi = 2.0f * PI;
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(41, 128, 185) ;
        glVertex2f(x, y);
        for (i = 0; i <= triangleAmount; i++){
            glVertex2f(
                       x = (radius * cos(i * twicePi / triangleAmount)),
                       y = (radius * sin(i * twicePi / triangleAmount))
                       );
        }
        glEnd();
        */
        glFlush();
}

void circle(int x, int y, int r=20){
    float theta;
    glColor3f (0.3, 0.7, 0.2);
    glBegin(GL_POLYGON);
        for(int i; i<=360; i++){
                theta=i* 3.14 / 180; /*converting theta into redian */
        glVertex2f(
                   x + (20 * cos(theta)),
                   y + (20 * sin(theta))
                   );
        }

    glEnd();


    circle(350,350);
}



int main(int argc, char* argv[])
{
	glutInit(&argc, argv);	  // Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode
	glutInitWindowPosition(500, 100);			// Set window position
	glutInitWindowSize(800, 800);				// Set window size
	glutCreateWindow("Circles");	        // Create display window
	init();		// Execute initialisation procedure
	glutDisplayFunc(display);		 // Send graphics to display window
	glutMainLoop();		// Display everything and wait

	return 0;
}
