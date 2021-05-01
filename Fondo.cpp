#include "Fondo.h"
#include"Cuadrado.h"
#include"Figura.h"

Fondo::Fondo() {

}

void Fondo::Dibujar() {

	//Dibujando el fondo azul principal
	glColor3f(0.4f, 0.4f, 1.0f);

	glBegin(GL_QUADS);

	glVertex2f(-400.0f, 300.0f);
	glVertex2f(400.0f, 300.0f);
	glVertex2f(400.0f, -300.0f);
	glVertex2f(-400.0f, -300.0f);

	glEnd();
}
	
void Fondo::Actualizar() {



}

Figura Linea;

void Fondo::GenObstaculos(){

	Linea.SetX(100);
	Linea.SetY(100);
	Linea.Dibujar('L');
}
