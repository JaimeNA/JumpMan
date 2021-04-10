#pragma once

#include "Cuadrado.h"
#include "Personaje.h"
#include "Juego.h"

#include<GL/glut.h>
#include<iostream>
#include<list>

using namespace std;

class Figura {

public:

	Figura();

	void Dibujar(char Tipo);
	void Actualizar();

	void DibujarFiguras();//Dibuja las Figuras almacenadas

	void SetX(float X) { PosX = X; }
	void SetY(float Y) { PosY = Y; }

	static bool Colision(int PerX, int PerY);

private:

	int PosX, PosY;

	static list<Cuadrado> Figuras;//Lista para almacenar las figuras

};
