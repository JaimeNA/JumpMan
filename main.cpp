
#include<GL/glut.h>

#include"Juego.h"

int main(int argc, char * args[])
{
	
	//Initializando glut
	glutInit(&argc, args);

	//Objeto juego

	Juego Partida1;

	glutMainLoop();//Para que se repita constantemente

	return 0;

}