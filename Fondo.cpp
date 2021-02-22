#include "Fondo.h"

float width, height;

GLuint textureID;

Fondo::Fondo() {

	PosX = -400;
	PosY = 300;

}

void Fondo::Dibujar() {
	
	glPushMatrix();

	glTranslatef(PosX, PosY, -1);

	//Dibujando el fondo azul principal

	glColor3f(1, 1, 1);

	glBegin(GL_QUADS);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(width, 0.0f);
	glVertex2f(width, -(height));
	glVertex2f(0.0f, -(height));

	glEnd();

	glPopMatrix();
	
}
	
void Fondo::Actualizar() {



}
