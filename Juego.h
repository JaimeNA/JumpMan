
#pragma once

#include<GL/glut.h>
#include <chrono>
#include <thread>
#include <iostream>
class Juego
{

public:

	Juego();//Contructor

	static void Dibujar();
	static void Actualizar();
	static void ProcesarTeclasPresionandas(unsigned char Tecla, int x, int y);
	static void ProcesarTeclasSinPrecionar(unsigned char Tecla, int x, int y);
	static void ProcesarTeclado();//El teclado en general
	static void Iniciar();

	static void DibujarPiso();

private:

	static bool Bufer[256];//Para moltiples teclas presionadas a la vez

};

