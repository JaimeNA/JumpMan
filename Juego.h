
#pragma once

#include"Cuadrado.h"

#include<GL/glut.h>
#include<list>

class Juego
{

public:

	Juego();//Contructor

	static void Dibujar();
	static void Actualizar();
	static void ProcesarTeclasPresionandas(unsigned char Tecla, int x, int y);
	static void ProcesarTeclasSinPrecionar(unsigned char Tecla, int x, int y);
	static void ProcesarTeclado();//El teclado en general
	static void Saltar();
	static void Iniciar();

	static void DibujarPiso();
	static void GenNivel(short Nivel);

private:

	static bool Bufer[256];//Para moltiples teclas presionadas a la vez

	static bool saltar;

	static float VelY;

};


