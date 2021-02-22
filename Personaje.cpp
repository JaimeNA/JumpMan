#include "Personaje.h"

float Personaje::PosX, Personaje::PosY;

Personaje::Personaje() {

	PosX = -100.0f;
	PosY = -150.0f;

}

bool Personaje::Coliciono() {

	if (PosY <= -150) {
	
		return true;//Si colociono
	
	}else {
	
		return false;//No coliciono
	
	}

}

void Personaje::Dibujar() {

	glPushMatrix();//Creando una matris

	glTranslatef(PosX, PosY, 0.0f);

	glColor3f(0.3f, 0.2f, 0.0f);

	glBegin(GL_QUADS);//Empezando a dibujar

	glVertex2f(-25.0f, 0.0f);
	glVertex2f(25.0f, 0.0f);
	glVertex2f(25.0f, -50.0f);
	glVertex2f(-25.0f, -50.0f);

	glEnd();//Terminando de dibujar

	glPopMatrix();//Destruyendo la matris


}

void Personaje::Actualizar() {

	if (!Coliciono()) {//Si esta mas alto que el piso
	
		PosY -= 0.7f;//Gravedad

	}
}