#pragma once
#include "Fruta.h"
class FrutaClasica :
    public Fruta
{
private:
	int aumentarPuntosVida;
	int aumentarVelocidad;

public:
	FrutaClasica(Texture* _frutaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
	int getAumentarPuntosVida() { return aumentarPuntosVida; }
	int getAumentarVelocidad() { return aumentarVelocidad; }

	void setAumentarPuntosVida(int _aumentarPuntosVida) { aumentarPuntosVida = _aumentarPuntosVida; }
	void setAumentarVelocidad(int _aumentarVelocidad) { aumentarVelocidad = _aumentarVelocidad; }

	//Manejador de Eventos
};

