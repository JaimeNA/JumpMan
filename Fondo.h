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

	void GenObstaculos();

private:

	static float VelFondo;

};

