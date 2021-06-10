#include <stdio.h>
#include "Pacman.h"

//Pacman* Pacman::instancia = nullptr;
//
//Pacman* Pacman::crearInstancia(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron) {
//	if (instancia == nullptr) {
//		instancia = new Pacman(_tile, _texturaPacman, _posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla, _velocidadPatron);
//	}
//	
//	return instancia;
//
//}

Pacman::Pacman(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _velocidad) :
	GameObject(_texturaPacman, _posicionX, _posicionY)
{
	direccionActual = MOVE_RIGHT;
	direccionSiguiente = MOVE_RIGHT;

	// Inicializa propiedade de de pacman
	velocidad = _velocidad;
	energia = 5;
}

void Pacman::restarEnergia() {
	if (energia > 0) {
		energia--;
	}
}


void Pacman::handleEvent(SDL_Event* event)
{
	if (event->type == SDL_KEYDOWN && event->key.repeat == 0) {
		switch (event->key.keysym.sym)
		{
			// Move up
			case SDLK_UP:
				direccionSiguiente = MOVE_UP; break;

			// Move down
			case SDLK_DOWN:
				direccionSiguiente = MOVE_DOWN; break;

			// Move left
			case SDLK_LEFT:
				direccionSiguiente = MOVE_LEFT; break;

			// Move right
			case SDLK_RIGHT:
				direccionSiguiente = MOVE_RIGHT; break;
		}
	}
}

void Pacman::RestarVida() {
	if (vida > 0) {
		vida--;
	}
}
