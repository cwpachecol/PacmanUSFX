#pragma once
#include "Fantasma.h"
class FantasmaClasico :
    public Fantasma
{

private:

    Tile* tileActual;
    Tile* tileSiguiente;


public:

    FantasmaClasico(Tile* _tile, Texture* _fantasmaClasicoTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron);
    Tile* getTile() { return tileActual; }
    Tile* getTileSiguiente() { return tileSiguiente; }
    void setTile(Tile* _tileNuevo);
    void setTileSiguiente(Tile* _tileNuevoSiguiente) { tileSiguiente = _tileNuevoSiguiente; }

    

};

