#include "Esfera.h"

void Esfera::DibujarEsfera(float x, float y, float z) {
	glPushMatrix();
	glTranslatef(x, y, z);
	glutSolidSphere(15, 16, 70);
	glPopMatrix();
}
