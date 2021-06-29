#pragma once
#include "../GameObject.h"
#include<iostream>
using namespace std;

class Panel :
    public GameObject
{

protected:
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	
	SDL_Rect* panel;
	SDL_Color* panelColor;

	SDL_Rect* etiqueta;
	string etiquetaTexto;
	TTF_Font* etiquetaFuente;
	int etiquetaTamanoFuente;
	SDL_Color* etiquetaColor;
		
	int color_r;
	int color_g;
	int color_b;
	int color_a;

	bool revisarActividadMouse;
	bool clickedOn;
public:
	//Constructores y destructores
	Panel(SDL_Renderer* _renderer, int _posicionX, int _posicionY, int _ancho, int _alto, std::string _nombre);
	~Panel() {};

	//Metodos accesores
	int getPanelX() { return panel->x; }
	int getPanelY() { return panel->y; }
	int getPanelW() { return panel->w; }
	int getPanelH() { return panel->h; }
	SDL_Color* getPanelColor() { return panelColor; }
	int getColorR() { return color_r; }
	int getColorG() { return color_g; }
	int getColorB() { return color_b; }
	int getColorA() { return color_a; }

	int getEtiquetaX() { return etiqueta->x; }
	int getEtiquetaY() { return etiqueta->y; }
	int getEtiquetaW() { return etiqueta->w; }
	int getEtiquetaH() { return etiqueta->h; }
	std::string getEtiquetaTexto() { return etiquetaTexto; }
	TTF_Font* getEtiquetaFuente() { return etiquetaFuente; }
	int getEtiquetaTamanoFuente() { return etiquetaTamanoFuente; }
	SDL_Color* getEtiquetaColor() {	return etiquetaColor; }

	bool getRevisarActividadMouse() { return revisarActividadMouse; }
	bool getClickedOn() { return clickedOn; }

	void setPanelX(int _x) { panel->x = _x; }
	void setPanelY(int _y) { panel->y = _y; }
	void setPanelW(int _w) { panel->w = _w; }
	void setPanelH(int _h) { panel->h = _h; }
	void setPanelColor(SDL_Color* _panelColor) { panelColor = _panelColor; }
	void setColorR(int _r) { color_r = _r; }
	void setColorG(int _g) { color_r = _g; }
	void setColorB(int _b) { color_r = _b; }
	void setColorA(int _a) { color_r = _a; }
	void setColorPanel(int r, int g, int b, int a);

	void setEtiquetaX(int _x) { etiqueta->x = _x; }
	void setEtiquetaY(int _y) { etiqueta->y = _y; }
	void setEtiquetaW(int _w) { etiqueta->w = _w; }
	void setEtiquetaH(int _h) { etiqueta->h = _h; }

	void setEtiquetaTexto(std::string _etiquetaTexto) { etiquetaTexto = _etiquetaTexto; }
	void setEtiquetaFuente(TTF_Font* _etiquetaFuente) { etiquetaFuente = _etiquetaFuente; }
	void setEtiquetaTamanoFuente(int _etiquetaTamanoFuente) { etiquetaTamanoFuente = _etiquetaTamanoFuente; }
	void setEtiquetaColor(SDL_Color* _etiquetaColor) { etiquetaColor = _etiquetaColor; }
	
	void setRevisarActividadMouse(bool _revisarActividadMouse) { revisarActividadMouse = _revisarActividadMouse; }
	void setClickedOn(bool _clickedOn) { clickedOn = _clickedOn; }
	
	// Metodos varios
	SDL_Rect* getPanelSDLRect() { return panel; }
	bool mouseDentroLimites();
	void onClickButton();
	virtual void renderText(TTF_Font* _fuente, std::string _texto, SDL_Color* _colorTexto);


	virtual void render();
	virtual void update();
	virtual void handleEvent(SDL_Event* event);
	virtual void deleteGameObject();
};
