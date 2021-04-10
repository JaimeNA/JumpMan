#pragma once

#include "Figura.h"

#include<GL/glut.h>

class Personaje
{

public:

	Personaje();

	void Dibujar();
	void Actualizar();
	bool Coliciono();

	void SetX(float X) { PosX += X; }
	void SetY(float Y) { PosY += Y; }

	double GetX() { return PosX; }
	double GetY() { return PosY; }

private:

	static float PosX, PosY;

};

