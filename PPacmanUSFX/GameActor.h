#pragma once
#include "GameObject.h"
#include "Tile.h"
#include "MoveDirection.h"
#include "TileGraph.h"

class GameActor :
    public GameObject
{
private:
protected:
	//Posicion x, y en la textura de ventana principal
	int posicionX;
	int posicionY;

	// Ancho y Alto de la imagen del objeto en pixeles
	int ancho;
	int alto;

	bool solido;
	bool indestructible;
	bool visible;
	bool movil;
	bool enMovimiento;

	int velocidad;
	int energia;
	int vidas;

	// Representacion grafica del objeto
	Texture* textura;

	Tile* tileActual;
	Tile* tileSiguiente;

	MoveDirection direccionActual;
	MoveDirection direccionSiguiente;

	int numeroFrame;
	int contadorFrames;
	int framesMovimiento;

	SDL_Rect* colisionador;

public:
	// Propiedades
	static TileGraph* tileGraph;

	//Constructores & destructores
	GameActor();
	GameActor(Texture* _textura);
	GameActor(Texture* _textura, int _posicionX, int _posicionY);
	// Metodos accesores
	int getPosicionX() { return posicionX; }
	int getPosicionY() { return posicionY; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }
	bool getVisible() { return visible; }
	bool getEnMovimiento() { return enMovimiento; }

	void setPosicionX(int _posicionX) { posicionX = _posicionX; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }
	void setAncho(int _ancho) { ancho = _ancho; }
	void setAlto(int _alto) { alto = _alto; }
	void setVisible(bool _visible) { visible = _visible; }

	void setEnMovimiento(bool _enMovimiento) { enMovimiento = _enMovimiento; }

	// Metodos varios
	void setParametrosAnimacion(int _framesMovimiento) { framesMovimiento = _framesMovimiento; }
	virtual SDL_Rect* getColisionador() { return colisionador; }
	bool revisarColision(const SDL_Rect* _otroColisionador);
	bool revisarColision(const SDL_Rect* _colisionador1, const SDL_Rect* _colisionador2);
};

