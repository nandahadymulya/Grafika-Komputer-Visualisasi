#include <windows.h> 
#include <GL/gl.h> 
#include <GL/glut.h> 
#include <stdio.h>

int Xa1, Xa2, Xa3, Xa4, //nilai titik awal
    Ya1, Ya2, Ya3, Ya4;
    
int pindah_x, pindah_y; //nilai perpindahan

int hasil_Xa1, hasil_Xa2, hasil_Xa3, hasil_Xa4, //hasil perpindahan titik
    hasil_Ya1, hasil_Ya2, hasil_Ya3, hasil_Ya4; 

void  display (void){
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

//posisi objek awal
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f(Xa1, Ya1, 0.0);
glVertex3f(Xa2, Ya2, 0.0);
glVertex3f(Xa3, Ya3, 0.0);
glVertex3f(Xa4, Ya4, 0.0);
glEnd();

//posisi hasil Translasi
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f(hasil_Xa1, hasil_Ya1, 0.0);
glVertex3f(hasil_Xa2, hasil_Ya2, 0.0);
glVertex3f(hasil_Xa3, hasil_Ya3, 0.0);
glVertex3f(hasil_Xa4, hasil_Ya4, 0.0);
glEnd();

      
glFlush();
}

void reshape(int lebar, int tinggi){
glViewport(0,0,(GLsizei)lebar, (GLsizei) tinggi);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D (0.0, (GLdouble)lebar, 0.0,(GLdouble)tinggi);
}

int main(int argc, char *argv[]){
    printf("\nInput Nilai Titik Koordinat Objek");
    printf("\n================================");
    printf("\n         Titik Kordinat A       ");
    printf("\n================================");
    printf("\nMasukan Nilai X Titik A1 = ");
    scanf("%i",&Xa1);
    printf("\nMasukan Nilai Y Titik A1 = ");
    scanf("%i",&Ya1);
    printf("\n================================");
    
    printf("\n================================");
    printf("\n         Titik Kordinat B       ");
    printf("\n================================");
    printf("\nMasukan Nilai X Titik A2 = ");
    scanf("%i",&Xa2);
    printf("\nMasukan Nilai Y Titik A2 = ");
    scanf("%i",&Ya2);
    printf("\n================================");
    
	printf("\n================================");
    printf("\n         Titik Kordinat C       ");
    printf("\n================================");
    printf("\nMasukan Nilai X Titik A3 = ");
    scanf("%i",&Xa3);
    printf("\nMasukan Nilai Y Titik A3 = ");
    scanf("%i",&Ya3);
    printf("\n================================");
    
    printf("\n================================");
    printf("\n         Titik Kordinat D       ");
    printf("\n================================");
    printf("\nMasukan Nilai X Titik A4 = ");
    scanf("%i",&Xa4);
    printf("\nMasukan Nilai Y Titik A4 = ");
    scanf("%i",&Ya4);
    printf("\n================================");
    
    //buatkan input untuk nilai perpindahan
    printf("\n================================");
    printf("\n         Titik Translasi        ");
    printf("\n================================");
    printf("\nMasukan Nilai Translasi Sumbu X = ");
    scanf("%i",&pindah_x);
    printf("\nMasukan Nilai Translasi Sumbu Y = ");
    scanf("%i",&pindah_y);
    printf("\n================================");
    
    hasil_Xa1 = Xa1 + pindah_x; //proses transalasi titik A
    hasil_Ya1 = Ya1 + pindah_y;
    
    hasil_Xa2 = Xa2 + pindah_x; //proses transalasi titik B
    hasil_Ya2 = Ya2 + pindah_y;
    
    hasil_Xa3 = Xa3 + pindah_x; //proses transalasi titik C
    hasil_Ya3 = Ya3 + pindah_y;
    
    hasil_Xa4 = Xa4 + pindah_x; //proses transalasi titik D
    hasil_Ya4 = Ya4 + pindah_y;
    
    
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(1200,600);
glutInitWindowPosition(100,100);
glutCreateWindow("Hasil Objek");
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();
return 0;    
}
