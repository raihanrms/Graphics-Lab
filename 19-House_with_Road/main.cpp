#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

void circle(int x, int y){
    float th;
    glBegin(GL_POLYGON);
    for (int i=0; i<=360; i++){
        th = i*3.142/180;
        glVertex2f(x+20*cos(th),y+20*sin(th));
    }
    glEnd();
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

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
        circle(550,550);

        // Building 1
    glBegin(GL_POLYGON);
        glColor3ub (148, 49, 38);
        glVertex3f (280, 370, 0.0);
        glVertex3f (310, 370, 0.0);
        glColor3ub(205, 97, 85);
        glVertex3f (310, 440, 0.0);
        glVertex3f (280, 440, 0.0);
    glEnd();

    // Building 1 shade
    glBegin(GL_POLYGON);
        glColor3ub (100, 30, 22);
        glVertex3f (310, 370, 0.0);
        glVertex3f (315, 370, 0.0);
        glColor3ub(205, 97, 85);
        glVertex3f (315, 435, 0.0);
        glVertex3f (310, 440, 0.0);
    glEnd();

        // Building 1 windows
        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (284 , 426, 0.0);
        glVertex3f (294, 426, 0.0);
        glVertex3f (294 , 436, 0.0);
        glVertex3f (284, 436, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (297 , 426, 0.0);
        glVertex3f (308, 426, 0.0);
        glVertex3f (308 , 436, 0.0);
        glVertex3f (297, 436, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (284 , 414, 0.0);
        glVertex3f (294, 414, 0.0);
        glVertex3f (294 , 424, 0.0);
        glVertex3f (284, 424, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (297 , 414, 0.0);
        glVertex3f (308, 414, 0.0);
        glVertex3f (308 , 424, 0.0);
        glVertex3f (297, 424, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (284 , 402, 0.0);
        glVertex3f (294, 402, 0.0);
        glVertex3f (294 , 412, 0.0);
        glVertex3f (284, 412, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (297 , 402, 0.0);
        glVertex3f (308, 402, 0.0);
        glVertex3f (308 , 412, 0.0);
        glVertex3f (297, 412, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (284 , 390, 0.0);
        glVertex3f (294, 390, 0.0);
        glVertex3f (294 , 400, 0.0);
        glVertex3f (284, 400, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (297 , 390, 0.0);
        glVertex3f (308, 390, 0.0);
        glVertex3f (308 , 400, 0.0);
        glVertex3f (297, 400, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (284 , 378, 0.0);
        glVertex3f (294, 378, 0.0);
        glVertex3f (294 , 388, 0.0);
        glVertex3f (284, 388, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (297 , 378, 0.0);
        glVertex3f (308, 378, 0.0);
        glVertex3f (308 , 388, 0.0);
        glVertex3f (297, 388, 0.0);
        glEnd();

        // Building 2
    glBegin(GL_POLYGON);
        glColor3ub (147, 81, 22);
        glVertex3f (320, 370, 0.0);
        glVertex3f (345, 370, 0.0);
         glColor3ub (185, 119, 14);
        glVertex3f (345, 440, 0.0);
        glVertex3f (320, 440, 0.0);
    glEnd();

    // Building 2 shade
    glBegin(GL_POLYGON);
        glColor3ub (74, 38, 30);
        glVertex3f (345, 370, 0.0);
        glVertex3f (350, 370, 0.0);
         glColor3ub (214, 137, 16);
        glVertex3f (350, 435, 0.0);
        glVertex3f (345, 440, 0.0);
    glEnd();

    // Building 2 windows
        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (322 , 426, 0.0);
        glVertex3f (331, 426, 0.0);
        glVertex3f (331 , 436, 0.0);
        glVertex3f (322, 436, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (333 , 426, 0.0);
        glVertex3f (342, 426, 0.0);
        glVertex3f (342 , 436, 0.0);
        glVertex3f (333, 436, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (322 , 414, 0.0);
        glVertex3f (331, 414, 0.0);
        glVertex3f (331 , 424, 0.0);
        glVertex3f (322, 424, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (333 , 414, 0.0);
        glVertex3f (342, 414, 0.0);
        glVertex3f (342 , 424, 0.0);
        glVertex3f (333, 424, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (322 , 402, 0.0);
        glVertex3f (331, 402, 0.0);
        glVertex3f (331 , 412, 0.0);
        glVertex3f (322, 412, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (333 , 402, 0.0);
        glVertex3f (342, 402, 0.0);
        glVertex3f (342 , 412, 0.0);
        glVertex3f (333, 412, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (322 , 390, 0.0);
        glVertex3f (331, 390, 0.0);
        glVertex3f (331 , 400, 0.0);
        glVertex3f (322, 400, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (333 , 390, 0.0);
        glVertex3f (342, 390, 0.0);
        glVertex3f (342 , 400, 0.0);
        glVertex3f (333, 400, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (322, 378, 0.0);
        glVertex3f (331, 378, 0.0);
        glVertex3f (331, 388, 0.0);
        glVertex3f (322, 388, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (333 , 378, 0.0);
        glVertex3f (342, 378, 0.0);
        glVertex3f (342 , 388, 0.0);
        glVertex3f (333, 388, 0.0);
        glEnd();

            // Building 3
    glBegin(GL_POLYGON);
        glColor3ub (241, 196, 15);
        glVertex3f (355, 370, 0.0);
        glVertex3f (385, 370, 0.0);
        glColor3ub (244, 208, 63);
        glVertex3f (385, 440, 0.0);
        glVertex3f (355, 440, 0.0);
    glEnd();

    // Building 3 shade
    glBegin(GL_POLYGON);
        glColor3ub (154, 125, 10);
        glVertex3f (385, 370, 0.0);
        glVertex3f (390, 370, 0.0);
        glColor3ub (244, 208, 63);
        glVertex3f (390, 435, 0.0);
        glVertex3f (385, 440, 0.0);
    glEnd();

    // Building 3 windows
        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (357 , 426, 0.0);
        glVertex3f (369, 426, 0.0);
        glVertex3f (369 , 436, 0.0);
        glVertex3f (357, 436, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (371 , 426, 0.0);
        glVertex3f (383, 426, 0.0);
        glVertex3f (383 , 436, 0.0);
        glVertex3f (371, 436, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (357 , 414, 0.0);
        glVertex3f (369, 414, 0.0);
        glVertex3f (369 , 424, 0.0);
        glVertex3f (357, 424, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (371 , 414, 0.0);
        glVertex3f (383, 414, 0.0);
        glVertex3f (383 , 424, 0.0);
        glVertex3f (371, 424, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (357 , 402, 0.0);
        glVertex3f (369, 402, 0.0);
        glVertex3f (369 , 412, 0.0);
        glVertex3f (357, 412, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (371 , 402, 0.0);
        glVertex3f (383, 402, 0.0);
        glVertex3f (383 , 412, 0.0);
        glVertex3f (371, 412, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (357 , 390, 0.0);
        glVertex3f (369, 390, 0.0);
        glVertex3f (369 , 400, 0.0);
        glVertex3f (357, 400, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (371 , 390, 0.0);
        glVertex3f (383, 390, 0.0);
        glVertex3f (383 , 400, 0.0);
        glVertex3f (371, 400, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (357 , 378, 0.0);
        glVertex3f (369, 378, 0.0);
        glVertex3f (369 , 388, 0.0);
        glVertex3f (357, 388, 0.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(41, 42, 44);
        glVertex3f (371 , 378, 0.0);
        glVertex3f (383, 378, 0.0);
        glVertex3f (383 , 388, 0.0);
        glVertex3f (371, 388, 0.0);
        glEnd();


    //  road
    glBegin(GL_POLYGON);
        glColor3ub (66, 73, 73);
        glVertex3f (0, 220, 0.0);
        glVertex3f (600, 220, 0.0);
        glColor3ub(97, 106, 107);
        glVertex3f (600, 370, 0.0);
        glVertex3f (0, 370, 0.0);
    glEnd();

    // road stuffing
    glBegin(GL_POLYGON);
        glColor3ub (33, 47, 61);
        glVertex3f (0, 200, 0.0);
        glVertex3f (600, 200, 0.0);
        glVertex3f (600, 220, 0.0);
        glVertex3f (0, 220, 0.0);
    glEnd();

    // gradient grass
        glBegin(GL_POLYGON);
        glColor3ub(11, 83, 69);
        glVertex3f(0, 0, 0.0);
        glVertex3f(600, 0, 0.0);
        glColor3ub(29, 143, 76);
        glVertex3f(600, 200, 0.0);
        glVertex3f(0, 200, 0.0);
    glEnd();
	glFlush();	  // Process all OpenGL routines

}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100, 90);
	glutInitWindowSize(1000, 800);
	glutCreateWindow("181400138");
	init();
	glutDisplayFunc(drawShapes);
	glutMainLoop();

	return 0;
}
