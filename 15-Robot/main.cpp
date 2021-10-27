#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
/*  clear all pixels  */
    glClear (GL_COLOR_BUFFER_BIT);

/*  draw white polygon (rectangle) with corners at
 *  (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
 */
 // body
    glColor3f (0.392f, 0.584f, 0.929f);
    glBegin(GL_POLYGON);
        glVertex3f (-25, -20, 0.0);
        glVertex3f (25, -20, 0.0);
        glVertex3f (25, 60, 0.0);
        glVertex3f (-25, 60, 0.0);
    glEnd();

    // left arm
    glBegin(GL_LINES);
    glVertex2f(-50,0);
    glVertex2f(-25,45);
glEnd();

    // right arm
    glBegin(GL_LINES);
    glVertex2f( 50,0);
    glVertex2f( 25,45);
glEnd();

    // neck
    glBegin(GL_LINES);
    glVertex2f( 0,60);
    glVertex2f( 0,75);
glEnd();

    // left leg
    glBegin(GL_LINES);
    glVertex2f( -15,-20);
    glVertex2f( -15,-40);
glEnd();

    // right leg
    glBegin(GL_LINES);
    glVertex2f( 15,-20);
    glVertex2f( 15,-40);
glEnd();


    // head
    glColor3f (1.000f, 0.980f, 0.941f);
    glBegin(GL_POLYGON);
        glVertex3f (-15, 65, 0.0);
        glVertex3f (15, 65, 0.0);
        glVertex3f (15, 85, 0.0);
        glVertex3f (-15, 85, 0.0);
    glEnd();

    // mouth
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f( -5,70);
    glVertex2f( 5,70);
glEnd();

// left eye
glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-12, 75, 0.0);
        glVertex3f (-5, 75, 0.0);
        glVertex3f (-8, 78, 0.0);
    glEnd();

    // right eye
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex3f (5, 75, 0.0);
        glVertex3f (12, 75, 0.0);
        glVertex3f (8, 78, 0.0);
    glEnd();



/*  don't wait!
 *  start processing buffered OpenGL routines
 */
    glFlush ();
}

void init (void)
{
/*  select clearing (background) color       */
    glClearColor (0.0, 0.0, 0.0, 0.0);

/*  initialize viewing values  */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}

/*
 *  Declare initial window size, position, and display mode
 *  (single buffer and RGBA).  Open window with "hello"
 *  in its title bar.  Call initialization routines.
 *  Register callback function to display graphics.
 *  Enter main loop and process events.
 */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (460, 460);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;   /* ISO C requires main to return int. */
}
