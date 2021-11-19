#include <GL/gl.h>
#include <GL/glut.h>

void utilities(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3){
    glBegin(GL_POLYGON);
            glVertex3f (x, y, 0.0);
            glVertex3f (x1, y1, 0.0);
            glVertex3f (x2, y2, 0.0);
            glVertex3f (x3, y3, 0.0);
}

void building(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3){
    glBegin(GL_POLYGON);
            glVertex3f (x, y, 0.0);
            glVertex3f (x1, y1, 0.0);
            glVertex3f (x2, y2, 0.0);
            glVertex3f (x3, y3, 0.0);
}

void windows(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3){
    glBegin(GL_POLYGON);
            glVertex3f (x, y, 0.0);
            glVertex3f (x1, y1, 0.0);
            glVertex3f (x2, y2, 0.0);
            glVertex3f (x3, y3, 0.0);
}

void display(void)
{
/*  clear all pixels  */
    glClear (GL_COLOR_BUFFER_BIT);

/*  draw white polygon (rectangle) with corners at
 *  (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
 */
   /*Ground Background Color */
    glColor3f (0, 0.7, 0.3);
    utilities(0,0,50,0,50,20,0,18);
    glEnd();

    /*Road Background Color */
    glColor3f (0.1, 0.3, 0.3);
    utilities(0,18,50,20,50,32,0,32);
    glEnd();


    /*Road Center Background Color */
    glColor3f (0.8, 1, 0.9);
    utilities(0,23.2,50,24.3,50,26,0,24.9);
    glEnd();

   /*Top Sky Background Color */
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f (0, 32, 0.0);
        glVertex3f (50, 32, 0.0);
    glColor3f (0.1, 0.6, 1.0);
        glVertex3f (50, 50, 0.0);
        glVertex3f (0, 50, 0.0);
    glEnd();

   /*Building 1 */
    glColor3f (0, 0.3, 0.3);
    building(10,32,15,32,15,42,10,42);
    building(15,32,16.5,32,16.5,40,15,42);

    /*Building 1  Bottom Windows*/
    glColor3f (0.3, 0.0, 0.0);
    glEnd();
    windows(11.0,33,12.2,33,12.2,34.5,11.0,34.5);
    glEnd();

    glColor3f (0.3, 0.0, 0.0);
    windows(14.0,33,12.8,33,12.8,34.5,14.0,34.5);
    glEnd();

    /*Building 1  Middle Windows*/
    glColor3f (0.3, 0.0, 0.0);
    windows(11.0,35.7,12.2,35.7,12.2,37.5,11.0,37.5);
    glEnd();

    glColor3f (0.3, 0.0, 0.0);
    windows(14.0,35.7,12.8,35.7,12.8,37.5,14.0,37.5);
    glEnd();

    /*Building 1  Top Windows*/
    glColor3f (0.3, 0.0, 0.0);
    windows(11,38.7,12.2,38.7,12.2,40.5,11.0,40.5);
    glEnd();

    glColor3f (0.3, 0.0, 0.0);
    windows(14,38.7,12.8,38.7,12.8,40.5,14.0,40.5);
    glEnd();

    /*Building 2 */

    glColor3f (0.3, 0.3, 0.3);
    building(18,32,23,32,23,42,18,42);
    building(23,32,24.5,32,24.5,40,23,42);
    glEnd();

    /*Building 2  Bottom Windows*/
    glColor3f (0.3, 0.0, 0.0);
    windows(19,33,20.2,33,20.2,34.5,19,34.5);
    glEnd();
    glColor3f (0.3, 0.0, 0.0);
    windows(22,33,20.8,33,20.8,34.5,22.0,34.5);
    glEnd();

    /*Building 2  Middle Windows*/
    glColor3f (0.3, 0.0, 0.0);
    windows(19,35.7,20.2,35.7,20.2,37.5,19,37.5);
    glEnd();
    glColor3f (0.3, 0.0, 0.0);
    windows(22,35.7,20.8,35.7,20.8,37.5,22.0,37.5);
    glEnd();

    /*Building 2  Top Windows*/
    glColor3f (0.3, 0.0, 0.0);
    windows(19,38.7,20.2,38.7,20.2,40.5,19,40.5);
    glEnd();
    glColor3f (0.3, 0.0, 0.0);
    windows(22,38.7,20.8,38.7,20.8,40.5,22.0,40.5);
    glEnd();

    /*Building 3 */
    glColor3f (0.4, 0.4, 0.6);
    building(26,32,31,32,31,42,26,42);
    building(31,32,32.5,32,32.5,40,31,42);
    glEnd();

    /*Building 3  Bottom Windows*/
    glColor3f (0.3, 0.0, 0.0);
    windows(27,33,28.2,33,28.2,34.5,27,34.5);
    glEnd();
    glColor3f (0.3, 0.0, 0.0);
    windows(30,33,28.8,33,28.8,34.5,30,34.5);
    glEnd();

    /*Building 3  Middle Windows*/
    glColor3f (0.3, 0.0, 0.0);
    windows(27,35.7,28.2,35.7,28.2,37.5,27,37.5);
    glEnd();
    glColor3f (0.3, 0.0, 0.0);
    windows(30,35.7,28.8,35.7,28.8,37.5,30,37.5);
    glEnd();

    /*Building 3  Top Windows*/
    glColor3f (0.3, 0.0, 0.0);
    windows(27,38.7,28.2,38.7,28.2,40.5,27,40.5);
    glEnd();
    glColor3f (0.3, 0.0, 0.0);
    windows(30,38.7,28.8,38.7,28.8,40.5,30,40.5);
    glEnd();


    glFlush ();
}

void init (void)
{
/*  select clearing (background) color       */
    glClearColor (0.0, 0.0, 0.0, 0.0);

/*  initialize viewing values  */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 50.0, 0.0, 50.0, -1.0, 1.0);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Lab Report 03");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;   /* ISO C requires main to return int. */
}
