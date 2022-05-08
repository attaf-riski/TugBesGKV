// Nama File : truk.cpp
// Deskripsi : modul truk
// Pembuat : Attaf Riski Putra Ramadhan
// Tanggal : Jumat, 15 April 2022
// Lab : GKV B2

#include <math.h>

#ifdef __APPLE__ // untuk program yang dijalankan di MacOS
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#else // untuk program yang dijalankan di Windows
#include <GL/glut.h>
#endif

void pembuatSegiEmpat(
                      float x1,float y1, float z1,
                      float x2,float y2, float z2,
                      float x3,float y3, float z3,
                      float x4,float y4, float z4 )
{
    glBegin(GL_QUADS);
    glVertex3f(x1, y1, z1);
    glVertex3f(x2, y2, z2);
    glVertex3f(x3, y3, z3);
    glVertex3f(x4, y4, z4);
    glEnd();
}

void boxTrukPertama()
{
    //depan
    glColor3f(0.2, 0.8, 0.2);
    glPushMatrix();
        glTranslatef(0, 0, 3);
        // panjanga 10 lebar 5
        pembuatSegiEmpat(
                         -5.0f, 1.0f, .0f,
                         5.0f, 1.0f, .0f,
                         5.0f, 5.0f, .0f,
                         -5.0f, 5.0f, .0f
                         );
    glPopMatrix();

    //atas
    glPushMatrix();
        glRotated(-90,1, 0, 0);
        glTranslatef(0, -4, 5);
        pembuatSegiEmpat(
                         -5.0f, 1.0f, .0f,
                         5.0f, 1.0f, .0f,
                         5.0f, 6.0f, .0f,
                         -5.0f, 6.0f, .0f
                         );
        glEnd();
    glPopMatrix();

    //belakang
    glPushMatrix();
        glRotated(-180,1, 0, 0);
        glTranslatef(0, -6, 2);
        pembuatSegiEmpat(
                         -5.0f, 1.0f, .0f,
                         5.0f, 1.0f, .0f,
                         5.0f, 5.0f, .0f,
                         -5.0f, 5.0f, .0f
                         );
    glPopMatrix();

    //bawah
    glPushMatrix();
        glRotated(90,1, 0, 0);
        glTranslatef(0, -3, -1);
        pembuatSegiEmpat(
                         -5.0f, 1.0f, .0f,
                         5.0f, 1.0f, .0f,
                         5.0f, 6.0f, .0f,
                         -5.0f, 6.0f, .0f
                         );
    glPopMatrix();


    //hiasan
    glColor3f(0, 1, 0);
    glPushMatrix();
        glTranslatef(-5.5, 0, 0);
        glRotated(-90,1, 0, 0);
        glTranslatef(0, -4, 5);
        pembuatSegiEmpat(
                         .0f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 6.0f, .0f,
                         .0f, 6.0f, .0f
                         );
    glPopMatrix();

    //
    glPushMatrix();
        glTranslatef(-5.5, 0, 0);
        glRotated(-90,1, 0, 0);
        glTranslatef(0, -4, 5.5);
        pembuatSegiEmpat(
                         .0f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 6.0f, .0f,
                         .0f, 6.0f, .0f
                         );
    glPopMatrix();

    //
    glPushMatrix();
        glTranslatef(-5.5, 4, -2);
        pembuatSegiEmpat(
                         .0f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 1.5f, .0f,
                         .0f, 1.5f, .0f
                         );
    glPopMatrix();

    //
    glPushMatrix();
        glTranslatef(-5.5, 4, 3);
        pembuatSegiEmpat(
                         .0f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 1.5f, .0f,
                         .0f, 1.5f, .0f
                         );
    glPopMatrix();


    glColor3f(0., 0., 0.);
    //kiri
    glPushMatrix();
        glRotated(-90,0, 1, 0);
        glTranslatef(.5, 0, 5);
        pembuatSegiEmpat(
                         -2.5f, 1.0f, .0f,
                         2.5f, 1.0f, .0f,
                         2.5f, 5.0f, .0f,
                         -2.5f, 5.0f, .0f
                         );
    glPopMatrix();

    //kanan
    glPushMatrix();
        glRotated(90,0, 1, 0);
        glTranslatef(-.5, 0, 5);
        pembuatSegiEmpat(
                         -2.5f, 1.0f, .0f,
                         2.5f, 1.0f, .0f,
                         2.5f, 5.0f, .0f,
                         -2.5f, 5.0f, .0f
                         );
    glPopMatrix();

}


void boxTrukKedua()
{
    //depan
    glColor3f(0.2, 0.8, 0.2);
    glPushMatrix();
        glTranslatef(11, 0, 3);
        // panjanga 10 lebar 5
        pembuatSegiEmpat(
                         -5.0f, 1.0f, .0f,
                         5.0f, 1.0f, .0f,
                         5.0f, 5.0f, .0f,
                         -5.0f, 5.0f, .0f
                         );
    glPopMatrix();

    //atas
    glPushMatrix();
        glRotated(-90,1, 0, 0);
        glTranslatef(11, -4, 5);
        pembuatSegiEmpat(
                         -5.0f, 1.0f, .0f,
                         5.0f, 1.0f, .0f,
                         5.0f, 6.0f, .0f,
                         -5.0f, 6.0f, .0f
                         );
        glEnd();
    glPopMatrix();

    //belakang
    glPushMatrix();
        glRotated(-180,1, 0, 0);
        glTranslatef(11, -6, 2);
        pembuatSegiEmpat(
                         -5.0f, 1.0f, .0f,
                         5.0f, 1.0f, .0f,
                         5.0f, 5.0f, .0f,
                         -5.0f, 5.0f, .0f
                         );
    glPopMatrix();

    //bawah
    glPushMatrix();
        glRotated(90,1, 0, 0);
        glTranslatef(11, -3, -1);
        pembuatSegiEmpat(
                         -5.0f, 1.0f, .0f,
                         5.0f, 1.0f, .0f,
                         5.0f, 6.0f, .0f,
                         -5.0f, 6.0f, .0f
                         );
    glPopMatrix();

    //kanan
    glColor3f(0., 0., 0.);
    glPushMatrix();
        glRotated(90,0, 1, 0);
        glTranslatef(-.5, 0, 16);
        pembuatSegiEmpat(
                         -2.5f, 1.0f, .0f,
                         2.5f, 1.0f, .0f,
                         2.5f, 5.0f, .0f,
                         -2.5f, 5.0f, .0f
                         );
    glPopMatrix();

    //kiri
    glPushMatrix();
        glRotated(-90,0, 1, 0);
        glTranslatef(.5, 0, -6);
        pembuatSegiEmpat(
                         -2.5f, 1.0f, .0f,
                         2.5f, 1.0f, .0f,
                         2.5f, 5.0f, .0f,
                         -2.5f, 5.0f, .0f
                         );
    glPopMatrix();

    //konektor ke gerbong belakang
    glColor3f(0.8, 0.8, 0.8);
    glPushMatrix();
        glTranslatef(5.5, 0, 0);
        glRotated(-90,1, 0, 0);
        glTranslatef(0, -2, 1);
        pembuatSegiEmpat(
                         -.5f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 2.0f, .0f,
                         -.5f, 2.0f, .0f
                         );
    glPopMatrix();

    //konektor ke kepala
    glPushMatrix();
        glTranslatef(5.5, 0, 0);
        glRotated(-90,1, 0, 0);
        glTranslatef(0, -2, 1.5);
        pembuatSegiEmpat(
                         -.5f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 2.0f, .0f,
                         -.5f, 2.0f, .0f
                         );
    glPopMatrix();

    //konektor ke kepala
    glPushMatrix();
        glTranslatef(5.5, 0, 0);
        pembuatSegiEmpat(
                         -.5f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 1.5f, .0f,
                         -.5f, 1.5f, .0f
                         );
    glPopMatrix();

    //konektor ke kepala
    glPushMatrix();
        glTranslatef(5.5, 0, 1);
        pembuatSegiEmpat(
                         -.5f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 1.5f, .0f,
                         -.5f, 1.5f, .0f
                         );
    glPopMatrix();


}

void kepalaTruk()
{
    //depan v1
    glColor3f(0.2, 0.8, 0.2);
    glPushMatrix();
        glTranslatef(-7.5, 0, 3);
        // panjanga 10 lebar 5
        pembuatSegiEmpat(
                         -1.0f, 1.0f, .0f,
                         2.0f, 1.0f, .0f,
                         2.0f, 4.5f, .0f,
                         -1.0f, 4.5f, .0f
                         );
    glPopMatrix();

    //depan v2
    glPushMatrix();
        glTranslatef(-10.5, 0, 3);
        // panjanga 10 lebar 5
        pembuatSegiEmpat(
                         1.0f, 1.0f, .0f,
                         2.0f, 1.0f, .0f,
                         2.0f, 4.5f, .0f,
                         1.0f, 3.f, .0f
                         );
    glPopMatrix();

    // belakang v1
    glPushMatrix();
        glRotated(-180,1, 0, 0);
        glTranslatef(-7.5, -5.5, 2);
        pembuatSegiEmpat(
                         -1.0f, 1.0f, .0f,
                         2.0f, 1.0f, .0f,
                         2.0f, 4.5f, .0f,
                         -1.0f, 4.5f, .0f
                         );
    glPopMatrix();

    // belakang v2
    glPushMatrix();
        glRotated(-180,1, 0, 0);
        glTranslatef(-10.5, -5.5, 2);
        pembuatSegiEmpat(
                         1.0f, 2.5f, .0f,
                         2.0f, 1.0f, .0f,
                         2.0f, 4.5f, .0f,
                         1.0f, 4.5f, .0f
                         );
    glPopMatrix();

    // kiri v1
    glPushMatrix();
        glTranslatef(-7.5, 0, 3);
        glRotated(-90,0, 1, 0);
        glTranslatef(-2.5, 0, 2);

        pembuatSegiEmpat(
                         -2.5f, 1.0f, .0f,
                         2.5f, 1.0f, .0f,
                         2.5f, 3.0f, .0f,
                         -2.5f, 3.0f, .0f
                         );
    glPopMatrix();

    // kiri v2
    glPushMatrix();
        glTranslatef(-7.5, 0, 3);
        glRotated(-90,0, 1, 0);
        glTranslatef(-2.5, 2.15, 2.55);
        glRotated(-34,1, 0, 0);

        pembuatSegiEmpat(
                         -2.5f, 1.0f, .0f,
                         2.5f, 1.0f, .0f,
                         2.5f, 2.8f, .0f,
                         -2.5f, 2.8f, .0f
                         );
    glPopMatrix();


    // atas
    glPushMatrix();
        glRotated(-90,1, 0, 0);
        glTranslatef(-7.5, -4, 4.5);
        pembuatSegiEmpat(
                         -1.0f, 1.0f, .0f,
                         2.0f, 1.0f, .0f,
                         2.0f, 6.f, .0f,
                         -1.0f, 6.f, .0f
                         );
        glEnd();
    glPopMatrix();

    // kanan

    glPushMatrix();
        glTranslatef(-5.5, 0, 0);
        glRotated(90,0, 1, 0);
        glTranslatef(-.5, 0, 0);
        pembuatSegiEmpat(
                         -2.5f, 1.0f, .0f,
                         2.5f, 1.0f, .0f,
                         2.5f, 4.5f, .0f,
                         -2.5f, 4.5f, .0f
                         );
    glPopMatrix();

    // bawah
    glPushMatrix();
        glRotated(90,1, 0, 0);
        glTranslatef(-5.5, -3, -1);
        pembuatSegiEmpat(
                         -4.f, 1.0f, .0f,
                         .0f, 1.0f, .0f,
                         .0f, 6.0f, .0f,
                         -4.f, 6.0f, .0f
                         );
    glPopMatrix();


    //konektor ke kepala
    glColor3f(0.8, 0.8, 0.8);
    glPushMatrix();
        glTranslatef(-5.5, 0, 0);
        glRotated(-90,1, 0, 0);
        glTranslatef(0, -2, 1);
        pembuatSegiEmpat(
                         .0f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 2.0f, .0f,
                         .0f, 2.0f, .0f
                         );
    glPopMatrix();

    //konektor ke kepala
    glPushMatrix();
        glTranslatef(-5.5, 0, 0);
        glRotated(-90,1, 0, 0);
        glTranslatef(0, -2, 1.5);
        pembuatSegiEmpat(
                         .0f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 2.0f, .0f,
                         .0f, 2.0f, .0f
                         );
    glPopMatrix();

    //konektor ke kepala
    glPushMatrix();
        glTranslatef(-5.5, 0, 0);
        pembuatSegiEmpat(
                         .0f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 1.5f, .0f,
                         .0f, 1.5f, .0f
                         );
    glPopMatrix();

    //konektor ke kepala
    glPushMatrix();
        glTranslatef(-5.5, 0, 1);
        pembuatSegiEmpat(
                         .0f, 1.0f, .0f,
                         .5f, 1.0f, .0f,
                         .5f, 1.5f, .0f,
                         .0f, 1.5f, .0f
                         );
    glPopMatrix();

    // kaca
    //kanan
    glColor3f(.2, .2, .2);
    glPushMatrix();
        glTranslatef(-8.6, 0, 3.05);
        // panjanga 10 lebar 5
        pembuatSegiEmpat(
                         -.8f, 3.0f, .0f,
                         2.8f, 3.0f, .0f,
                         2.8f, 4.4f, .0f,
                         0.2f, 4.4f, .0f
                         );
    glPopMatrix();

    //kiri
    glPushMatrix();
        glTranslatef(-8.6, 0, -2.05);
        // panjanga 10 lebar 5
        pembuatSegiEmpat(
                         -.8f, 3.0f, .0f,
                         2.8f, 3.0f, .0f,
                         2.8f, 4.4f, .0f,
                         0.2f, 4.4f, .0f
                         );
    glPopMatrix();

    //kaca depan
    glPushMatrix();
        glTranslatef(-7.5, 0, 3);
        glRotated(-90,0, 1, 0);
        glTranslatef(-2.5, 2.15, 2.55);
        glRotated(-34,1, 0, 0);
        glTranslatef(0, 0, 0.05);

        pembuatSegiEmpat(
                         -2.2f, 1.1f, .0f,
                         2.2f, 1.1f, .0f,
                         2.2f, 2.7f, .0f,
                         -2.2f, 2.7f, .0f
                         );
    glPopMatrix();


    // lamp
    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
        glTranslatef(-7.5, 0, 3);
        glRotated(-90,0, 1, 0);
        glTranslatef(-5.5, 0, 2.05);

        pembuatSegiEmpat(
                         .5f, 1.0f, .0f,
                         1.f, 1.0f, .0f,
                         1.f, 2.0f, .0f,
                         .5f, 2.0f, .0f
                         );
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-7.5, 0, 3);
        glRotated(-90,0, 1, 0);
        glTranslatef(-1., 0, 2.05);

        pembuatSegiEmpat(
                         .5f, 1.0f, .0f,
                         1.f, 1.0f, .0f,
                         1.f, 2.0f, .0f,
                         .5f, 2.0f, .0f
                         );
    glPopMatrix();
}

void truk()
{
    
    glPushMatrix();
        boxTrukPertama();
        boxTrukKedua();
        kepalaTruk();
    glPopMatrix();
}

void trukBayangan()
{
        //depan
        glPushMatrix();
            glTranslatef(0, 0, 3);
            // panjanga 10 lebar 5
            pembuatSegiEmpat(
                             -5.0f, 1.0f, .0f,
                             5.0f, 1.0f, .0f,
                             5.0f, 5.0f, .0f,
                             -5.0f, 5.0f, .0f
                             );
        glPopMatrix();

        //atas
        glPushMatrix();
            glRotated(-90,1, 0, 0);
            glTranslatef(0, -4, 5);
            pembuatSegiEmpat(
                             -5.0f, 1.0f, .0f,
                             5.0f, 1.0f, .0f,
                             5.0f, 6.0f, .0f,
                             -5.0f, 6.0f, .0f
                             );
            glEnd();
        glPopMatrix();

        //belakang
        glPushMatrix();
            glRotated(-180,1, 0, 0);
            glTranslatef(0, -6, 2);
            pembuatSegiEmpat(
                             -5.0f, 1.0f, .0f,
                             5.0f, 1.0f, .0f,
                             5.0f, 5.0f, .0f,
                             -5.0f, 5.0f, .0f
                             );
        glPopMatrix();

        //bawah
        glPushMatrix();
            glRotated(90,1, 0, 0);
            glTranslatef(0, -3, -1);
            pembuatSegiEmpat(
                             -5.0f, 1.0f, .0f,
                             5.0f, 1.0f, .0f,
                             5.0f, 6.0f, .0f,
                             -5.0f, 6.0f, .0f
                             );
        glPopMatrix();


        //hiasan
        glPushMatrix();
            glTranslatef(-5.5, 0, 0);
            glRotated(-90,1, 0, 0);
            glTranslatef(0, -4, 5);
            pembuatSegiEmpat(
                             .0f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 6.0f, .0f,
                             .0f, 6.0f, .0f
                             );
        glPopMatrix();

        //
        glPushMatrix();
            glTranslatef(-5.5, 0, 0);
            glRotated(-90,1, 0, 0);
            glTranslatef(0, -4, 5.5);
            pembuatSegiEmpat(
                             .0f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 6.0f, .0f,
                             .0f, 6.0f, .0f
                             );
        glPopMatrix();

        //
        glPushMatrix();
            glTranslatef(-5.5, 4, -2);
            pembuatSegiEmpat(
                             .0f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 1.5f, .0f,
                             .0f, 1.5f, .0f
                             );
        glPopMatrix();

        //
        glPushMatrix();
            glTranslatef(-5.5, 4, 3);
            pembuatSegiEmpat(
                             .0f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 1.5f, .0f,
                             .0f, 1.5f, .0f
                             );
        glPopMatrix();


        glColor3f(0., 0., 0.);
        //kiri
        glPushMatrix();
            glRotated(-90,0, 1, 0);
            glTranslatef(.5, 0, 5);
            pembuatSegiEmpat(
                             -2.5f, 1.0f, .0f,
                             2.5f, 1.0f, .0f,
                             2.5f, 5.0f, .0f,
                             -2.5f, 5.0f, .0f
                             );
        glPopMatrix();

        //kanan
        glPushMatrix();
            glRotated(90,0, 1, 0);
            glTranslatef(-.5, 0, 5);
            pembuatSegiEmpat(
                             -2.5f, 1.0f, .0f,
                             2.5f, 1.0f, .0f,
                             2.5f, 5.0f, .0f,
                             -2.5f, 5.0f, .0f
                             );
        glPopMatrix();

        //depan
        glPushMatrix();
            glTranslatef(11, 0, 3);
            // panjanga 10 lebar 5
            pembuatSegiEmpat(
                             -5.0f, 1.0f, .0f,
                             5.0f, 1.0f, .0f,
                             5.0f, 5.0f, .0f,
                             -5.0f, 5.0f, .0f
                             );
        glPopMatrix();

        //atas
        glPushMatrix();
            glRotated(-90,1, 0, 0);
            glTranslatef(11, -4, 5);
            pembuatSegiEmpat(
                             -5.0f, 1.0f, .0f,
                             5.0f, 1.0f, .0f,
                             5.0f, 6.0f, .0f,
                             -5.0f, 6.0f, .0f
                             );
            glEnd();
        glPopMatrix();

        //belakang
        glPushMatrix();
            glRotated(-180,1, 0, 0);
            glTranslatef(11, -6, 2);
            pembuatSegiEmpat(
                             -5.0f, 1.0f, .0f,
                             5.0f, 1.0f, .0f,
                             5.0f, 5.0f, .0f,
                             -5.0f, 5.0f, .0f
                             );
        glPopMatrix();

        //bawah
        glPushMatrix();
            glRotated(90,1, 0, 0);
            glTranslatef(11, -3, -1);
            pembuatSegiEmpat(
                             -5.0f, 1.0f, .0f,
                             5.0f, 1.0f, .0f,
                             5.0f, 6.0f, .0f,
                             -5.0f, 6.0f, .0f
                             );
        glPopMatrix();

        //kanan
        glColor3f(0., 0., 0.);
        glPushMatrix();
            glRotated(90,0, 1, 0);
            glTranslatef(-.5, 0, 16);
            pembuatSegiEmpat(
                             -2.5f, 1.0f, .0f,
                             2.5f, 1.0f, .0f,
                             2.5f, 5.0f, .0f,
                             -2.5f, 5.0f, .0f
                             );
        glPopMatrix();

        //kiri
        glPushMatrix();
            glRotated(-90,0, 1, 0);
            glTranslatef(.5, 0, -6);
            pembuatSegiEmpat(
                             -2.5f, 1.0f, .0f,
                             2.5f, 1.0f, .0f,
                             2.5f, 5.0f, .0f,
                             -2.5f, 5.0f, .0f
                             );
        glPopMatrix();

        //konektor ke gerbong belakang
        glPushMatrix();
            glTranslatef(5.5, 0, 0);
            glRotated(-90,1, 0, 0);
            glTranslatef(0, -2, 1);
            pembuatSegiEmpat(
                             -.5f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 2.0f, .0f,
                             -.5f, 2.0f, .0f
                             );
        glPopMatrix();

        //konektor ke kepala
        glPushMatrix();
            glTranslatef(5.5, 0, 0);
            glRotated(-90,1, 0, 0);
            glTranslatef(0, -2, 1.5);
            pembuatSegiEmpat(
                             -.5f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 2.0f, .0f,
                             -.5f, 2.0f, .0f
                             );
        glPopMatrix();

        //konektor ke kepala
        glPushMatrix();
            glTranslatef(5.5, 0, 0);
            pembuatSegiEmpat(
                             -.5f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 1.5f, .0f,
                             -.5f, 1.5f, .0f
                             );
        glPopMatrix();

        //konektor ke kepala
        glPushMatrix();
            glTranslatef(5.5, 0, 1);
            pembuatSegiEmpat(
                             -.5f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 1.5f, .0f,
                             -.5f, 1.5f, .0f
                             );
        glPopMatrix();



        //depan v1
        glPushMatrix();
            glTranslatef(-7.5, 0, 3);
            // panjanga 10 lebar 5
            pembuatSegiEmpat(
                             -1.0f, 1.0f, .0f,
                             2.0f, 1.0f, .0f,
                             2.0f, 4.5f, .0f,
                             -1.0f, 4.5f, .0f
                             );
        glPopMatrix();

        //depan v2
        glPushMatrix();
            glTranslatef(-10.5, 0, 3);
            // panjanga 10 lebar 5
            pembuatSegiEmpat(
                             1.0f, 1.0f, .0f,
                             2.0f, 1.0f, .0f,
                             2.0f, 4.5f, .0f,
                             1.0f, 3.f, .0f
                             );
        glPopMatrix();

        // belakang v1
        glPushMatrix();
            glRotated(-180,1, 0, 0);
            glTranslatef(-7.5, -5.5, 2);
            pembuatSegiEmpat(
                             -1.0f, 1.0f, .0f,
                             2.0f, 1.0f, .0f,
                             2.0f, 4.5f, .0f,
                             -1.0f, 4.5f, .0f
                             );
        glPopMatrix();

        // belakang v2
        glPushMatrix();
            glRotated(-180,1, 0, 0);
            glTranslatef(-10.5, -5.5, 2);
            pembuatSegiEmpat(
                             1.0f, 2.5f, .0f,
                             2.0f, 1.0f, .0f,
                             2.0f, 4.5f, .0f,
                             1.0f, 4.5f, .0f
                             );
        glPopMatrix();

        // kiri v1
        glPushMatrix();
            glTranslatef(-7.5, 0, 3);
            glRotated(-90,0, 1, 0);
            glTranslatef(-2.5, 0, 2);

            pembuatSegiEmpat(
                             -2.5f, 1.0f, .0f,
                             2.5f, 1.0f, .0f,
                             2.5f, 3.0f, .0f,
                             -2.5f, 3.0f, .0f
                             );
        glPopMatrix();

        // kiri v2
        glPushMatrix();
            glTranslatef(-7.5, 0, 3);
            glRotated(-90,0, 1, 0);
            glTranslatef(-2.5, 2.15, 2.55);
            glRotated(-34,1, 0, 0);

            pembuatSegiEmpat(
                             -2.5f, 1.0f, .0f,
                             2.5f, 1.0f, .0f,
                             2.5f, 2.8f, .0f,
                             -2.5f, 2.8f, .0f
                             );
        glPopMatrix();


        // atas
        glPushMatrix();
            glRotated(-90,1, 0, 0);
            glTranslatef(-7.5, -4, 4.5);
            pembuatSegiEmpat(
                             -1.0f, 1.0f, .0f,
                             2.0f, 1.0f, .0f,
                             2.0f, 6.f, .0f,
                             -1.0f, 6.f, .0f
                             );
            glEnd();
        glPopMatrix();

        // kanan

        glPushMatrix();
            glTranslatef(-5.5, 0, 0);
            glRotated(90,0, 1, 0);
            glTranslatef(-.5, 0, 0);
            pembuatSegiEmpat(
                             -2.5f, 1.0f, .0f,
                             2.5f, 1.0f, .0f,
                             2.5f, 4.5f, .0f,
                             -2.5f, 4.5f, .0f
                             );
        glPopMatrix();

        // bawah
        glPushMatrix();
            glRotated(90,1, 0, 0);
            glTranslatef(-5.5, -3, -1);
            pembuatSegiEmpat(
                             -4.f, 1.0f, .0f,
                             .0f, 1.0f, .0f,
                             .0f, 6.0f, .0f,
                             -4.f, 6.0f, .0f
                             );
        glPopMatrix();


        //konektor ke kepala
        glPushMatrix();
            glTranslatef(-5.5, 0, 0);
            glRotated(-90,1, 0, 0);
            glTranslatef(0, -2, 1);
            pembuatSegiEmpat(
                             .0f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 2.0f, .0f,
                             .0f, 2.0f, .0f
                             );
        glPopMatrix();

        //konektor ke kepala
        glPushMatrix();
            glTranslatef(-5.5, 0, 0);
            glRotated(-90,1, 0, 0);
            glTranslatef(0, -2, 1.5);
            pembuatSegiEmpat(
                             .0f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 2.0f, .0f,
                             .0f, 2.0f, .0f
                             );
        glPopMatrix();

        //konektor ke kepala
        glPushMatrix();
            glTranslatef(-5.5, 0, 0);
            pembuatSegiEmpat(
                             .0f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 1.5f, .0f,
                             .0f, 1.5f, .0f
                             );
        glPopMatrix();

        //konektor ke kepala
        glPushMatrix();
            glTranslatef(-5.5, 0, 1);
            pembuatSegiEmpat(
                             .0f, 1.0f, .0f,
                             .5f, 1.0f, .0f,
                             .5f, 1.5f, .0f,
                             .0f, 1.5f, .0f
                             );
        glPopMatrix();

        // kaca
        //kanan
        glPushMatrix();
            glTranslatef(-8.6, 0, 3.05);
            // panjanga 10 lebar 5
            pembuatSegiEmpat(
                             -.8f, 3.0f, .0f,
                             2.8f, 3.0f, .0f,
                             2.8f, 4.4f, .0f,
                             0.2f, 4.4f, .0f
                             );
        glPopMatrix();

        //kiri
        glPushMatrix();
            glTranslatef(-8.6, 0, -2.05);
            // panjanga 10 lebar 5
            pembuatSegiEmpat(
                             -.8f, 3.0f, .0f,
                             2.8f, 3.0f, .0f,
                             2.8f, 4.4f, .0f,
                             0.2f, 4.4f, .0f
                             );
        glPopMatrix();

        //kaca depan
        glPushMatrix();
            glTranslatef(-7.5, 0, 3);
            glRotated(-90,0, 1, 0);
            glTranslatef(-2.5, 2.15, 2.55);
            glRotated(-34,1, 0, 0);
            glTranslatef(0, 0, 0.05);

            pembuatSegiEmpat(
                             -2.2f, 1.1f, .0f,
                             2.2f, 1.1f, .0f,
                             2.2f, 2.7f, .0f,
                             -2.2f, 2.7f, .0f
                             );
        glPopMatrix();


        // lamp
        glPushMatrix();
            glTranslatef(-7.5, 0, 3);
            glRotated(-90,0, 1, 0);
            glTranslatef(-5.5, 0, 2.05);

            pembuatSegiEmpat(
                             .5f, 1.0f, .0f,
                             1.f, 1.0f, .0f,
                             1.f, 2.0f, .0f,
                             .5f, 2.0f, .0f
                             );
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-7.5, 0, 3);
            glRotated(-90,0, 1, 0);
            glTranslatef(-1., 0, 2.05);

            pembuatSegiEmpat(
                             .5f, 1.0f, .0f,
                             1.f, 1.0f, .0f,
                             1.f, 2.0f, .0f,
                             .5f, 2.0f, .0f
                             );
        glPopMatrix();
}





