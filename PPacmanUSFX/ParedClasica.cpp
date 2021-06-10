#include "ParedClasica.h"

ParedClasica::ParedClasica(int tipo, Tile* _tile, Texture* _paredTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla)
	:Pared(tipo, _tile, _paredTextura, _posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla)
{
	tiempoVisible = 0;
	tiempoNoVisible = 0;
	contadorTiempoVisible = 0;
	contadorTiempoNoVisible = 0;
	cont = 0;
}

void ParedClasica::update() {
	//if (contadorTiempoVisible >= tiempoVisible) {
	//	visible = false;
	//	if (contadorTiempoNoVisible >= tiempoNoVisible) {
	//		tiempoVisible = 500 + rand() % (100 - 500);
	//		tiempoNoVisible = 500 + rand() % (100 - 500);
	//		contadorTiempoVisible = 0;
	//		contadorTiempoNoVisible = 0;
	//		visible = true;
	//	}
	//	else {
	//		contadorTiempoNoVisible++;
	//	}
	//}
	//else {
	//	contadorTiempoVisible++;
	//}
	if (cont >= timeColor) {
		int color = 17 + rand() % (22 - 17);
		setTexture(color);
		cont = 0;
	}
	else
		cont++;
}