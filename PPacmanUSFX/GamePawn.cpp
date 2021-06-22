#include "GamePawn.h"

GamePawn::GamePawn():GameActor()
{
}

GamePawn::GamePawn(Texture* _textura):GameActor(_textura)
{
}

GamePawn::GamePawn(Texture* _textura, int _posicionX, int _posicionY):GameActor(_textura, _posicionX, _posicionY)
{

}

void GamePawn::render()
{
	GameActor::render();
}

void GamePawn::update()
{
	GameActor::update();
}

void GamePawn::handleEvent(SDL_Event* event)
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

void GamePawn::deleteGameObject()
{
	GameActor::deleteGameObject();
}

void GamePawn::free()
{
	GameActor::free();
}
