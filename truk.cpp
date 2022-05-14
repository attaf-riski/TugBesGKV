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

void TrukGanden()
{
	GLUquadricObj * quadr;
	quadr = gluNewQuadric();
	
	//==============CHASSIS==============
	glPushMatrix();
	//frame utama
		glScalef(1.15,1.15,1.15);
		glPushMatrix();
			glTranslatef(0.0,1.0,0.0);
			glScalef(1.5, 0.25, 5.0);
			glutSolidCube(1.0);
		glPopMatrix();
	
		glPushMatrix();
			glTranslatef(0.0,0.75,2.5);
			glScalef(1.5, 0.25, 2.0);
			glutSolidCube(1.0);
		glPopMatrix();
	// roda depan kiri
		glPushMatrix();
			glTranslatef(0.9, 0.5, 2.5);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.5, 0.5, 0.3, 32, 32);
		glPopMatrix();
		
		glPushMatrix();
			glTranslatef(1.15, 0.5, 2.5);
			glRotatef(90,0,1,0);
			gluDisk(quadr, 0, 0.5, 32, 32);
		glPopMatrix();
	// roda depan kanan
		glPushMatrix();
			glTranslatef(-1.15, 0.5, 2.5);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.5, 0.5, 0.3, 32, 32);
		glPopMatrix();
	
		glPushMatrix();
			glTranslatef(-1.15, 0.5, 2.5);
			glRotatef(90,0,1,0);
			gluDisk(quadr, 0, 0.5, 32, 32);
		glPopMatrix();
	
	// roda belakang kiri
		glPushMatrix();
			glTranslatef(0.75, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.5, 0.5, 0.3, 32, 32);
		glPopMatrix();
	
		glPushMatrix();
			glTranslatef(1.00, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluDisk(quadr, 0, 0.5, 32, 32);
		glPopMatrix();
	// roda belakang kanan
		glPushMatrix();
			glTranslatef(-1.05, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.5, 0.5, 0.3, 32, 32);
		glPopMatrix();
	
		glPushMatrix();
			glTranslatef(-1.0, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluDisk(quadr, 0, 0.5, 32, 32);
		glPopMatrix();
	
	//wheelcover belakang kanan
		glPushMatrix();
			glTranslatef(-0.9, 1.0, -1.5);
			glPushMatrix();
				glScalef(0.35, 0.1, 0.8);
				glutSolidCube(1.0);
			glPopMatrix();
				
			glPushMatrix();
				glTranslatef(0.0, -0.1, 0.5);
				glRotatef(30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, -0.5);
				glRotatef(-30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
		glPopMatrix();
	//wheelcover belakang kiri
		glPushMatrix();
		glTranslatef(0.9, 1.0, -1.5);
			glPushMatrix();
				glScalef(0.35, 0.1, 0.8);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, 0.5);
				glRotatef(30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, -0.5);
				glRotatef(-30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
		glPopMatrix();
	
	//Gardan dan sumbu roda belakang
		glPushMatrix();
			glTranslatef(-1.0, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.1, 0.1, 2.0, 32, 32);
		glPopMatrix();
	
		glPushMatrix();
			glTranslatef(0, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluSphere(quadr, 0.3, 32, 32);
		glPopMatrix();
	
	
	//Powertrain
		glPushMatrix();
			glTranslatef(0.0, 0.75, 1.0);
			glScalef(0.6, 0.5, 1.0);
			glutSolidCube(1.0);
		glPopMatrix();
	
		glPushMatrix();
			glTranslatef(0.0, 0.75, 1.6);
			glutSolidCube(0.75);
		glPopMatrix();
	
	
	//Gardan dan sumbu roda depan
		glPushMatrix();
			glTranslatef(-1.0, 0.5, 2.25);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.1, 0.1, 2.0, 32, 32);
		glPopMatrix();
	
		glPushMatrix();
			glTranslatef(0, 0.5, 2.25);
			glRotatef(90,0,1,0);
			gluSphere(quadr, 0.3, 32, 32);
		glPopMatrix();
	glPopMatrix();

	//==============BODY==============
	glPushMatrix();
		glTranslatef(0.0, 1.25, 3.85);
	//base
	//glScalef(5.0,5.0,5.0);
		glPushMatrix();
			glTranslatef(0,-0.15,0);
			glScalef(2.5, 0.75, 2.0);
			glutSolidCube(1.0);
		glPopMatrix();
	//half cabin
		glPushMatrix();
			glTranslatef(0, 0.6, -1.0);
			glScalef(2.5, 2.25, 0.5);
			glutSolidCube(1.0);
		glPopMatrix();
	//roof
		glPushMatrix();
			glTranslatef(0, 1.55, 0);
			glScalef(2.8, 0.25, 1.8);
			glutSolidCube(1.0);
		glPopMatrix();
	//a pillar kiri
		glPushMatrix();
			glRotatef(-10, 1,0,0);
			glTranslatef(-1.1, 0.8, 0.75);
			glScalef(0.25, 1.5, 0.25);
			glutSolidCube(1.0);
		glPopMatrix();
	//a pillar kanan
		glPushMatrix();
			glRotatef(-10, 1,0,0);
			glTranslatef(1.1, 0.8, 0.75);
			glScalef(0.25, 1.5, 0.25);
			glutSolidCube(1.0);
		glPopMatrix();
	//wheelcover kanan
	//atas
		glPushMatrix();
			glTranslatef(1.3, 0.1, -0.85);
			glScalef(0.25, 0.25, 0.75);
			glutSolidCube(1.0);
		glPopMatrix();
	//samping
		glPushMatrix();
			glTranslatef(1.3, -0.2, -0.39);
			glRotatef(60,1,0,0);
			glScalef(0.25, 0.25, 0.75);
			glutSolidCube(1.0);
		glPopMatrix();
	//wheelcover kiri
	//atas
		glPushMatrix();
			glTranslatef(-1.3, 0.1, -0.85);
			glScalef(0.25, 0.25, 0.75);
			glutSolidCube(1.0);
		glPopMatrix();
	//samping
		glPushMatrix();
			glTranslatef(-1.3, -0.2, -0.39);
			glRotatef(60,1,0,0);
			glScalef(0.25, 0.25, 0.75);
			glutSolidCube(1.0);
		glPopMatrix();
	//footstep kanan
		glPushMatrix();
			glTranslatef(-1.3, -0.55, -0.1);
			glScalef(0.25, 0.25, 0.5);
			glutSolidCube(1.0);
		glPopMatrix();
	//footstep kiri
		glPushMatrix();
			glTranslatef(1.3, -0.55, -0.1);
			glScalef(0.25, 0.25, 0.5);
			glutSolidCube(1.0);
		glPopMatrix();
	//bumper
		glPushMatrix();
			glTranslatef(0.0, -0.5, 1.00);
			glScalef(2.5, 0.2, 0.25);
			glutSolidCube(1.0);
		glPopMatrix();
	//grill
		glPushMatrix();
			glTranslatef(0.0, -0.15, 1.0);
			glScalef(1.0, 0.5, 0.25);
			glutSolidCube(1.0);
		glPopMatrix();
	//headlight frame kanan
		glPushMatrix();
			glTranslatef(-1.0, -0.15, 1.0);
			glScalef(0.5, 0.25, 0.25);
			glutSolidCube(1.0);
		glPopMatrix();
	//headlight kanan
		glPushMatrix();
			glTranslatef(1.125, -0.15, 1.1);
			gluCylinder(quadr, 0.125, 0.125, 0.08, 32, 32);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.875, -0.15, 1.1);
			gluCylinder(quadr, 0.125, 0.125, 0.08, 32, 32);
		glPopMatrix();
		glPushMatrix();
			//((disk kanan))
			glTranslatef(-1.125, -0.15, 1.175);
			gluDisk(quadr, 0, 0.125, 32,32);
			glPopMatrix();
			glPushMatrix();
			glTranslatef(-0.875, -0.15, 1.175);
			gluDisk(quadr, 0, 0.125, 32,32);
		glPopMatrix();
	//headlight frame kiri
		glPushMatrix();
			glTranslatef(1.0, -0.15, 1.0);
			glScalef(0.5, 0.25, 0.25);
			glutSolidCube(1.0);
		glPopMatrix();
	//headlight kiri
		glPushMatrix();
			glTranslatef(1.125, -0.15, 1.1);
			gluCylinder(quadr, 0.125, 0.125, 0.08, 32, 32);
			glPopMatrix();
			glPushMatrix();
			glTranslatef(0.875, -0.15, 1.1);
			gluCylinder(quadr, 0.125, 0.125, 0.08, 32, 32);
		glPopMatrix();
		glPushMatrix();
			//((disk kiri))
			glTranslatef(1.125, -0.15, 1.175);
			gluDisk(quadr, 0, 0.125, 32,32);
			glPopMatrix();
			glPushMatrix();
			glTranslatef(0.875, -0.15, 1.175);
			gluDisk(quadr, 0, 0.125, 32,32);
		glPopMatrix();
	//kaca
		glPushMatrix();
			glRotatef(-10,1,0,0);
			glTranslatef(0,0.75,0);
			glScalef(2.0, 1.750, 1.50);
			glutSolidCube(1.0);
		glPopMatrix();
	//sidepod kiri
		glPushMatrix();
			glTranslatef(1.25,0.75,-1.0);
			glScalef(0.25, 0.75, 0.25);
			glutSolidCube(1.0);
		glPopMatrix();
	//sidepod kanan
		glPushMatrix();
			glTranslatef(-1.25,0.75,-1.0);
			glScalef(0.25, 0.75, 0.25);
			glutSolidCube(1.0);
		glPopMatrix();
	//spion kiri
		glPushMatrix();
			glTranslatef(1.35,0.95,1.0);
			glScalef(0.5, 0.75, 0.05);
			glutSolidCube(1.0);
		glPopMatrix();
	//spion kanan
		glPushMatrix();
			glTranslatef(-1.35,0.95,1.0);
			glScalef(0.5, 0.75, 0.05);
			glutSolidCube(1.0);
		glPopMatrix();
	//bar spion kiri
		glPushMatrix();
			glTranslatef(1.35,1.45,0.850);
			glRotatef(30,1,0,0);
			glScalef(0.05, 0.05, 0.5);
			glutSolidCube(1.0);
		glPopMatrix();
	//bar spion kanan
		glPushMatrix();
			glTranslatef(-1.35,1.45,0.850);
			glRotatef(30,1,0,0);
			glScalef(0.05, 0.05, 0.5);
			glutSolidCube(1.0);
		glPopMatrix();
	//Kontainer
		glPushMatrix();
			glTranslatef(0.0,1.15,-3.75);
			glScalef(2.75, 2.25, 4.80);
			glutSolidCube(1.0);
		glPopMatrix();
	glPopMatrix();

//============== CHASSIS TRAILER==============
	glPushMatrix();
		glTranslatef(0,0,-7.5);
		glScalef(1.15,1.15,1.15);
		//gandengan kanan
		glPushMatrix();
			glTranslatef(-0.25,1.0,3.50);
			glRotatef(15,0,1,0);
			glScalef(0.25, 0.25, 1.5);
			glutSolidCube(1.0);
		glPopMatrix();
		//gandengan kiri
		glPushMatrix();
			glTranslatef(0.25,1.0,3.5);
			glRotatef(-15,0,1,0);
			glScalef(0.25, 0.25, 1.5);
			glutSolidCube(1.0);
		glPopMatrix();
		//frame utama
		glPushMatrix();
			glTranslatef(0.0,1.0,0.0);
			glScalef(1.5, 0.25, 5.0);
			glutSolidCube(1.0);
		glPopMatrix();
		
		glPushMatrix();
			glTranslatef(0.0,0.75,2.5);
			glScalef(1.5, 0.25, 2.0);
			glutSolidCube(1.0);
		glPopMatrix();
		// roda depan kiri
		glPushMatrix();
			glTranslatef(0.9, 0.5, 2.5);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.5, 0.5, 0.3, 32, 32);
		glPopMatrix();
		
		glPushMatrix();
			glTranslatef(1.15, 0.5, 2.5);
			glRotatef(90,0,1,0);
			gluDisk(quadr, 0, 0.5, 32, 32);
		glPopMatrix();
		// roda depan kanan
		glPushMatrix();
			glTranslatef(-1.15, 0.5, 2.5);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.5, 0.5, 0.3, 32, 32);
		glPopMatrix();
		
		glPushMatrix();
			glTranslatef(-1.15, 0.5, 2.5);
			glRotatef(90,0,1,0);
			gluDisk(quadr, 0, 0.5, 32, 32);
		glPopMatrix();
		
		// roda belakang kiri
		glPushMatrix();
			glTranslatef(0.75, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.5, 0.5, 0.3, 32, 32);
		glPopMatrix();
		
		glPushMatrix();
			glTranslatef(1.00, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluDisk(quadr, 0, 0.5, 32, 32);
		glPopMatrix();
		// roda belakang kanan
		glPushMatrix();
			glTranslatef(-1.05, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.5, 0.5, 0.3, 32, 32);
		glPopMatrix();
		
		glPushMatrix();
			glTranslatef(-1.0, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluDisk(quadr, 0, 0.5, 32, 32);
		glPopMatrix();
		
		//wheelcover belakang kanan
		glPushMatrix();
		glTranslatef(-0.9, 1.0, -1.5);
			glPushMatrix();
				glScalef(0.35, 0.1, 0.8);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, 0.5);
				glRotatef(30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, -0.5);
				glRotatef(-30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
		glPopMatrix();
		//wheelcover belakang kiri
		glPushMatrix();
		glTranslatef(0.9, 1.0, -1.5);
			glPushMatrix();
				glScalef(0.35, 0.1, 0.8);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, 0.5);
				glRotatef(30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, -0.5);
				glRotatef(-30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
		glPopMatrix();
		
		//wheelcover depan kanan
		glPushMatrix();
		glTranslatef(-0.9, 1.0, 2.5);
			glPushMatrix();
				glScalef(0.35, 0.1, 0.8);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, 0.5);
				glRotatef(30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, -0.5);
				glRotatef(-30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
		glPopMatrix();
		//wheelcover depan kiri
		glPushMatrix();
			glTranslatef(0.9, 1.0, 2.5);
			glPushMatrix();
				glScalef(0.35, 0.1, 0.8);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, 0.5);
				glRotatef(30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
			
			glPushMatrix();
				glTranslatef(0.0, -0.1, -0.5);
				glRotatef(-30,1,0,0);
				glScalef(0.35, 0.1, 0.4);
				glutSolidCube(1.0);
			glPopMatrix();
		glPopMatrix();
		//Gardan dan sumbu roda belakang
		glPushMatrix();
			glTranslatef(-1.0, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.1, 0.1, 2.0, 32, 32);
		glPopMatrix();
		
		glPushMatrix();
			glTranslatef(0, 0.5, -1.5);
			glRotatef(90,0,1,0);
			gluSphere(quadr, 0.3, 32, 32);
		glPopMatrix();
		
		
		//Gardan dan sumbu roda depan
		glPushMatrix();
			glTranslatef(-1.0, 0.5, 3.0);
			glRotatef(90,0,1,0);
			gluCylinder(quadr, 0.1, 0.1, 2.0, 32, 32);
		glPopMatrix();
		
		glPushMatrix();
			glTranslatef(0, 0.5, 3.0);
			glRotatef(90,0,1,0);
			gluSphere(quadr, 0.3, 32, 32);
		glPopMatrix();
		//Kontainer
		glPushMatrix();
			glTranslatef(0.0,2.15,0.5);
			glScalef(2.5, 2.0, 5.8);
			glutSolidCube(1.0);
		glPopMatrix();
	glPopMatrix();
}



