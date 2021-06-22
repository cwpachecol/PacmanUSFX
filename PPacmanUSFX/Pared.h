#pragma once
#include "GameActor.h"
#include "TipoTexturaPared.h"
#include "TileGraph.h"

class Pared :
    public GameActor
{
protected:
    int frameX;
    int frameY;
    int altoClip;
    int anchoClip;
    int tipoTexturaPared;
    GameObjectType returType() { return PARED; }
public:
    Pared(Tile* _tile, Texture* _paredTextura);
    Pared(Tile* _tile, Texture* _paredTextura, int _posicionX, int _posicionY);
    void setTileActual(Tile* _tileNuevo);

    void render() override;
    void update() {};
    void handleEvent(SDL_Event* event) {};
    void deleteGameObject() {};
    void free() {};


};

