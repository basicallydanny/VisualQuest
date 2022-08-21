#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"

class Esfera{
public:
	Esfera() {};
	void DibujarEsfera(float x, float y, float z);
};
