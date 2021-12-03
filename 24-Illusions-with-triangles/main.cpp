#include <GL/gl.h>
#include <GL/glut.h>

int triangles(int x,int y,unsigned r,unsigned b,unsigned g)
 {
     glColor3f(r,b,g);
     // Triangles
     glBegin(GL_TRIANGLES);

        glVertex3f (x-10, y+10 , 0.0);
        glVertex3f (x+20, y+10, 0.0);
        glVertex3f (x+20, y+60, 0.0);
        glVertex3f (x-10, y+60, 0.0);
    glEnd();

 }
int background(int x,int y,unsigned r,unsigned b,unsigned g)
 {
     glColor3f(r,b,g);
     glBegin(GL_POLYGON);//sky

        glVertex3f (x-100, y+20 , 0.0);
        glVertex3f (x+100, y+20, 0.0);
        glVertex3f (x+100, y+100, 0.0);
        glVertex3f (x-100, y+100, 0.0);
    glEnd();

 }

void display(void)
{
/*  clear all pixels  */
    glClear (GL_COLOR_BUFFER_BIT);

/*  draw white polygon (rectangle) with corners at
 *  (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
 */
 //surface
 sky(0,0,.7,.9,1);//sky
 road(0,0,.3,.3,.3);
 grass(0,0,.3,.7,.1);

//#1
 buildings(10,10,0.7,0.7,0.6);
 windows(10,10,1,1,.8);windows(10,20,1,1,.8);windows(10,30,1,1,.8);windows(10,40,1,1,.8);windows(10,50,1,1,.8);
 windows(30,10,1,1,.8);windows(30,20,1,1,.8); windows(30,30,1,1,.8);windows(30,40,1,1,.8);windows(30,50,1,1,.8);

 shade(10,10,.8,.8,.7);

//#2
 buildings(50,10,.8,.7,.8);
 windows(50,10,.9,.5,.2);windows(50,20,.9,.5,.2);windows(50,30,.9,.5,.2);windows(50,40,.9,.5,.2);windows(50,50,.9,.5,.2);
 windows(70,10,.9,.5,.2);windows(70,20,.9,.5,.2); windows(70,30,.9,.5,.2);windows(70,40,.9,.5,.2);windows(70,50,.9,.5,.2);

    glFlush ();
}

void init (void)
{
/*  select clearing (background) color       */
    glClearColor (1.0, 1.0, 1.0, 0.0);

/*  initialize viewing values  */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (650, 750);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;   /* ISO C requires main to return int. */
}
