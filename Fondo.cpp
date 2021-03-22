#include "Fondo.h"
#include"Cuadrado.h"
#include"Figura.h"

Fondo::Fondo() {

	PosX = -400;
	PosY = 300;

}

void Fondo::Dibujar() {

	glPushMatrix();

	glTranslatef(PosX, PosY, -1);

	//Dibujando el fondo azul principal
	glColor3f(0.4f, 0.4f, 1.0f);

	glBegin(GL_QUADS);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(800, 0.0f);
	glVertex2f(800, -600);
	glVertex2f(0.0f, -600);

	glEnd();

	GenObstaculos();

	glPopMatrix();

}
	
void Fondo::Actualizar() {



}

void Fondo::GenObstaculos(){

	Figura Linea;

	Linea.SetX(100);
	Linea.SetY(-300);
	Linea.Dibujar('L');

	Linea.SetX(500);
	Linea.SetY(-200);
	Linea.Dibujar('L');

	Linea.SetX(300);
	Linea.SetY(-100);
	Linea.Dibujar('P');
}
