#include "Moneda.h"

Moneda::Moneda(Tile* _tile, Texture* _textura) :
	GameActor(_textura)
{
	tileActual = _tile;

	if (tileActual != nullptr) {
		tileActual->setMoneda(this);

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;

		ancho = Tile::anchoTile;
		alto = Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}

	// Inicializa propiedade de de pacman
	valor = 1;
	tipoPoderMoneda = PODER_MONEDA_NINGUNO;
	tiempoPoderMoneda = 0;
}

void Moneda::setTileActual(Tile* _tileNuevo) {
	if (tileActual != nullptr) {
		tileActual->setMoneda(nullptr);
	}

	tileActual = _tileNuevo;

	if (tileActual != nullptr) {
		tileActual->setMoneda(this);

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;
 	}
}

void Moneda::deleteGameObject()
{
	GameActor::deleteGameObject();
	tileActual->setMoneda(nullptr);
}
