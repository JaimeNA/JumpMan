
#include "Figura.h"
#include "Juego.h"

Cuadrado Cuadro[4];//Gen los 4 cuadros que formaran la figura

list<Cuadrado> Figura::Figuras;

Figura::Figura() {


	PosX = 0;//Posicion de la matriz de las figuras
	PosY = 0;


}

void Figura::Dibujar(char Tipo) {

	glPushMatrix();

	glTranslatef(PosX, PosY, 1);

	switch(Tipo){//Dibujando dependiendo del tipo asignado

		case 'L'://L de Linea

			Cuadro[0].Dibujar();

			Cuadro[1].SetX(40);
			Cuadro[1].Dibujar();

			Cuadro[2].SetX(80);
			Cuadro[2].Dibujar();

			Cuadro[3].SetX(120);
			Cuadro[3].Dibujar();

		break;

		case 'P'://P de punto

			Cuadro[0].Dibujar();

		break;

		default:

		break;

	}

	Actualizar();

	glPopMatrix();


}

void Figura::Actualizar() {

	short i;//Guardando las figuras dibujadas previamente

	for(i = 0;i < 3; i++){

		Figuras.push_back(Cuadrado(Cuadro[i].GetX(), Cuadro[i].GetY()));

	}

	DibujarFiguras();

}

void Figura::DibujarFiguras() {

	list<Cuadrado>::iterator p = Figuras.begin();

	while(p != Figuras.end()){//Recorre todos los elementos de la lista

		p->Dibujar();//Los dibuja
		p++;

	}

}
