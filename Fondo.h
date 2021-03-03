#pragma once

#include<GL/glut.h>
#include<iostream>

using namespace std;

class Fondo
{

public:

	Fondo();

	void Dibujar();
	void Actualizar();



private:

	float PosX, PosY;

	static float VelFondo;

};

