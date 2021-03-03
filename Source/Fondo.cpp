#include "Fondo.h"

float width, height;

Fondo::Fondo() {

	PosX = -400;
	PosY = 300;

}

void Fondo::Dibujar() {

	glPushMatrix();

	glTranslatef(PosX, PosY, -1);

	//Dibujando el fondo azul principa
	glColor3f(0.4f, 0.4f, 1.0f);

	glBegin(GL_QUADS);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(800, 0.0f);
	glVertex2f(800, -600);
	glVertex2f(0.0f, -600);

	glEnd();

	glPopMatrix();

}
	
void Fondo::Actualizar() {



}
