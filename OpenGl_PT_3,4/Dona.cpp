#include "Dona.h"

void Dona::DibujarDona(float x, float y, float z) {
	glPushMatrix();
	glTranslatef(x, y, z);
	glutSolidTorus(1.25,2.5,3.75,12);
	glPopMatrix();
}