#include <windows.h>
#include <GL/glut.h>

float xx1 = 0.0, yy1 = 0.0, zz1 = 0.0, xxx1 = 0.0, yyy1 = 0.0, zzz1 = 0.0, sudut = 0.0;
float xrot = 0.0;
float yrot = 0.0;
float xdiff = 0.0;
float ydiff = 0.0;
bool mouseDown = false;
const float BOX_SIZE = 7.0f;

void jendela()
{
    ///jendela frame 1
    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(290, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(290, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(270, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(270, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(250, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(250, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela frame 2
    ///frame jendela lantai paling bawah
    glPushMatrix();
    glTranslatef(200, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(200, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(170, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(170, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela frame 3
    ///frame jendela lantai paling bawah
    glPushMatrix();
    glTranslatef(110, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(110, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(80, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(80, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela frame 5
    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-65, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-65, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-85, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-85, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-105, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-105, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela frame 6
    ///frame jendela lantai paling bawah
    glPushMatrix();
    glTranslatef(-160, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-160, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-190, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-190, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela frame 7
    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-245, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-245, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-265, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-265, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-285, 15, 62);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-285, 15, 62.1);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();
}

void jendela2()
{
    ///jendela frame 1
    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(290, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(290, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(270, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(270, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(250, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(250, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela frame 2
    ///frame jendela lantai paling bawah
    glPushMatrix();
    glTranslatef(200, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(200, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(170, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(170, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela frame 3
    ///frame jendela lantai paling bawah
    glPushMatrix();
    glTranslatef(110, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(110, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(80, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(80, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela frame 5
    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-65, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-65, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-85, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-85, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-105, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-105, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela frame 6
    ///frame jendela lantai paling bawah
    glPushMatrix();
    glTranslatef(-160, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-160, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-190, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-190, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela frame 7
    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-245, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-245, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-265, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(20, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-265, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(17, 25, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///frame jendela lantai paling bawah kanan
    glPushMatrix();
    glTranslatef(-285, 15, 62.1);
    glColor3f(0.2, 0.2, 0.2);
    glScalef(13, 28, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-285, 15, 62);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(10, 25, 3);
    glutSolidCube(1);
    glPopMatrix();
}

void jaring()
{
    ///garis
    glPushMatrix();
    glTranslatef(5, 122, 80);
    glColor3f(0.6, 0.6, 0.6);
    glScalef(620, 1, 1);
    glutSolidCube(1);
    glPopMatrix();

    ///garis
    glPushMatrix();
    glTranslatef(5, 57, 80);
    glColor3f(0.6, 0.6, 0.6);
    glScalef(620, 1, 1);
    glutSolidCube(1);
    glPopMatrix();

    ///jaring tiang tengah
    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(290, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(240, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(220, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(150, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(130, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(67, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-58, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-120, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-140, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-210, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-230, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 124; jaring>=105; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-290, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(15, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    ///jaring kecil
    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-270, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-250, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    glTranslatef(85, 0, 0);

    ///jaring kecil
    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-270, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-250, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    glTranslatef(85, 0, 0);

    ///jaring kecil
    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-270, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-250, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    glTranslatef(85, 0, 0);

    ///jaring kecil
    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-145, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-165, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    glTranslatef(85, 0, 0);

    ///jaring kecil
    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-145, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-165, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    glTranslatef(80, 0, 0);

    ///jaring kecil
    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-148, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 122; jaring>=114; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(-162, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }
}

void jaringbawah()
{
    ///jaring kecil bawah
    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(245, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(285, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(265, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    glTranslatef(-80, 0, 0);
    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(245, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(285, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(265, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    glTranslatef(-80, 0, 0);
    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(240, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(280, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(260, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    glTranslatef(-80, 0, 0);
    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(135, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(175, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(155, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    glTranslatef(-85, 0, 0);
    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(135, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(175, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(155, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    glTranslatef(-90, 0, 0);
    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(135, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(175, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float jaring = 57; jaring>=49; jaring-=2)
    {
        glPushMatrix();
        glTranslatef(155, jaring, 80);
        glColor3f(0.5, 0.5, 0.5);
        glScalef(9, 1, 1);
        glutSolidCube(1);
        glPopMatrix();
    }
}

void sisibelakang()
{
    ///Bata nyamping bawah
    glPushMatrix();
    glTranslatef(0, 50, 70);
    glColor3f(1.0, 0.5, 0.0);
    glScalef(620, 20, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///Bata nyamping tengah
    glPushMatrix();
    glTranslatef(5, 115, 70);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(620, 20, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///Bata nyamping atas
    glPushMatrix();
    glTranslatef(5, 180, 70);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(620, 20, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///Bata tiang
    for(float tiang1 = 230; tiang1 >= -310; tiang1-=90)
    {
        glPushMatrix();
        glTranslatef(tiang1, 10, 70);
        glColor3f(1.0, 0.5, 0.0);
        glScalef(20, 70, 20);
        glutSolidCube(1);
        glPopMatrix();
    }

    ///bata tiang ke atas kanan
    glPushMatrix();
    glTranslatef(50, 90, 69.9);
    glColor3f(1.0, 0.5, 0.0);
    glScalef(20, 245, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///bata tiang ke atas kiri
    glPushMatrix();
    glTranslatef(-40, 90, 69.9);
    glColor3f(1.0, 0.5, 0.0);
    glScalef(20, 245, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///Bata nyamping tengah depan
    glPushMatrix();
    glTranslatef(5, 115, 85);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(70, 20, 10);
    glutSolidCube(1);
    glPopMatrix();

    ///Bata nyamping atas depan
    glPushMatrix();
    glTranslatef(5, 180, 85);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(70, 20, 10);
    glutSolidCube(1);
    glPopMatrix();

    ///tekstur garis depan
    for(float garis = -15; garis <=25; garis+=20)
    {
        glPushMatrix();
        glTranslatef(garis, 95, 68.9);
        glColor3f(0.9, 0.8, 0.8);
        glScalef(1, 240, 17);
        glutSolidCube(1);
        glPopMatrix();
    }

    ///Atap bata nyamping paling atas depan
    glPushMatrix();
    glTranslatef(5, 222, 67);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(110, 20, 15);
    glutSolidCube(1);
    glPopMatrix();

    ///Tiang Putih Depan
    for(float tiangpd = 230; tiangpd>= -310; tiangpd-=90)
    {
        glPushMatrix();
        glTranslatef(tiangpd, 135, 70);
        glColor3f(0.8, 0.8, 0.8);
        glScalef(5, 155, 20);
        glutSolidCube(1);
        glPopMatrix();
    }

    ///Pipa Lantai 3-1 Kanan
    glPushMatrix();
    glTranslatef(295, 75, 70);
    glColor3f(1.0, 1.0, 1.0);
    glScalef(2, 205, 2);
    glutSolidCube(1);
    glPopMatrix();
    ///Pipa Lantai 3-1 Kiri
    glPushMatrix();
    glTranslatef(-295, 75, 70);
    glColor3f(1.0, 1.0, 1.0);
    glScalef(2, 205, 2);
    glutSolidCube(1);
    glPopMatrix();

    ///Pagar di atas Bata nyamping atas
    for(float pageratas = 290; pageratas>=70; pageratas-=20)
    {
        glPushMatrix();
        glTranslatef(pageratas, 200, 65);
        glColor3f(0.9, 0.8, 0.8);
        glScalef(5, 25, 5);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float pageratas2 = -65; pageratas2>=-300; pageratas2-=20)
    {
        glPushMatrix();
        glTranslatef(pageratas2, 200, 65);
        glColor3f(0.9, 0.8, 0.8);
        glScalef(5, 25, 5);
        glutSolidCube(1);
        glPopMatrix();
    }

    glPushMatrix();
    glTranslatef(180, 212, 65);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(250, 2, 5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(180, 202, 65);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(255, 2, 5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-175, 212, 65);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(260, 2, 5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-175, 202, 65);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(260, 2, 5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 0, -20);
    jaring();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 65, -20);
    jaring();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 0, -20);
    jaringbawah();
    glPopMatrix();
}

void interior()
{
    ///Kursi
    glPushMatrix();
    glTranslatef(-45, -5, 23);
    glColor3f(0.5, 0.5, 0.0);
    glScalef(5, 1, 5);
    glutSolidCube(2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-45, -5, 27);
    glColor3f(0.5, 0.5, 0.0);
    glScalef(5, 10, 1);
    glutSolidCube(2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-45, -9, 19);
    glColor3f(0.5, 0.5, 0.0);
    glScalef(5, 5, 1);
    glutSolidCube(2);
    glPopMatrix();

    ///Meja
    glPushMatrix();
    glTranslatef(-45, 0, 0);
    glColor3f(0.5, 0.5, 0.0);
    glScalef(9, 1, 7);
    glutSolidCube(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-58, -6, -10);
    glColor3f(0.5, 0.5, 0.0);
    glScalef(0.5, 4, 0.5);
    glutSolidCube(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-58, -6, 10);
    glColor3f(0.5, 0.5, 0.0);
    glScalef(0.5, 4, 0.5);
    glutSolidCube(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-32, -6, -10);
    glColor3f(0.5, 0.5, 0.0);
    glScalef(0.5, 4, 0.5);
    glutSolidCube(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-32, -6, 10);
    glColor3f(0.5, 0.5, 0.0);
    glScalef(0.5, 4, 0.5);
    glutSolidCube(4);
    glPopMatrix();

    ///Laptop
    glPushMatrix();
    glTranslatef(-45, 5.5, -5);
    glColor3f(0.0, 0.0, 0.0);
    glScalef(2, 1.7, 0.2);
    glutSolidCube(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-45, 5.5, -4.9);
    glColor3f(0.8, 0.8, 0.8);
    glScalef(1.7, 1.4, 0.2);
    glutSolidCube(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-45, 2.5, -2);
    glColor3f(0.0, 0.0, 0.0);
    glScalef(1.7, 0.2, 1.6);
    glutSolidCube(4);
    glPopMatrix();
}

void display()
{
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);

    glClearColor(0.0, 1.0, 1, 0);
    glLoadIdentity();
    glTranslatef(0, 0, -200);
    glRotatef(sudut, xx1, yy1, zz1);
    glRotatef(xrot, 1.0, 0.0, 0.0);
	glRotatef(yrot, 0.0, 1.0, 0.0);
	glTranslatef(xxx1, yyy1, zzz1);
    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    GLfloat ambientLight[] = { 0.3f, 0.3f, 0.3f, 1.0f };
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientLight);

    GLfloat lightColor[] = { 0.7f, 0.7f, 0.7f, 1.0f };
    GLfloat lightPos[] = { -2 * BOX_SIZE, BOX_SIZE, 4 * BOX_SIZE, 1.0f };
    glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor);
    glLightfv(GL_LIGHT1, GL_POSITION, lightPos);


    ///Tanah
    glPushMatrix();
    glTranslatef(0, -32, -40);
    glColor3f(0.5, 0.8, 0.2);
    glScalef(200, 5, 120);
    glutSolidCube(4);
    glPopMatrix();

    ///Atap
    glPushMatrix();
    glTranslatef(0, 215, -50);
    glColor3f(1.0, 0.8, 0.0);
    glScalef(150, 1, 56);
    glutSolidCube(4);
    glPopMatrix();

    ///Bangunan Dasar depan
    glPushMatrix();
    glTranslatef(0, 95, 60);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(150, 60, 1);
    glutSolidCube(4);
    glPopMatrix();

    ///Bangunan Dasar belakang
    glPushMatrix();
    glTranslatef(0, 95, -160);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(150, 60, 1);
    glutSolidCube(4);
    glPopMatrix();

    ///Bangunan Orange Kanan
    glPushMatrix();
    glTranslatef(310, 95, -46);
    glColor3f(1.0, 0.5, 0.0);
    glScalef(5, 60, 65);
    glutSolidCube(4);
    glPopMatrix();
    //kaca depan 1
    glPushMatrix();
    glTranslatef(310, 195, 84);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca depan 2
    glPushMatrix();
    glTranslatef(310, 130, 84);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca depan 3
    glPushMatrix();
    glTranslatef(310, 65, 84);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca belakang 1
    glPushMatrix();
    glTranslatef(310, 195, -176);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca belakang 2
    glPushMatrix();
    glTranslatef(310, 130, -176);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca belakang 3
    glPushMatrix();
    glTranslatef(310, 65, -176);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //pipa orange
    glPushMatrix();
    glTranslatef(321, 93, 75);
    glColor3f(1.0, 0.55, 0.0);
    glScalef(1.5, 61, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca samping kanan
    for( int kacay= 185.5; kacay>=-5; kacay-=60 )
    {
        glPushMatrix();
        glTranslatef(320, kacay, 65);
        glColor3f(0.0, 0.0, 1.0);
        glScalef(0.5, 12, 1);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(320, kacay, 58);
        glColor3f(0.0, 0.0, 1.0);
        glScalef(0.5, 12, 1);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(320, kacay, 51);
        glColor3f(0.0, 0.0, 1.0);
        glScalef(0.5, 12, 1);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(320, kacay, 44);
        glColor3f(0.0, 0.0, 1.0);
        glScalef(0.5, 12, 1);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(320, kacay, 37);
        glColor3f(0.0, 0.0, 1.0);
        glScalef(0.5, 12, 1);
        glutSolidCube(4);
        glPopMatrix();
    }

    ///Bangunan Kuning Kanan
    glPushMatrix();
    glTranslatef(330, 95, -70);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(5, 60, 50);
    glutSolidCube(4);
    glPopMatrix();
    //pipa kuning
    glPushMatrix();
    glTranslatef(342, 93, 10);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(1.5, 61, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //jendela kanan
    for( int kacay= 195.5; kacay>=-5; kacay-=60 )
    {
        glPushMatrix();
        glTranslatef(341, kacay, -40);
        glColor3f(0.6,0.4,0.0);
        glScalef(1, 8, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(342, kacay-18, -40);
        glColor3f(1.0, 0.87, 0.62);
        glScalef(2.5, 1, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(342, kacay+18, -40);
        glColor3f(1.0, 0.87, 0.62);
        glScalef(2.5, 1, 12);
        glutSolidCube(4);
        glPopMatrix();
        //kaca kanan 1
        glPushMatrix();
        glTranslatef(339, kacay, -85);
        glColor3f(0.0,0.0,1.0);
        glScalef(1.2, 8, 1);
        glutSolidCube(4);
        glPopMatrix();
        //kaca kanan 2
        glPushMatrix();
        glTranslatef(339, kacay, -115);
        glColor3f(0.0,0.0,1.0);
        glScalef(1.2, 8, 1);
        glutSolidCube(4);
        glPopMatrix();
        //kaca kanan 3
        glPushMatrix();
        glTranslatef(339, kacay, -145);
        glColor3f(0.0,0.0,1.0);
        glScalef(1.2, 8, 1);
        glutSolidCube(4);
        glPopMatrix();

    }
    //texture jendela kanan
    for( int kacay= 195.5; kacay>=-5; kacay-=60 )
    {
        glPushMatrix();
        glTranslatef(341, kacay+12, -40);
        glRotatef(-45.0, 0, 0 ,1);
        glColor3f(0.6,0.4,0.0);
        glScalef(2, 1, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(341, kacay+6, -40);
        glRotatef(-45.0, 0, 0 ,1);
        glColor3f(0.6,0.4,0.0);
        glScalef(2, 1, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(341, kacay+0, -40);
        glRotatef(-45.0, 0, 0 ,1);
        glColor3f(0.6,0.4,0.0);
        glScalef(2, 1, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(341, kacay-12, -40);
        glRotatef(-45.0, 0, 0 ,1);
        glColor3f(0.6,0.4,0.0);
        glScalef(2, 1, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(341, kacay-6, -40);
        glRotatef(-45.0, 0, 0 ,1);
        glColor3f(0.6,0.4,0.0);
        glScalef(2, 1, 12);
        glutSolidCube(4);
        glPopMatrix();
    }
    //Atap Kanan 1
    glPushMatrix();
    glTranslatef(340, 217, -65);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(10, 1, 57);
    glutSolidCube(4);
    glPopMatrix();

    //Atap Kanan 1
    glPushMatrix();
    glTranslatef(320, 217, -45);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(10, 1, 67);
    glutSolidCube(4);
    glPopMatrix();

    ///Bangunan Orange Kiri
    glPushMatrix();
    glTranslatef(-310, 95, -46);
    glColor3f(1.0, 0.5, 0.0);
    glScalef(5, 60, 65);
    glutSolidCube(4);
    glPopMatrix();
    //kaca depan 1
    glPushMatrix();
    glTranslatef(-310, 195, 84);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca depan 2
    glPushMatrix();
    glTranslatef(-310, 130, 84);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca depan 3
    glPushMatrix();
    glTranslatef(-310, 65, 84);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca belakang 1
    glPushMatrix();
    glTranslatef(-310, 195, -176);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca belakang 2
    glPushMatrix();
    glTranslatef(-310, 130, -176);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca belakang 3
    glPushMatrix();
    glTranslatef(-310, 65, -176);
    glColor3f(0.0, 0.0, 1.0);
    glScalef(4, 0.5, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //pipa orange
    glPushMatrix();
    glTranslatef(-321, 93, 75);
    glColor3f(1.0, 0.55, 0.0);
    glScalef(1.5, 61, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //kaca samping kiri
    for( int kacay= 185.5; kacay>=-5; kacay-=60 )
    {
        glPushMatrix();
        glTranslatef(-320, kacay, 65);
        glColor3f(0.0, 0.0, 1.0);
        glScalef(0.5, 12, 1);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-320, kacay, 58);
        glColor3f(0.0, 0.0, 1.0);
        glScalef(0.5, 12, 1);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-320, kacay, 51);
        glColor3f(0.0, 0.0, 1.0);
        glScalef(0.5, 12, 1);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-320, kacay, 44);
        glColor3f(0.0, 0.0, 1.0);
        glScalef(0.5, 12, 1);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-320, kacay, 37);
        glColor3f(0.0, 0.0, 1.0);
        glScalef(0.5, 12, 1);
        glutSolidCube(4);
        glPopMatrix();
    }

    ///Bangunan Kuning Kiri
    glPushMatrix();
    glTranslatef(-330, 95, -70);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(5, 60, 50);
    glutSolidCube(4);
    glPopMatrix();
    //pipa kuning
    glPushMatrix();
    glTranslatef(-342, 93, 10);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(1.5, 61, 0.5);
    glutSolidCube(4);
    glPopMatrix();
    //jendela kiri
    for( int kacay= 195.5; kacay>=-5; kacay-=60 )
    {
        glPushMatrix();
        glTranslatef(-341, kacay, -40);
        glColor3f(0.6,0.4,0.0);
        glScalef(1, 8, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-342, kacay-18, -40);
        glColor3f(1.0, 0.87, 0.62);
        glScalef(2.5, 1, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-342, kacay+18, -40);
        glColor3f(1.0, 0.87, 0.62);
        glScalef(2.5, 1, 12);
        glutSolidCube(4);
        glPopMatrix();
        //kaca kanan 1
        glPushMatrix();
        glTranslatef(-339, kacay, -85);
        glColor3f(0.0,0.0,1.0);
        glScalef(1.2, 8, 1);
        glutSolidCube(4);
        glPopMatrix();
        //kaca kanan 2
        glPushMatrix();
        glTranslatef(-339, kacay, -115);
        glColor3f(0.0,0.0,1.0);
        glScalef(1.2, 8, 1);
        glutSolidCube(4);
        glPopMatrix();
        //kaca kanan 3
        glPushMatrix();
        glTranslatef(-339, kacay, -145);
        glColor3f(0.0,0.0,1.0);
        glScalef(1.2, 8, 1);
        glutSolidCube(4);
        glPopMatrix();

    }
    //texture jendela kiri
    for( int kacay= 195.5; kacay>=-5; kacay-=60 )
    {
        glPushMatrix();
        glTranslatef(-341, kacay+12, -40);
        glRotatef(-45.0, 0, 0 ,1);
        glColor3f(0.6,0.4,0.0);
        glScalef(2, 1, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-341, kacay+6, -40);
        glRotatef(-45.0, 0, 0 ,1);
        glColor3f(0.6,0.4,0.0);
        glScalef(2, 1, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-341, kacay+0, -40);
        glRotatef(-45.0, 0, 0 ,1);
        glColor3f(0.6,0.4,0.0);
        glScalef(2, 1, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-341, kacay-12, -40);
        glRotatef(-45.0, 0, 0 ,1);
        glColor3f(0.6,0.4,0.0);
        glScalef(2, 1, 12);
        glutSolidCube(4);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-341, kacay-6, -40);
        glRotatef(-45.0, 0, 0 ,1);
        glColor3f(0.6,0.4,0.0);
        glScalef(2, 1, 12);
        glutSolidCube(4);
        glPopMatrix();
    }
    //Atap Kiri 1
    glPushMatrix();
    glTranslatef(-340, 217, -65);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(10, 1, 57);
    glutSolidCube(4);
    glPopMatrix();

    //Atap Kiri 1
    glPushMatrix();
    glTranslatef(-320, 217, -45);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(10, 1, 67);
    glutSolidCube(4);
    glPopMatrix();

    ///Bata nyamping bawah
    glPushMatrix();
    glTranslatef(0, 50, 70);
    glColor3f(1.0, 0.5, 0.0);
    glScalef(620, 20, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///Bata nyamping tengah
    glPushMatrix();
    glTranslatef(5, 115, 70);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(620, 20, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///Bata nyamping atas
    glPushMatrix();
    glTranslatef(5, 180, 70);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(620, 20, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///Bata tiang
    for(float tiang1 = 230; tiang1 >= -310; tiang1-=90)
    {
        glPushMatrix();
        glTranslatef(tiang1, 10, 70);
        glColor3f(1.0, 0.5, 0.0);
        glScalef(20, 70, 20);
        glutSolidCube(1);
        glPopMatrix();
    }

    ///bata tiang depan kanan
    glPushMatrix();
    glTranslatef(50, 10, 150);
    glColor3f(1.0, 0.5, 0.0);
    glScalef(20, 65, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///bata tiang depan kiri
    glPushMatrix();
    glTranslatef(-40, 10, 150);
    glColor3f(1.0, 0.5, 0.0);
    glScalef(20, 65, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///bata tiang ke atas kanan
    glPushMatrix();
    glTranslatef(50, 90, 80);
    glColor3f(1.0, 0.5, 0.0);
    glScalef(20, 245, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///bata tiang ke atas kiri
    glPushMatrix();
    glTranslatef(-40, 90, 80);
    glColor3f(1.0, 0.5, 0.0);
    glScalef(20, 245, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///Bata nyamping tengah depan
    glPushMatrix();
    glTranslatef(5, 115, 85);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(70, 20, 10);
    glutSolidCube(1);
    glPopMatrix();

    ///Bata nyamping atas depan
    glPushMatrix();
    glTranslatef(5, 180, 85);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(70, 20, 10);
    glutSolidCube(1);
    glPopMatrix();

    ///Tulisan F
    glPushMatrix();
    glTranslatef(-15, 179, 90);
    glColor3f(1, 0, 0);
    glScalef(2, 15, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-11.5, 187, 90);
    glColor3f(1, 0, 0);
    glScalef(9, 2, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-11.5, 181, 90);
    glColor3f(1, 0, 0);
    glScalef(9, 2, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///Huruf E
    glPushMatrix();
    glTranslatef(5, 187, 90);
    glColor3f(1, 0, 0);
    glScalef(9, 2, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.5, 179, 90);
    glColor3f(1, 0, 0);
    glScalef(2, 15, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5, 180, 90);
    glColor3f(1, 0, 0);
    glScalef(9, 2, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5, 172.5, 90);
    glColor3f(1, 0, 0);
    glScalef(9, 2, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///Huruf B
    glPushMatrix();
    glTranslatef(19, 179, 90);
    glColor3f(1, 0, 0);
    glScalef(2, 15, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(22, 187, 90);
    glColor3f(1, 0, 0);
    glScalef(8, 2, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(26.5, 183.5, 90);
    glColor3f(1, 0, 0);
    glScalef(2, 9, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(24, 180, 90);
    glColor3f(1, 0, 0);
    glScalef(10, 2, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(28.5, 175.5, 90);
    glColor3f(1, 0, 0);
    glScalef(2, 9, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(24, 172, 90);
    glColor3f(1, 0, 0);
    glScalef(10, 2, 3);
    glutSolidCube(1);
    glPopMatrix();

    ///tekstur garis depan
    for(float garis = -15; garis <=25; garis+=20)
    {
        glPushMatrix();
        glTranslatef(garis, 135, 75);
        glColor3f(0.9, 0.8, 0.8);
        glScalef(1, 163, 30);
        glutSolidCube(1);
        glPopMatrix();
    }

    ///Atap bata nyamping paling atas depan
    glPushMatrix();
    glTranslatef(5, 222, 80);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(110, 20, 20);
    glutSolidCube(1);
    glPopMatrix();

    ///atapnya bata tiang depan
    float atapxz=105;
    for(int atapy=43; atapy<=63; atapy+=2)
    {
        glPushMatrix();
        glTranslatef(5, atapy, 110);
        glColor3f(0.9, 0.9, 0.9);
        glScalef(atapxz, 2, atapxz);
        glutSolidCube(1);
        atapxz+=5;
        glPopMatrix();
    }

    ///bata tiang segitiga depan kanan
    float batayka = -20;
    for(int bataxka= 35; bataxka>=20; bataxka-=1)
    {
        glPushMatrix();
        glTranslatef(50, batayka, 150);
        glColor3f(1.0, 0.5, 0.0);
        glScalef(bataxka, 10, bataxka);
        glutSolidCube(1);
        batayka+=3.8;
        glPopMatrix();
    }
    ///bata tiang segitiga depan kiri
    float batayki = -20;
    for(int bataxka= 35; bataxka>=20; bataxka-=1)
    {
        glPushMatrix();
        glTranslatef(-40, batayki, 150);
        glColor3f(1.0, 0.5, 0.0);
        glScalef(bataxka, 10, bataxka);
        glutSolidCube(1);
        batayki+=3.8;
        glPopMatrix();
    }

    ///Jendela lantai 1
    glPushMatrix();
    glTranslatef(0, -5, 0);
    jendela();
    glPopMatrix();

    ///Jendela lantai 2
    glPushMatrix();
    glTranslatef(0, 70, 0);
    jendela();
    glPopMatrix();

    ///Jendela lantai 3
    glPushMatrix();
    glTranslatef(0, 135, 0);
    jendela();
    glPopMatrix();

    ///pagar bawah
    for (int pgr = -30; pgr <= 40; pgr += 2)
    {
        glPushMatrix();
        glTranslatef(pgr, -12, 158);
        glColor3f(0.3, 0.3, 0.3);
        glScalef(1, 20, 2);
        glutSolidCube(1);
        glPopMatrix();
    }

    glPushMatrix();
    glTranslatef(0, -1.5, 158);
    glColor3f(0.3, 0.3, 0.3);
    glScalef(80, 1, 1);
    glutSolidCube(1);
    glPopMatrix();

    ///Tiang Putih Depan
    for(float tiangpd = 230; tiangpd>= -310; tiangpd-=90)
    {
        glPushMatrix();
        glTranslatef(tiangpd, 135, 60);
        glColor3f(0.8, 0.8, 0.8);
        glScalef(5, 155, 20);
        glutSolidCube(1);
        glPopMatrix();
    }

    ///Pipa Lantai 3-1 Kanan
    glPushMatrix();
    glTranslatef(295, 75, 70);
    glColor3f(1.0, 1.0, 1.0);
    glScalef(2, 205, 2);
    glutSolidCube(1);
    glPopMatrix();
    ///Pipa Lantai 3-1 Kiri
    glPushMatrix();
    glTranslatef(-295, 75, 70);
    glColor3f(1.0, 1.0, 1.0);
    glScalef(2, 205, 2);
    glutSolidCube(1);
    glPopMatrix();

    ///Pintu
    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(7, 0, 61);
    glScalef(40, 50, 5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(7, 0, 61.2);
    glScalef(0.5, 50, 5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(10, 0, 63.5);
    glScalef(1, 1, 1);
    glutSolidSphere(1, 36, 36);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(5, 0, 63.5);
    glScalef(1, 1, 1);
    glutSolidSphere(1, 36, 36);
    glPopMatrix();

    ///Luaran Pintu
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    glTranslatef(7, 0, 60.5);
    glScalef(50, 60, 5);
    glutSolidCube(1);
    glPopMatrix();

    ///Tambahan Bangunan Dasar
    //Atap Dasar
    glPushMatrix();
    glTranslatef(0, 233, -55);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(570, 30, 200);
    glutSolidCube(1);
    glPopMatrix();
    //Atap Dasar Gepeng
    glPushMatrix();
    glTranslatef(0, 250, -55);
    glColor3f(1.0, 0.87, 0.62);
    glScalef(800, 2, 350);
    glutSolidCube(1);
    glPopMatrix();

    ///Genting Depan
    float scalex=800;
    float translatefz=120;
    for(int gntngd=250; gntngd<=380; gntngd+=10)
    {
        glPushMatrix();
        glTranslatef(0, gntngd, translatefz);
        glColor3f(0.7, 0.5, 0.0);
        glScalef(scalex, 10, 20);
        glutSolidCube(1);
        scalex-=30;
        translatefz-=10;
        glPopMatrix();
    }

    ///Genting Belakang
    float scalexb=800;
    float translatefzb=-230;
    for(int gntngd=250; gntngd<=380; gntngd+=10)
    {
        glPushMatrix();
        glTranslatef(0, gntngd, translatefzb);
        glColor3f(0.7, 0.5, 0.0);
        glScalef(scalexb, 10, 20);
        glutSolidCube(1);
        scalexb-=30;
        translatefzb+=10;
        glPopMatrix();
    }

    ///Genting Samping
    //kanan
    float scalexska=360;
    float translatefxska=-400;
    for(int gntngska=250; gntngska<=380; gntngska+=10)
    {
        glPushMatrix();
        glTranslatef(translatefxska, gntngska, -50);
        glColor3f(0.7, 0.5, 0.0);
        glScalef(20, 10, scalexska);
        glutSolidCube(1);
        scalexska-=20;
        translatefxska+=15;
        glPopMatrix();
    }
    //kiri
    float scalexski=360;
    float translatefxski=400;
    for(int gntngski=250; gntngski<=380; gntngski+=10)
    {
        glPushMatrix();
        glTranslatef(translatefxski, gntngski, -50);
        glColor3f(0.7, 0.5, 0.0);
        glScalef(20, 10, scalexski);
        glutSolidCube(1);
        scalexski-=20;
        translatefxski-=15;
        glPopMatrix();
    }

    ///Ujung Genting
    //depan
    float scalexda=400;
    float translatefzda=20;
    for(int gntngda=340; gntngda<=460; gntngda+=10)
    {
        glPushMatrix();
        glTranslatef(0, gntngda, translatefzda);
        glColor3f(0.7, 0.5, 0.0);
        glScalef(scalexda, 10, 20);
        glutSolidCube(1);
        scalexda+=20;
        translatefzda-=5;
        glPopMatrix();
    }
    //belakang
    float scalexba=400;
    float translatefzba=-120;
    for(int gntngba=340; gntngba<=460; gntngba+=10)
    {
        glPushMatrix();
        glTranslatef(0, gntngba, translatefzba);
        glColor3f(0.7, 0.5, 0.0);
        glScalef(scalexba, 10, 20);
        glutSolidCube(1);
        scalexba+=20;
        translatefzba+=5;
        glPopMatrix();
    }

    ///Pipa Genting Depan
    for(int ppg=250; ppg>=-250; ppg-=90)
    {
        //vertical
        glPushMatrix();
        glTranslatef(ppg, 240, 70);
        glRotatef(45.0, 1.0, 0 , 0);
        glColor3f(1.0, 1.0, 1.0);
        glScalef(2, 70, 2);
        glutSolidCube(1);
        glPopMatrix();

        //vertical
        glPushMatrix();
        glTranslatef(ppg, 249, 75);
        glRotatef(45.0, 1.0, 0 , 0);
        glColor3f(1.0, 1.0, 1.0);
        glScalef(30, 2, 5);
        glutSolidCube(1);
        glPopMatrix();
    }
    ///Pipa Genting Belakang
    for(int ppg=250; ppg>=-250; ppg-=90)
    {
        //vertical
        glPushMatrix();
        glTranslatef(ppg, 240, -175);
        glRotatef(-45.0, 1.0, 0 , 0);
        glColor3f(1.0, 1.0, 1.0);
        glScalef(2, 70, 2);
        glutSolidCube(1);
        glPopMatrix();

        //vertical
        glPushMatrix();
        glTranslatef(ppg, 249, -180);
        glRotatef(-45.0, 1.0, 0 , 0);
        glColor3f(1.0, 1.0, 1.0);
        glScalef(30, 2, 5);
        glutSolidCube(1);
        glPopMatrix();
    }

    glPushMatrix();
    glTranslatef(0, 0, -235);
    sisibelakang();
    glPopMatrix();

    ///Jendela belakang bawah
    glPushMatrix();
    glTranslatef(0, 0, -225);
    jendela2();
    glPopMatrix();

    ///Jendela belakang tengah
    glPushMatrix();
    glTranslatef(0, 70, -225);
    jendela2();
    glPopMatrix();

    ///Jendela belakang atas
    glPushMatrix();
    glTranslatef(0, 135, -225);
    jendela2();
    glPopMatrix();

    ///Pagar di atas Bata nyamping atas
    for(float pageratas = 290; pageratas>=70; pageratas-=20)
    {
        glPushMatrix();
        glTranslatef(pageratas, 200, 65);
        glColor3f(0.9, 0.8, 0.8);
        glScalef(5, 25, 5);
        glutSolidCube(1);
        glPopMatrix();
    }

    for(float pageratas2 = -65; pageratas2>=-300; pageratas2-=20)
    {
        glPushMatrix();
        glTranslatef(pageratas2, 200, 65);
        glColor3f(0.9, 0.8, 0.8);
        glScalef(5, 25, 5);
        glutSolidCube(1);
        glPopMatrix();
    }

    glPushMatrix();
    glTranslatef(180, 212, 65);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(250, 2, 5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(180, 202, 65);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(255, 2, 5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-175, 212, 65);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(260, 2, 5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-175, 202, 65);
    glColor3f(0.9, 0.8, 0.8);
    glScalef(260, 2, 5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    jaringbawah();
    glPopMatrix();

    glPushMatrix();
    jaring();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 65, 0);
    jaring();
    glPopMatrix();

    for (float interz = -120; interz <= 40; interz+=70)
    {
        for(float inter = -220; inter <= 360; inter+=60)
        {
            glPushMatrix();
            glTranslatef(inter, -9, interz);
            interior();
            glPopMatrix();
        }
    }


    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    ///s dan w untuk rotasi depan dan belakang
    case 's':
    case 'S':
        xx1 = 1;
        yy1 = 0;
        zz1 = 0;
        sudut+=-10;
        break;
    case 'w':
    case 'W':
        xx1 = -1;
        yy1 = 0;
        zz1 = 0;
        sudut+=-10;
        break;
    ///a dan d untuk rotasi kiri dan kanan
    case 'd':
    case 'D':
        xx1 = 0;
        yy1 = 1;
        zz1 = 0;
        sudut+=-10;
        break;
    case 'a':
    case 'A':
        xx1 = 0;
        yy1 = -1;
        zz1 = 0;
        sudut+=-10;
        break;
    ///x dan z untuk translate posisi ke kanan dan kiri
    case 'z':
    case 'Z':
        xxx1+=10;
        break;
    case 'x':
    case 'X':
        xxx1+=-10;
        break;
    ///c dan v untuk translate posisi ke atas dan bawah
    case 'v':
    case 'V':
        yyy1+=10;
        break;
    case 'c':
    case 'C':
        yyy1+=-10;
        break;
    ///b dan n untuk translate posisi ke depan dan belakang (zoom in zoom out)
    case 'b':
    case 'B':
        zzz1+=10;
        break;
    case 'n':
    case 'N':
        zzz1+=-10;
        break;
    ///e dan q untuk rotasi dengan poros sumbu z
    case 'e':
    case 'E':
        xx1 = 0;
        yy1 = 0;
        zz1 = 1;
        sudut+=-10;
        break;
    case 'q':
    case 'Q':
        xx1 = 0;
        yy1 = 0;
        zz1 = -1;
        sudut+=-10;
        break;
    ///i untuk melihat ke dalam
    case 'i':
        zzz1+=150;
        xx1 = 0;
        yy1 = 1;
        zz1 = 0;
        sudut+=-45;
        break;
    ///capslock I untuk kembali melihat normal (lawannya tombol i kecil)
    case 'I':
        zzz1-=150;
        xx1 = 0;
        yy1 = 1;
        zz1 = 0;
        sudut-=-45;
        break;
    case 'u':
        zzz1+=150;
        xx1 = 0;
        yy1 = 1;
        zz1 = 0;
        sudut+=45;
        break;
    case 'U':
        zzz1-=150;
        xx1 = 0;
        yy1 = 1;
        zz1 = 0;
        sudut-=45;
        break;
    case 'o':
        zzz1+=150;
        xx1 = 1;
        yy1 = -5;
        zz1 = 0;
        sudut+=20;
        break;
    case 'O':
        zzz1-=150;
        xx1 = 1;
        yy1 = -5;
        zz1 = 0;
        sudut-=20;
        break;
    case 'p':
        zzz1+=-230;
        yyy1+=-120;
        break;
    case 'P':
        zzz1-=-230;
        yyy1-=-120;
        break;
    case 'y':
        zzz1+=-50;
        yyy1+=-80;
        break;
    case 'Y':
        zzz1-=-50;
        yyy1-=-80;
        break;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y) {
    if (mouseDown) {
        yrot = x - xdiff;
        xrot = y + ydiff;
        glutPostRedisplay();
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(100, 0);
    glutInitWindowSize(1200, 700);
    glutCreateWindow("TR Dosen 672020162 - 672020166");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(440.0, 1.5, 1.0, 1000.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glutMainLoop();
}
