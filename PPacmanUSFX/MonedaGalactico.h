#pragma once
#include "MonedaBase.h"
class MonedaGalactico :
    public MonedaBase
{
public:
    MonedaGalactico(Tile* _tile, Texture* _monedaTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);

};

