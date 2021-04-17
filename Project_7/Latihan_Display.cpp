#include <windows.h>
#include <GL/gl.h> 
#include <GL/glut.h> 
#include <stdio.h>

void display(void) {
	
glClearColor (1.0f, 1.0f, 1.0f, 1.0f);   
glClear (GL_COLOR_BUFFER_BIT); 
glColor3f (0.0, 0.0, 0.0);
glPointSize(5.0f);
glBegin(GL_POINTS);
glVertex3f (600, 400, 0.0);  //titik tengah
glVertex3f (200, 200, 0.0);  //titik kiri bawah
glVertex3f (1000, 200, 0.0); //titik kanan bawah
glVertex3f (200, 600, 0.0);  //titik kiri atas
glVertex3f (1000, 600, 0.0); //titik kanan atas
glEnd();
glFlush ();    
}

void reshape (int w, int h) {
	
glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
gluOrtho2D (0.0, (GLdouble) w, 0.0, (GLdouble) h);
}

int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
    printf("Menampilkan Titik");
    glutDisplayFunc(display); 
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1200, 800);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Partikum Titik Dengan Display - NANDA HADY MULYA");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
    return 0; 
    }

