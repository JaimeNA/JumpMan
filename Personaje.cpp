#include "Personaje.h"
#include "Figura.h"

float Personaje::PosX, Personaje::PosY;

list<Cuadrado> Figura::Figuras;

Personaje::Personaje() {

	PosX = -100.0f;
	PosY = -180.0f;

}

bool Personaje::Coliciono() {

	list<Cuadrado>::iterator p = Figuras.begin();

	while(p != Figuras.end()){//Recorre todos los elementos de la lista

		if(p->GetY() == GetY()){



		}

		p++;

	}

	if (PosY <= -180) {
	
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

	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(10.0f, -20.0f);
	glVertex2f(-10.0f, -20.0f);

	glEnd();//Terminando de dibujar

	glPopMatrix();//Destruyendo la matris


}

void Personaje::Actualizar() {

	if (!Coliciono()) {//Si esta mas alto que el piso
	
		PosY -= 5.0f;//Gravedad

	}
}
