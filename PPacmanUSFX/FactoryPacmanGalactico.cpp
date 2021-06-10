#include "FactoryPacmanGalactico.h"

GameObject* FactoryPacmanGalactico::createPacmanInstance(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _velocidad) {
    return new PacmanGalactico(_tile, _texturaPacman, _posicionX, _posicionY, _velocidad);
}

GameObject* FactoryPacmanGalactico::createFantasmaInstance(Tile* _tile, Texture* _texturaFantasma, int _posicionX, int _posicionY, int _velocidad) {
    return new FantasmaGalactico(_tile, _texturaFantasma, _posicionX, _posicionY, _velocidad);
}

GameObject* FactoryPacmanGalactico::createParedInstance(Tile* _tile, Texture* _texturaPared, int _posicionX, int _posicionY, bool _isElectric) {
    return new ParedGalactico(_tile, _texturaPared, _posicionX, _posicionY, _isElectric);
}

GameObject* FactoryPacmanGalactico::createFrutaInstance(Tile* _tile, Texture* _texturaFruta, int _posicionX, int _posicionY) {
    return new FrutaGalactico(_tile, _texturaFruta, _posicionX, _posicionY);
}

GameObject* FactoryPacmanGalactico::createMonedaInstance(Tile* _tile, Texture* _texturaMoneda, int _posicionX, int _posicionY) {
    return new MonedaGalactico(_tile, _texturaMoneda, _posicionX, _posicionY);
}
