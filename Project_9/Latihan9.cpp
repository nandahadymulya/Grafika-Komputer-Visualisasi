#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/gl.h> 
#include <math.h>

int Xa1,Xb1,Xc1,Xd1,
    Ya1,Yb1,Yc1,Yd1;
    
int rotasi_x, rotasi_y; //nilai rotasi
   
int X_pindah, Y_pindah;
  
  //variabel translasi  
int Xa1pindah,Xb1pindah,Xc1pindah,Xd1pindah,
    Ya1pindah,Yb1pindah,Yc1pindah,Yd1pindah;
    
    //variabel rotasi
int Xa1_rotasi,Xb1_rotasi,Xc1_rotasi,Xd1_rotasi,
    Ya1_rotasi,Yb1_rotasi,Yc1_rotasi,Yd1_rotasi;   

    
void object(void){
	//backround
glClearColor(1.0f, 1.0f, 1.0f, 0.0f); 
glClear(GL_COLOR_BUFFER_BIT);

//titik awal
glColor3f(1.0, 1.0, 0.0);
glLineWidth(5.0f);
glBegin(GL_POLYGON);
glVertex3f(Xa1, Ya1, 0.0);
glVertex3f(Xb1, Yb1, 0.0);
glVertex3f(Xd1, Yd1, 0.0);
glVertex3f(Xc1, Yc1, 0.0);
glEnd();

//translasi
glColor3f(0.0, 1.0, 0.0);
glLineWidth(5.0f);
glBegin(GL_POLYGON);
glVertex3f(Xa1pindah, Ya1pindah, 0.0);
glVertex3f(Xb1pindah, Yb1pindah, 0.0);
glVertex3f(Xd1pindah, Yd1pindah,0.0);
glVertex3f(Xc1pindah, Yc1pindah,0.0);
glEnd();

//rotasi
glColor3f(1.0, 0.0, 1.0);
glLineWidth(5.0f);
glBegin(GL_POLYGON);
glVertex3f(Xa1_rotasi, Ya1_rotasi, 0.0);
glVertex3f(Xb1_rotasi, Yb1_rotasi, 0.0);
glVertex3f(Xd1_rotasi, Yd1_rotasi,0.0);
glVertex3f(Xc1_rotasi, Yc1_rotasi,0.0);
glEnd();
	

glFlush();     
}

void reshape(int lebar, int tinggi){
glViewport(0,0,(GLsizei)lebar, (GLsizei)tinggi);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D (0.0, (GLdouble)lebar, 0.0,(GLdouble)tinggi);
}

int main(int argc, char *argv[]){
    printf("\n================================");
    printf("\nInput Nilai Titik Koordinat Objek");
    printf("\n================================");
    
    printf("\nMasukan Nilai X Titik 1 = ");
    scanf("%i",&Xa1);
    printf("\nMasukan Nilai Y Titik 1 = ");
    scanf("%i",&Ya1);
    
    printf("\nMasukan Nilai X Titik 2 = ");
    scanf("%i",&Xb1);
    printf("\nMasukan Nilai Y Titik 2 = ");
    scanf("%i",&Yb1);
    
    printf("\nMasukan Nilai X Titik 3 = ");
    scanf("%i",&Xc1);
    printf("\nMasukan Nilai Y Titik 3 = ");
    scanf("%i",&Yc1);

	printf("\nMasukan Nilai X Titik 4 = ");
    scanf("%i",&Xd1);
    printf("\nMasukan Nilai Y Titik 4 = ");
    scanf("%i",&Yd1);
	
	printf("\n================================");
    printf("\nInput Nilai Translete");
    printf("\n================================");
    printf("\nMasukan Nilai X Transalsi = ");
    scanf("%i",&X_pindah);
    printf("\nMasukan Nilai Y Transalsi = ");
    scanf("%i",&Y_pindah);
      
    printf("\n================================");
    printf("\nInput Nilai Rotasi");
    printf("\n================================");
    printf("\nMasukan Nilai rotasi Sumbu X = ");
    scanf("%i",&rotasi_x);
    printf("\nMasukan Nilai rotasi Sumbu Y = ");
    scanf("%i",&rotasi_y);
    printf("\n================================");
    
 
 	//proses translasi 
    Xa1pindah = Xa1 + X_pindah;
    Ya1pindah = Ya1 + Y_pindah;
    
    Xb1pindah = Xb1 + X_pindah;
    Yb1pindah = Yb1 + Y_pindah;
    
    Xd1pindah = Xd1 + X_pindah;
    Yd1pindah = Yd1 + Y_pindah;
	
	Xc1pindah = Xc1 + X_pindah;
    Yc1pindah = Yc1 + Y_pindah; 
	
	//proses rotasi     
    Xa1_rotasi = rotasi_x + ((Xa1pindah-rotasi_x) * 0.9) - ((Ya1pindah-rotasi_y) * 0.5);
	Ya1_rotasi = rotasi_y + ((Xa1pindah-rotasi_x) * 0.5) + ((Ya1pindah-rotasi_y) * 0.9);
	
    Xb1_rotasi = rotasi_x + ((Xb1pindah-rotasi_x) * 0.9) - ((Yb1pindah-rotasi_y) * 0.5);
	Yb1_rotasi = rotasi_y + ((Xb1pindah-rotasi_x) * 0.5) + ((Yb1pindah-rotasi_y) * 0.9);
	     
    Xd1_rotasi = rotasi_x + ((Xd1pindah-rotasi_x) * 0.9) - ((Yd1pindah-rotasi_y) * 0.5);
	Yd1_rotasi = rotasi_y + ((Xd1pindah-rotasi_x) * 0.5) + ((Yd1pindah-rotasi_y) * 0.9);
	  
    Xc1_rotasi = rotasi_x + ((Xc1pindah-rotasi_x) * 0.9) - ((Yc1pindah-rotasi_y) * 0.5);
	Yc1_rotasi = rotasi_y + ((Xc1pindah-rotasi_x) * 0.5) + ((Yc1pindah-rotasi_y) * 0.9);

     
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(1200,600);
glutInitWindowPosition(100,100);
glutCreateWindow("Hasil Objek (18101152630036) Siti Rapita IF-1");
glutDisplayFunc(object);
glutReshapeFunc(reshape);
glutMainLoop();
return 0;    
}
