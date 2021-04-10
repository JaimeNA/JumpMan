#pragma once

#include<GL/glut.h>

class Cuadrado {

public:

	Cuadrado();
	Cuadrado(double x, double y){PosX = x, PosY = y;}//Constructor aparte para la lista

	void Dibujar();
	void Actualizar();


	void SetX(float X) { PosX = X; }
	void SetY(float Y) { PosY = Y; }

	double GetX() { return PosX; }
	double GetY() { return PosY; }

private:

	int PosX, PosY;

};


