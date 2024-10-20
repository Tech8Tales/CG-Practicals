// #include<GL/gl.h>
// #include<GL/glu.h>
#include<GL/glut.h>

void mydisplay()
{
   glClear(GL_COLOR_BUFFER_BIT); 
   glLoadIdentity();
   glFlush();
}

void init()
{
  glClearColor(1.0,0.0,0.0,1.0);
}


int main(int argc,char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGB);
  glutInitWindowPosition(200,200);
  glutInitWindowSize(400,400);
  glutCreateWindow("My first Window");
  glutDisplayFunc(mydisplay);
  init();
  glutMainLoop();
}





