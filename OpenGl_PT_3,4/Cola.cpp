#include "Cola.h"

void Cola::dibujarCola(float x, float y, float z) {
    int i, angle = -135, sec = 30;
    glPushMatrix();
    glTranslatef(x, y, z);
    glPushMatrix();
    glTranslatef(-0.5, 0.0, 0.0);

    for (i = 0; i < sec; i++) {
        glRotatef((GLfloat)angle, 0.0, 0.0, 1.0);
        glTranslatef(0.5, 0.0, 0.0);
        glPushMatrix();
        glScalef(1.0, 0.4, 1.0);
        glutSolidCube(1.0);
        glPopMatrix();
        glTranslatef(0.5, 0.0, 0.0);
        angle *= 0.8;
        if (i > 2) {
            angle += 3;
        }
    }
    glPopMatrix();
    glPopMatrix();
}
