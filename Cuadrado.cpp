
#include "Cuadrado.h"

Cuadrado::Cuadrado() {

	PosX = 0;//Posicion de la matriz de los cuadrados
	PosY = 0;

}

void Cuadrado::Dibujar(){

	glPushMatrix();

	glTranslatef(PosX, PosY, 1);

	//Dibujando el cuadrado
	glColor3f(0.4f, 0.4f, 0.4f);

	glBegin(GL_QUADS);
	cout << "Executan";
	glVertex2f(0.0f, 0.0f);
	glVertex2f(40, 0.0f);
	glVertex2f(40, -40);
	glVertex2f(0.0f, -40);

	glEnd();

	glPopMatrix();

}

void Cuadrado::Actualizar(){



}
