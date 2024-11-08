#include<GL/glut.h>

void mydisplay()
{
   glClear(GL_COLOR_BUFFER_BIT); 
   glLoadIdentity();  //resets modelview matrix
   
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();  //resets projection matrix
   //gluOrtho2D(-10,10,-10,10);
   gluOrtho2D(0,500,0,500);
   glMatrixMode(GL_MODELVIEW);  

  //glTranslatef(4.0,4.0,0.0);
  //glScalef(0.5,2.0,0.0);
  //glRotatef(10.0,0.0,0.0,1.0);
  
  //glTranslatef(100.0,100.0,0.0);
 // glScalef(0.5,2.0,0.0);
 glRotatef(10.0,0.0,0.0,1.0);
  
   
   glBegin(GL_TRIANGLES);
   /*glVertex2f(0.0,5.0);
   glVertex2f(4.0,-3.0);
   glVertex2f(-4.0,-3.0);*/
   
   glVertex2f(100.0,50.0);
   glVertex2f(200.0,50.0);
   glVertex2f(150.0,150.0);
   
   glEnd();
   
   glFlush();
}

void init()
{
  glClearColor(0.0,0.0,0.0,1.0);
}

void reshape(int w, int h)
{
   glViewport(0,0,w,h);
  
}


int main(int argc,char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGB);
  glutInitWindowPosition(100,100);
  glutInitWindowSize(500,500);
  glutCreateWindow("Triangle");
  glutDisplayFunc(mydisplay);
  glutReshapeFunc(reshape);
  init();
  glutMainLoop();
}


