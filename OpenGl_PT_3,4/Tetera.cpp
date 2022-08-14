#include "Tetera.h"

void Tetera::DibujarTetera(float x, float y, float z) {
	glPushMatrix();
	glTranslatef(x, y, z);
	glutSolidTeapot(1);
	glPopMatrix();
}