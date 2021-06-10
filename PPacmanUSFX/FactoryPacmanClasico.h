#pragma once
#include "Factory.h"
#include "Pacman.h"
#include "Fantasma.h"
#include "Fruta.h"
#include "Pared.h"
#include "Moneda.h"

class FactoryPacmanClasico :
    public Factory
{
public:
    GameObject* createPacmanInstance(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _velocidadPatron) override;
    
 /*   GameObject* createFantasmaInstance() {
        return new Fantasma;
    }

    GameObject* createParedInstance() {
        return new Pared;
    }

    GameObject* createFrutaInstance() {
        return new Fruta;
    }

    GameObject* createMonedaInstance() {
        return new Moneda;
    }*/

};

