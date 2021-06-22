#pragma once
#include <iostream>
#include <string>
#include <algorithm>

#include <SDL.h>

#include "GamePawn.h"
#include "Texture.h"
#include "Tile.h"
#include "TileGraph.h"
#include "MoveDirection.h"
#include "TextureAnimation.h" 
#include "Moneda.h"

using namespace std;

class Pacman : public GamePawn
{
protected:
	TextureAnimation* texturaAnimacion;
	//static Pacman* instancia;

	int estado;

	GameObjectType returType() { return PACMAN; }
public:
	//Constructores y destructores
	Pacman(Tile* _tile, Texture* _textura);
	Pacman(Tile* _tile, Texture* _textura, int _posicionX, int _posicionY);
	~Pacman() {};

	//	static Pacman* crearInstancia(Tile* _tile, Texture* _texturaPacman, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron);

	//Metodos accesores
	int getEstado() { return estado; }
	void setEstado(int _estado) { estado = _estado; }
	void setTile(Tile* _tileNuevo);

	// Metodos varios

	//Metodos virtuales, redefinidos o sobrecargados
	void handleEvent(SDL_Event* event);
	// Mover pacman
	void update() override;
	// Renderizar imagen pacman
	void render() override;
	//void update();
	void deleteGameObject() override;

};