#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);	        // Set display window colour to white
	glMatrixMode(GL_PROJECTION);		        // Set projection parameters
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

void circle(int x, int y){
    float th;
    glBegin(GL_POLYGON);
    for (int i=0; i<=360; i++){
        th = i*3.142/180;
        glVertex2f(x+30*cos(th),y+30*sin(th));
    }
    glEnd();
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	            // Clear display window

	// background sky
    glBegin(GL_POLYGON);
        glColor3ub(93, 173, 226);
        glVertex3f (0, 370, 0.0);
        glVertex3f (600, 370, 0.0);
        glColor3ub(198, 212, 238);
        glVertex3f (600, 600, 0.0);
        glVertex3f (0, 600, 0.0);
    glEnd();

        // sun
        glColor3ub(247, 220, 111);
        circle(350,540);

        // cloud
        glColor3ub(255, 255, 255);
        circle(470,540);
        circle(500,540);
        circle(500,560);
        circle(530,540);

        glColor3ub(255, 255, 255);
        circle(200,500);
        circle(230,500);
        circle(230,520);
        circle(250,500);

        // B1
    glBegin(GL_POLYGON);
        glColor3ub (148, 49, 38);
        glVertex3f (0, 370, 0.0);
        glVertex3f (20, 370, 0.0);
        glColor3ub(205, 97, 85);
        glVertex3f (20, 460, 0.0);
        glVertex3f (0, 460, 0.0);
    glEnd();

          // B1 shade
    glBegin(GL_POLYGON);
        glColor3ub (100, 30, 22);
        glVertex3f (20, 370, 0.0);
        glVertex3f (24, 370, 0.0);
        glColor3ub(205, 97, 85);
        glVertex3f (24, 455, 0.0);
        glVertex3f (20, 460, 0.0);
    glEnd();

        // B1 windows
        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (2 , 448, 0.0);
        glVertex3f (18, 448, 0.0);
        glVertex3f (18 , 456, 0.0);
        glVertex3f (2, 456, 0.0);
        glEnd();

        // B2
    glBegin(GL_POLYGON);
        glColor3ub (41, 42, 44);
        glVertex3f (28, 370, 0.0);
        glVertex3f (70, 370, 0.0);
         glColor3ub (93, 109, 126);
        glVertex3f (70, 420, 0.0);
        glVertex3f (28, 420, 0.0);
    glEnd();

    // B2 shade
    glBegin(GL_POLYGON);
        glColor3ub (23, 32, 42);
        glVertex3f (70, 370, 0.0);
        glVertex3f (74, 370, 0.0);
         glColor3ub (93, 109, 126);
        glVertex3f (74, 415, 0.0);
        glVertex3f (70, 420, 0.0);
    glEnd();

            // B3
    glBegin(GL_POLYGON);
        glColor3ub (241, 196, 15);
        glVertex3f (78, 370, 0.0);
        glVertex3f (98, 370, 0.0);
         glColor3ub (244, 208, 63);
        glVertex3f (98, 440, 0.0);
        glVertex3f (78, 440, 0.0);
    glEnd();

    // B3 shade
    glBegin(GL_POLYGON);
        glColor3ub (154, 125, 10);
        glVertex3f (98, 370, 0.0);
        glVertex3f (102, 370, 0.0);
         glColor3ub (244, 208, 63);
        glVertex3f (102, 435, 0.0);
        glVertex3f (98, 440, 0.0);
    glEnd();


    //  gradient water body
    glBegin(GL_POLYGON);
        glColor3ub (36, 113, 163);
        glVertex3f (0, 200, 0.0);
        glVertex3f (600, 200, 0.0);
        glVertex3f (600, 370, 0.0);
        glColor3ub(14, 86, 208);
        glVertex3f (0, 370, 0.0);
    glEnd();

    // gradient grass
        glBegin(GL_POLYGON);
        glColor3ub(11, 83, 69);
        glVertex3f (0, 0, 0.0);
        glVertex3f (600, 0, 0.0);
        glColor3ub (29, 143, 76);
        glVertex3f (600, 200, 0.0);

        glVertex3f (0, 200, 0.0);
    glEnd();


	glFlush();	  // Process all OpenGL routines
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);	 // Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode
	glutInitWindowPosition(500, 30);	// Set window position
	glutInitWindowSize(1000, 800);	// Set window size
	glutCreateWindow("181400138");	 // Create display window
	init();	 // Execute initialisation procedure
	glutDisplayFunc(drawShapes);	 // Send graphics to display window
	glutMainLoop();		// Display everything and wait

	return 0;
}
