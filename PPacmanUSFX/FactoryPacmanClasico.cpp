#include "FactoryPacmanClasico.h"

GameObject* FactoryPacmanClasico::createPacmanInstance(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _velocidadPatron) {
    return new Pacman(_tile, _texturaPacman, _posicionX, _posicionY, _velocidadPatron);
}