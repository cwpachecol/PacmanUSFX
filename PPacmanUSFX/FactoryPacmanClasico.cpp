#include "FactoryPacmanClasico.h"

GameObject* FactoryPacmanClasico::createPacmanInstance(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron) {
    return new Pacman(_tile, _texturaPacman, _posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla, _velocidadPatron);
}