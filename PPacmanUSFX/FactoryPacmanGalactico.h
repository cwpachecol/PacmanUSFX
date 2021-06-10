#pragma once
#include "Factory.h"
#include "PacmanGalactico.h"
#include "FantasmaGalactico.h"
#include "ParedGalactico.h"
#include "FrutaGalactico.h"
#include "MonedaGalactico.h"
#include "Tile.h"

class FactoryPacmanGalactico :
    public Factory
{
public:
    GameObject* createPacmanInstance(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _velocidadPatron) {
        return new PacmanGalactico(_tile, _texturaPacman, _posicionX, _posicionY, _velocidadPatron);
    }


    //GameObject* createFantasmaInstance() {
    //    return new FantasmaGalactico();
    //}

    //GameObject* createParedInstance() {
    //    return new ParedGalactico();
    //}

    //GameObject* createFrutaInstance() {
    //    return new FrutaGalactico();
    //}

    //GameObject* createMonedaInstance() {
    //    return new MonedaGalactico();
    //}

};

