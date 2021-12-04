#include <GL/gl.h>
#include <GL/glut.h>

/*
// for same shape triangles, this function can be used
int triangles(int x,int y)
 {
     // Triangles
     glBegin(GL_TRIANGLES);
     glColor3ub(28, 40, 51);
        glVertex2i(x+0, y+0);
        glVertex2i(x+50, y+0);
        glVertex2i(x+50, y+60);
    glEnd();
 }
*/

int background(int x,int y)
 {
     glBegin(GL_POLYGON);
        glVertex3f (x+0, y+0 , 0.0);
        glVertex3f (x+500, y+0, 0.0);
        glVertex3f (x+500, y+600, 0.0);
        glVertex3f (x+0, y+600, 0.0);
    glEnd();
 }

void illusion(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	// T1
    glBegin(GL_TRIANGLES);
    glColor3ub(86, 101, 115);
        glVertex2i(135, 475);
        glVertex2i(280, 440);
        glVertex2i(280, 520);
    glEnd();

    // T2
    glBegin(GL_TRIANGLES);
    glColor3ub(171, 178, 185);
        glVertex2i(280, 440);
        glVertex2i(430, 480);
        glVertex2i(280, 520);
    glEnd();

    // T3
    glBegin(GL_TRIANGLES);
    glColor3ub(28, 40, 51);
        glVertex2i(135, 475);
        glVertex2i(215, 365); // from (215, 380)
        glVertex2i(280, 440);
    glEnd();

    // T4
    glBegin(GL_TRIANGLES);
    glColor3ub(189, 195, 199);
        glVertex2i(130, 275);
        glVertex2i(280, 20);
        glVertex2i(280, 440);
    glEnd();

    // T5
    glBegin(GL_TRIANGLES);
    glColor3ub(236, 240, 241);
        glVertex2i(280, 440);
        glVertex2i(280, 210);
        glVertex2i(430, 480);
    glEnd();

    // T6
    glBegin(GL_TRIANGLES);
    glColor3ub(28, 40, 51);
        glVertex2i(280, 220);
        glVertex2i(430, 270);
        glVertex2i(370, 370);
    glEnd();

    // T7
    glBegin(GL_TRIANGLES);
    glColor3ub(86, 101, 115);
        glVertex2i(280, 220);
        glVertex2i(330, 170);
        glVertex2i(430, 270);
    glEnd();

    // T8
    glBegin(GL_TRIANGLES);
    glColor3ub(236, 240, 241);
        glVertex2i(280, 220);
        glVertex2i(280, 20);
        glVertex2i(430, 80);
    glEnd();

    // T9
    glBegin(GL_TRIANGLES);
    glColor3ub(28, 40, 51);
        glVertex2i(130, 90);
        glVertex2i(280, 20);
        glVertex2i(180, 190);
    glEnd();

    glFlush();      // Process all OpenGL routines
}

void display(void)
{
/*  clear all pixels  */
    glClear (GL_COLOR_BUFFER_BIT);

    glColor3ub(195, 155, 211);
    background(0,0);
    glFlush();
}

void init (void)
{
/*  select clearing (background) color */
    glClearColor (1.0, 1.0, 1.0, 0.0);

/*  initialize viewing values  */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 500.0, 0.0, 600.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (700, 700);
    glutInitWindowPosition (500, 100);
    glutCreateWindow ("Optical Illusion 2");
    init ();
    glutDisplayFunc(display);
    glutDisplayFunc(illusion);
    glutMainLoop();
    return 0;   /* ISO C requires main to return int. */
}
