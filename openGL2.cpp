#include<GL/glut.h>

void mydisplay()
{
   glClear(GL_COLOR_BUFFER_BIT); 
   glLoadIdentity();  //resets modelview matrix
   
  glBegin(GL_QUADS);
  
  glVertex2f(2.0,2.0);
 glVertex2f(6.0,2.0);
  glVertex2f(6.0,6.0);
  glVertex2f(2.0,6.0);

  //glVertex2f(0.0,5.0);
 // glVertex2f(4.0,-3.0);
 //glVertex2f(-4.0,-3.0);
   
   glEnd();

 /*glBegin(GL_POLYGON);
  
  glVertex2f(2.0,2.0);
  glVertex2f(8.0,2.0);
  glVertex2f(8.0,6.0);
  glVertex2f(5.0,8.0);
  glVertex2f(2.0,6.0);

 glEnd();*/


   
   glFlush();
}

void init()
{
  glClearColor(0.0,0.0,0.0,1.0);
}

void reshape(int w, int h)
{
   glViewport(0,0,w,h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();  //resets projection matrix
   gluOrtho2D(0,10,0,10);
   glMatrixMode(GL_MODELVIEW);  
}



int main(int argc,char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGB);
  glutInitWindowPosition(200,200);
  glutInitWindowSize(500,500);
  glutCreateWindow("Triangle");
  glutDisplayFunc(mydisplay);
  glutReshapeFunc(reshape);
  init();
  glutMainLoop();
}

