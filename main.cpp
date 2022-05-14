// Nama File : main.cpp
// Deskripsi : Tempat penggabungan seluruh modul dari tampilan
// Pembuat : Attaf Riski Putra Ramadhan
// Tanggal : Sabtu, 15 Maret 2022
// Lab : GKV B2

#include "truk.h" // modul truk
#include "mobil.h" // modul truk
#include "jalan.h" // modul jalan
#include "pohon.h" // modul phon


#include <math.h>
#include <iostream>
#ifdef __APPLE__ // untuk program yang dijalankan di MacOS
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#else // untuk program yang dijalankan di Windows
#include <GL/glut.h>
#endif

using namespace std;

float angle=0.0, deltaAngle = 0.0, addX = 0.0, addZ = 0.0, rratio;
float x=0.0f,y=25.0f,z=50.0f;
float lx=.0f,ly=0.0f,lz=30.0f;
int h,w;

// nyawa
int nyawa = 5;


float radius = 40.0, phi = 3.1415, theta = 0.0;
// untuk kamera bergerak orbit pada truk
float eyeX = x + radius*cos(phi)*sin(theta);
float eyeZ = z + radius*cos(theta);

// posisi random
float posisiXMobil = rand() % 30 - 15, posisiZMobil = -700.0;
float posisiXCone = rand() % 30 - 15, posisiZCone = -50.0;

// posisi truk
float posisiXTrukKekiri = 0.0; // sekaligus jarak btas
float posisiXTrukKekanan = 0.0; // sekaligus jarak btas
float deltaXTruk = 0.0;
float perubahanXTruk = 0.0;
float trukSpeed = 0.2;
float posisiXTrukUntukCollision = 0;
int lagiketabrak = 1;

float batasTrukKanan = -20;
float batasTrukKiri = 20;

// posisi mobil

// random warna mobil
float r = rand() % 2, g = rand() % 2, b = rand() % 2;

//posisi jalan
float posisiXJalan1 = 0.0;
float posisiXJalan2 = 0.0;
float posisiXJalan3 = 0.0;
float posisiXJalan4 = 0.0;

void Reshape(int w1, int h1)
{
    if(h1 == 0) h1 = 1;
    w = w1;
    h = h1;
    rratio = 1.0f * w / h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0, 0, w, h);
    gluPerspective(50, rratio, 0.1, 1000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(
              eyeX, y, eyeZ, // posisi kamera
              lx, ly, lz, // target shoot
              0.0f, 1.0f, 0.0f); // up

}

void orientMe(float ang)
{
    theta = ang;
    
    // untuk kamera bergerak orbit pada truk
    eyeX = x + radius*cos(phi)*sin(theta);
    eyeZ = z + radius*cos(theta);
    
   
    glLoadIdentity();
    gluLookAt(eyeX, y , eyeZ, lx, ly, lz, 0.0f, 1.0f, 0.0f);

}

void trukKekananKekiri(float xTruk)
{
        perubahanXTruk = xTruk;
}

// sumber cahaya
float l[] = { 100.0, 80.0, 0.0 }; // koordinat sumber cahaya
float n[] = { 0.0, -2.0, 0.0 };
float e[] = { 0.0, 0.2, 0.0 };




//membuat proyeksi bayangan
void glShadowProjection(float * l, float * e, float * n)
{
    float d, c;
    float mat[16];
    d = n[0]*l[0] + n[1]*l[1] + n[2]*l[2];
    c = e[0]*n[0] + e[1]*n[1] + e[2]*n[2] - d;
    mat[0] = l[0]*n[0]+c;
    // membuat matrik. OpenGL menggunakan kolom matrik
    mat[4] = n[1]*l[0];
    mat[8] = n[2]*l[0];
    mat[12] = -l[0]*c-l[0]*d;
    mat[1] = n[0]*l[1];
    mat[5] = l[1]*n[1]+c;
    mat[9] = n[2]*l[1];
    mat[13] = -l[1]*c-l[1]*d;
    mat[2] = n[0]*l[2];
    mat[6] = n[1]*l[2];
    mat[10] = l[2]*n[2]+c;
    mat[14] = -l[2]*c-l[2]*d;
    mat[3] = n[0];
    mat[7] = n[1];
    mat[11] = n[2];
    mat[15] = -d;
    glMultMatrixf(mat); // kalikan matrik
}

void renderBitmapString(float x,float y,float z,char *string) {
  char *c;

  glRasterPos3f(x, y,z);
  for (c=string; *c != '\0'; c++) {
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
  }
}

void RenderScore() {
    char s[100];
    glPushMatrix();
    sprintf(s,"Nyawa: %d", nyawa);
    glColor3f(1,1,1);
    renderBitmapString(5, 30, 0,s); //y axis inverted
    glPopMatrix();
}

void setOrthographicProjection() {
    // switch to projection mode
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    // set a 2D orthographic projection
    gluOrtho2D(0, w, h, 0);
    glMatrixMode(GL_MODELVIEW);
}

void restorePerspectiveProjection() {
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
}

void Display()
{
    if(deltaAngle)
    {
        angle += deltaAngle;
        orientMe(angle);
        
    }
    
    if(deltaXTruk == -trukSpeed) // enabler ke kanan
    {
        if(posisiXTrukKekanan >= batasTrukKanan) // mentok jalan kanan kanan
        {
            //collision nyawa
            posisiXTrukUntukCollision += 0.2;
            
            // collision jalan
            posisiXTrukKekanan += deltaXTruk;
            posisiXTrukKekiri += deltaXTruk; // agar bisa bergerak ke kiri walaupun mentok kanan
            trukKekananKekiri(posisiXTrukKekanan);
        }
    }
    else if (deltaXTruk == trukSpeed) // enabler ke kiri
    {
        if(posisiXTrukKekiri <= batasTrukKiri) // mentok jalan kanan kiri
        {
            //collision nyawa
            posisiXTrukUntukCollision -= 0.2;
            
            // collision jalan
            posisiXTrukKekanan += deltaXTruk ; // agar bisa bergerak ke kanan walaupun mentok kiri
            posisiXTrukKekiri += deltaXTruk;
            trukKekananKekiri(posisiXTrukKekiri);
        }
        
    }
        
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glLightfv(GL_LIGHT0, GL_POSITION, l);
    glDisable(GL_CULL_FACE);
    glDisable(GL_LIGHTING);
    
    
    // membuat matahari
    glPushMatrix();
    glColor3f(1, 1, 0);
    glTranslatef(400, 20, -500);
    glutSolidSphere(10.0, 32, 32);
    glPopMatrix();
    
    
    
   
    
    // pergerakan truk kanan kiri
    
    
    //truk tanpa roda
    glPushMatrix();
    glTranslatef(0, 0, 40);
    glRotatef(-90, 0.0, 1.0, 0.0);
    glTranslatef(0, 0, perubahanXTruk);
    truk();
    glPopMatrix();

    // gambar bayangan
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glColor3f(0.0,0.0,0.0);
    // truck
        glPushMatrix();
        glTranslatef(0, 0, 40);
        glRotatef(-90, 0.0, 1.0, 0.0);
        glTranslatef(0, 0, perubahanXTruk);
        trukBayangan();
        glPopMatrix();
    //
    glPopMatrix();
    
    //sekarang gambar bayangan yang muncul
    glPushMatrix();
    glShadowProjection(l,e,n);
    glDisable(GL_LIGHTING);
    glColor3f(0.0,0.0,0.0);
    // truck
        glPushMatrix();
        glTranslatef(0, 0, 40);
        glRotatef(-90, 0.0, 1.0, 0.0);
        glTranslatef(0, 0, perubahanXTruk);
        trukBayangan();
        glPopMatrix();
    glPopMatrix();
    
    
    // ============ pohon
    glPushMatrix();
    glTranslatef(30, 0, -10);
    pohon1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-50, 0, -30);
    pohon2();
    glPopMatrix();
    
    // ============ masjid
    glPushMatrix();
    glTranslatef(50, 0, -100);
    glRotatef(-90, 0, 1, 0);
    masjid();
    glPopMatrix();
    
    // ============ jalan raya bergerak
    
    Jalan jalan2[3];
    Jalan jalan3[3];
    Jalan jalan4[3];
    
    Jalan jalan5[3];
    Jalan jalan6[3];
    Jalan jalan7[3];
    
    Jalan jalan8[3];
    Jalan jalan9[3];
    Jalan jalan10[3];
   
    
    
    if(posisiXJalan1 > 300.0 )
    {
        posisiXJalan1 = -300;
    }
    else
    {
        
        posisiXJalan1 += 3.5;
    }
    
    if(posisiXJalan2 > 300.0 )
    {
        posisiXJalan2 = -300;
    }
    else
    {
        posisiXJalan2 += 3.5;
    }
    
    if(posisiXJalan3 > 300.0 )
    {
        posisiXJalan3 = -300;
    }
    else
    {
        posisiXJalan3 += 3.5;
    }
    
    //dasar
    glPushMatrix();
    glColor3f(0.7,0.7,0.7);
    pembuatSegiEmpat(25, -0.2, -100,
                     25, -0.2, 100,
                     -25, -0.2, 100,
                     -25, -0.2, -100);
    glPopMatrix();
    
    
    // muslti-jalan raya 1
    glPushMatrix();
    glTranslatef(0 , 0, posisiXJalan1);
    // jalan raya 3
    glPushMatrix();
       glTranslatef(0, 0, -200);
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        jalan2[0].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        jalan2[1].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, -15);
        jalan2[2].jalan();
        glPopMatrix();
    glPopMatrix();
    
    // jalan raya 2
    glPushMatrix();
       glTranslatef(0, 0, 0);
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        jalan3[0].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        jalan3[1].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, -15);
        jalan3[2].jalan();
        glPopMatrix();
    glPopMatrix();
    
    // jalan raya 1
    glPushMatrix();
        glTranslatef(0, 0, 200);
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        jalan4[0].jalan();
        glPopMatrix();
        
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        jalan4[1].jalan();
        glPopMatrix();
            
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, -15);
        jalan4[2].jalan();
        glPopMatrix();
    glPopMatrix();
    glPopMatrix();
   
    // muslti-jalan raya 2
    glPushMatrix();
    glTranslatef(0 , 0, posisiXJalan2);
    // jalan raya 3
    glPushMatrix();
       glTranslatef(0, 0, -800);
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        jalan5[0].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        jalan5[1].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, -15);
        jalan5[2].jalan();
        glPopMatrix();
    glPopMatrix();
    
    // jalan raya 2
    glPushMatrix();
       glTranslatef(0, 0, -600);
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        jalan6[0].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        jalan6[1].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, -15);
        jalan6[2].jalan();
        glPopMatrix();
    glPopMatrix();
    
    // jalan raya 1
    glPushMatrix();
        glTranslatef(0, 0, -400);
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        jalan7[0].jalan();
        glPopMatrix();
        
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        jalan7[1].jalan();
        glPopMatrix();
            
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, -15);
        jalan7[2].jalan();
        glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    
    // muslti-jalan raya 3
    glPushMatrix();
    glTranslatef(0 , 0, posisiXJalan3);
    // jalan raya 3
    glPushMatrix();
       glTranslatef(0, 0, -1400);
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        jalan8[0].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        jalan8[1].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, -15);
        jalan8[2].jalan();
        glPopMatrix();
    glPopMatrix();
    
    // jalan raya 2
    glPushMatrix();
       glTranslatef(0, 0, -1200);
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        jalan9[0].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        jalan9[1].jalan();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, -15);
        jalan9[2].jalan();
        glPopMatrix();
    glPopMatrix();
    
    // jalan raya 1
    glPushMatrix();
        glTranslatef(0, 0, -1000);
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        jalan10[0].jalan();
        glPopMatrix();
        
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        jalan10[1].jalan();
        glPopMatrix();
            
        glPushMatrix();
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, -15);
        jalan10[2].jalan();
        glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    
    //pinggiran jalan
    glPushMatrix();
    glRotatef(90, 0, 1, 0);
    jalan2[0].pinggiranJalan();
    glPopMatrix();
    
    // posisi random mobil berkurang tiap iterasi, dan diatur ulang ketika > 150.0
    if(posisiZMobil > 150.0 ) // 150
    {
        posisiZMobil = -700.0 ;
        posisiXMobil = rand() % 40 - 20 ; // atur ulang posisi di sumbu x
        // warna mobil juga diubah
        r = (rand() % 11) * 0.1;
        g = (rand() % 11) * 0.1;
        b = (rand() % 11) * 0.1; // agar hasilnya 0.0 -- 1.0
    }
    else
    {
        posisiZMobil += 2.0;
    }
    
    // mobil bergerak dan posisi random
    glPushMatrix();
    // cukup bergerak di sumbu x dan z
    glTranslatef(posisiXMobil, 1.7, posisiZMobil);
    glScalef(0.15, 0.15, 0.15);
    glRotatef(90, 0.0, 1.0, 0.0);
    Mobil(r,g,b);
    glPopMatrix();
    
    
    // collision antara truk dan mobil
    // penjelasan
    // lebar truk 5
    // panjang truk perkiraan 20
    // ketika mobil berada dalam area truk maka nyawa berkurang
    
//    cout << "\nposisiXTruk : " << posisiXTrukUntukCollision;
//    cout << "\nposisiXMobil : " << posisiXMobil;
    // (posisiZMobil >= 30 && posisiZMobil <= 50) &&
    if ( (posisiZMobil >= 30 && posisiZMobil <= 50) && (posisiXMobil-4 <= posisiXTrukUntukCollision && posisiXMobil+4 >= posisiXTrukUntukCollision) && (lagiketabrak) )
    {
        // biar nyawa gak terus-terusan habis
        lagiketabrak = 0;
        nyawa--;
    }
    // agar tidak terus-terusan nyawa habis
    if(posisiZMobil > 50)
    {
        lagiketabrak = 1;
    }
    
    //nyawa dan score
        setOrthographicProjection();
        glPushMatrix();
        glLoadIdentity();
        RenderScore();
        glPopMatrix();
        restorePerspectiveProjection();
    
    // akhiran
    glutSwapBuffers();
    glFlush();
    
    
}

void keyboardKontrolPress(unsigned char key, int x , int y)
{
    switch (key) {
            // karena truk dirotate sehingga yang berubah sebenarnya adalah sumbu z
        case 'a':
            deltaXTruk = trukSpeed; // truk kekiri // sebenarnya ke depan
            break;
        case 'd':
            deltaXTruk = -trukSpeed; // truk kekanan // sebenarnya ke belakang
            break;
        default:
            break;
    }
}

void keyboardKontrolRelease(unsigned char key, int x , int y)
{
    switch (key) {
            // karena truk dirotate sehingga yang berubah sebenarnya adalah sumbu z
        case 'a':
            deltaXTruk = 0.0; // truk kekiri
            break;
        case 'd':
            deltaXTruk = 0.0; // truk kekanan
            break;
        default:
            break;
    }
}



void pressKey(int k,int x, int y)
{
    switch (k) {
        case GLUT_KEY_LEFT:
            deltaAngle = -0.03f;
            break;
        case GLUT_KEY_RIGHT:
            deltaAngle = 0.03f;
            break;
        default:
            break;
    }
}

void releaseKey(int k,int x, int y)
{
    switch (k) {
        case GLUT_KEY_LEFT:
            if (deltaAngle < 0.0f)
                deltaAngle = 0.0f;
            break;
        case GLUT_KEY_RIGHT:
            if (deltaAngle > 0.0f )
                deltaAngle = 0.0f;
            break;
        default:
            break;
    }
}

const GLfloat light_ambient[] = {0.5f,0.5f,0.5f,0.0f};
const GLfloat light_diffuse[] = {1.0f,1.0f,1.0f,1.0f};
const GLfloat light_specular[] = {1.0f,1.0f,1.0f,1.0f};
const GLfloat light_position[] = {0.0f,20.0f,10.0f,1.0f};
const GLfloat mat_ambient[] = {0.7f,0.7f,0.7f,1.0f};
const GLfloat mat_diffuse[] = {0.8f,0.8f,0.8f,1.0f};
const GLfloat mat_specular[] = {1.f,1.f,1.f,1.0f};
const GLfloat high_shininess[] = {100.f};

void lighting()
{
    glDepthFunc(GL_LESS);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_TEXTURE_2D);
    glMatrixMode(GL_PROJECTION);
    
    glLoadIdentity();
    gluPerspective(60.0f, 1.0, 1.0, 400.0);
    
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
}

void init(void)
{
    glEnable(GL_DEPTH_TEST);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

int main(int argc,char **argv)
{
    glutInit(&argc, argv);
    //aktifkan depth
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(1280, 960);
    glutCreateWindow("Electric double container truck");
    glutIgnoreKeyRepeat(1);
    glutKeyboardFunc(keyboardKontrolPress);
    glutKeyboardUpFunc(keyboardKontrolRelease);
    glutSpecialFunc(pressKey);
    glutSpecialUpFunc(releaseKey);
    glClearColor(0.0, 0.5, 0.7, 0.0);
    glutDisplayFunc(Display);
    glutIdleFunc(Display);
    glutReshapeFunc(Reshape);
    
    // CAHAYA
    
    
    lighting();
    init();
    
    // Reset koordinat sebelum dimodifikasi/diubah
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -150.0);
    
    glutMainLoop();
    return 0;
}
