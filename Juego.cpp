#include "Juego.h"
#include"Personaje.h"
#include"Fondo.h"

Personaje Mario;

Fondo Fondo1;

bool Juego::Bufer[256];
bool Juego::saltar = false;

float Juego::VelY = 22;

Juego::Juego(){

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(50, 50);//Posicion de la ventana
	glutInitWindowSize(800, 600);//Tama�o de la ventana
	glutCreateWindow("JumpMan");//Nombre de la ventana

	glutDisplayFunc(Dibujar);//Para que dibuje

	glutKeyboardFunc(ProcesarTeclasPresionandas);//Teclas precionadas 
	glutKeyboardUpFunc(ProcesarTeclasSinPrecionar);//Teclas sin precionar

	glutIdleFunc(Actualizar);//Para que se repita constantemente

	Iniciar();//Llamo aca porque solo la voy a instanciar una vez

}

void Juego::Iniciar(){

	glClearColor(1, 1, 1, 1);//Color con el que limpia la pantalla

	glMatrixMode(GL_PROJECTION); //Para que  las matrices sean de 800x600 y no de 1x1
	glLoadIdentity();

	glOrtho(0, 800, 0, 600, -1, 1);//Configurando la camara

	glMatrixMode(GL_MODELVIEW);//Diciendole que vamos a usar matrices
	glLoadIdentity();
}

void Juego::Dibujar(){

	glClear(GL_COLOR_BUFFER_BIT);//Para que limpie la ventana

	glPushMatrix();//Creando una matris

	glTranslatef(400.0f, 300.0f, 0.0f);

	Fondo1.Dibujar();

	DibujarPiso();

	Mario.Dibujar();

	glPopMatrix();//Destruyendo la matris

	glutSwapBuffers();//Porque estamos trabajando con double buffer

}

//Las dos clases siguientes son para que el input del teclado sea mas dinamico y soporte multiples teclas a la vez

void Juego::ProcesarTeclasPresionandas(unsigned char Tecla, int x, int y){

	Bufer[Tecla] = true;//Ahora el numero de tal tecla va ser verdadero, por lo tanto significa que esta precionada

}

void Juego::ProcesarTeclasSinPrecionar(unsigned char Tecla, int x, int y) {

	Bufer[Tecla] = false;//Ahora el numero de tal tecla va ser false, por lo tanto significa que no esta precionada

}

void Juego::ProcesarTeclado() {

	//Procesando las teclas precionadas:

	if (Bufer[97]) {//Tecla A
	
		Mario.SetX(-5);
	
	}

	if (Bufer[100]) {//Tecla D
	
		Mario.SetX(5);
	
	}

	//Si esta en el aire (no hay colicion), entonces se va a ejecutar lo sigu1ente

	if (Bufer[119] && Mario.Coliciono()) {//Tecla W

		saltar = true;


	}
}

void Juego::Saltar(){

	if(saltar && Mario.GetY() < 100){

		Mario.SetY(VelY);

		VelY -= 0.5f;

	}else{

		VelY = 22;
		saltar = false;

	}
}

void Juego::Actualizar(){

	static float TiempoTranscurrido = 0.0f;

	if (glutGet(GLUT_ELAPSED_TIME) - (TiempoTranscurrido + 1/60) > 0) {//Cada 60 partes de segundo, se va a ectualizar
	
		TiempoTranscurrido = glutGet(GLUT_ELAPSED_TIME);

		ProcesarTeclado();//Procesando el input del teclado almacenado en un boleano

		Mario.Actualizar();

		Saltar();

		glutPostRedisplay();

	}

}

void Juego::DibujarPiso(){

	glPushMatrix();//Creando una matris

	glTranslatef(-400.0f, -200, 0.0f);

	glColor3f(0.0f, 0.5f, 0.0f);//Verde un poco claro
	
	glBegin(GL_QUADS);//Empezando a dibujar

	glVertex2f(0.0f, 0.0f);
	glVertex2f(800.0f, 0.0f);
	glVertex2f(800.0f, -100.0f);
	glVertex2f(0.0f, -100.0f);

	glEnd();//Terminando de dibujar

	glPopMatrix();//Destruyendo la matris

}
