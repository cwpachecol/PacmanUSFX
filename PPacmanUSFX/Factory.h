#pragma once
#include "GameObject.h"
#include "Tile.h"

class Factory
{
public:
	virtual GameObject* createPacmanInstance(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron) = 0;
	/*virtual GameObject* createFantasmaInstance() = 0;
	virtual GameObject* createParedInstance() = 0;
	virtual GameObject* createFrutaInstance() = 0;
	virtual GameObject* createMonedaInstace() = 0;*/

};

