#pragma once

#include "Tile.h"
#include "Pared.h"
class ParedClasica :
	public Pared
{
private:
	const int timeColor = 100;
	int cont;
	int tiempoVisible;
	int tiempoNoVisible;
	int contadorTiempoVisible;
	int contadorTiempoNoVisible;
public:
	ParedClasica(int tipo, Tile* _tile, Texture* _paredTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
	void update();
};

