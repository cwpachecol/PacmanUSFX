#include "MonedaBase.h"

MonedaBase::MonedaBase(Tile* _tile, Texture* _monedaTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla) :
	GameObject(_monedaTextura, _posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla)
{
	tileActual = _tile;

	if (tileActual != nullptr) {
		tileActual->setMonedaBase(this);

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;
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

void MonedaBase::setTile(Tile* _tileNuevo) {
	if (tileActual != nullptr) {
		tileActual->setMonedaBase(nullptr);
	}

	tileActual = _tileNuevo;

	if (tileActual != nullptr) {
		tileActual->setMonedaBase(this);

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;
	}
}

void MonedaBase::deleteGameObject()
{
	GameObject::deleteGameObject();
	tileActual->setMonedaBase(nullptr);
}