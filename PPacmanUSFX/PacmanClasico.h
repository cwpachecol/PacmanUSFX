#pragma once
#include <iostream>
#include <string>
#include <algorithm>

#include <SDL.h>

#include "GameObject.h"
#include "Texture.h"
#include "Tile.h"
#include "TileGraph.h"
#include "Moneda.h"
#include "Fantasma.h"
#include "Fruta.h"
#include "MoveDirection.h"
#include "TextureManager.h" 

using namespace std;

class PacmanClasico :
	public Pacman
{
protected:
	//PROPIEDADES

	Tile* tileActual;
	Tile* tileSiguiente;

	MoveDirection direccionActual;
	MoveDirection direccionSiguiente;


	// Velocidad a la que mueve el fantasma en cualquier eje
	int velocidad;

	int posicionXEnTextura;
	int posicionYEnTextura;

	int vida;
	int portal;


public:
	//METODOS 

	//Constructores y destructores
	PacmanClasico(Tile* _tile, Texture* _texturaPacmanClasico, int _posicionX, int _posicionY, int _velocidad);
	~PacmanClasico();

	static const int Width = 25;
	static const int Height = 25;


	//Metodos accesores

	int getVelocidad() { return velocidad; }
	Tile* getTile() { return tileActual; }
	Tile* getTileSiguiente() { return tileSiguiente; }
	int getVida() { return vida; }

	int getPortales() { return portal; }


	// Mark the object to be deleted
	//void Delete();
	void setVelocidad(int _velocidad) { velocidad = _velocidad; }
	void setTile(Tile* _tileNuevo);
	void setTileSiguiente(Tile* _tileSiguienteNuevo) { tileSiguiente = _tileSiguienteNuevo; }
	void setVida(int _vida) { vida = _vida; }
	void setPortales(int _portal) { portal = _portal; }




	// Metodos varios
	bool tratarDeMover(MoveDirection _direccionNueva);

	//vida del pacman
	void RestarVida();



};
