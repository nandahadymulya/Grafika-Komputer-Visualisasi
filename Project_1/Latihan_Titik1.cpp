#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>

void display(void)
{
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POINTS);
	glColor3f(0.0,0.0,0.0);
		glVertex3f(-0.8,-0.8,0.0);
		glVertex3f(-0.8,0.8,0.0);
		glVertex3f(0.8,0.8,0.0);
		glVertex3f(0.8,-0.8,0.0);
		glVertex3f(0.0,0.0,0.0);
glEnd();
glFlush();
}
int main(int argc,char*argv[]){
	  glutInit(&argc, argv);
	  printf("Menampilkan titik");
	  glutCreateWindow("NANDA HADY MULYA");
	  glutDisplayFunc(display);
	  glutMainLoop();
	  return 0;
}
