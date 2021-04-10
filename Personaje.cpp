#include "Personaje.h"
#include "Figura.h"

float Personaje::PosX, Personaje::PosY;

Figura figura;

Personaje::Personaje() {

	PosX = -100.0f;
	PosY = -180.0f;

}

bool Personaje::Coliciono() {

	if (PosY <= -180) {
	
		return true;//Si colociono
	
	}/*else if(figura.Colision(PosX, PosY)){

		return true;

	}*/else{
	
		return false;//No coliciono
	
	}

}

void Personaje::Dibujar() {

	glPushMatrix();//Creando una matris

	glTranslatef(PosX, PosY, 0.0f);

	glColor3f(0.3f, 0.2f, 0.0f);

	glBegin(GL_QUADS);//Empezando a dibujar

	glVertex2f(-10.0f, 10.0f);
	glVertex2f(10.0f, 10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(-10.0f, -10.0f);

	glEnd();//Terminando de dibujar

	glPopMatrix();//Destruyendo la matris


}

void Personaje::Actualizar() {

	if (!Coliciono()) {//Si esta mas alto que el piso
	
		PosY -= 5.0f;//Gravedad

	}
}
