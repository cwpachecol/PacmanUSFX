#pragma once
#include "Tile.h"
#include "Pared.h"
#include "Pacman.h"

class ParedGalactico :  public Pared
{
private:
    int velocidadPacman;
    bool isElectrica;
    Tile* tileActual;
    bool isGalactico;
    int state;
    int cont1 = 50;
    int cont2 = 100;
    const int electricTime = 50;
    const int notElectricTime = 100;
public:
     ParedGalactico(bool _isElectrica, int tipo, Tile* _tile, Texture* _paredTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
     void update();
};

