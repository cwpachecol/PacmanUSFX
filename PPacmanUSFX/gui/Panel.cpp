#include "Panel.h"


Panel::Panel(SDL_Window* _window, SDL_Renderer* _renderer, int _posicionX, int _posicionY, int _ancho, int _alto, std::string _nombre){
    window = _window;
    renderer = _renderer;
    panel = new SDL_Rect({ _posicionX, _posicionY, _ancho, _alto });
	nombre = _nombre;

    panelColor = new SDL_Color({ 155, 25, 255, 255});
    etiqueta = new SDL_Rect({ 0, 0, 0,0 });
    etiquetaTamanoFuente = 20;

    etiquetaTexto = "texto por defecto";
    etiquetaFuente = TTF_OpenFont("Resources/Fuentes/BarlowCondensed-Bold.ttf", etiquetaTamanoFuente);
    etiquetaColor = new SDL_Color({ 10, 70, 210, 100});

    clickedOn = false;
}

//Color Panel::get_panel_color()

void Panel::setColorPanel(int r, int g, int b, int a)
{
	if (r > 255 || r < 0)
		r %= 255;
	if (g > 255 || g < 0)
		g %= 255;
	if (b > 255 || b < 0)
		b %= 255;
	if (a > 255 || a < 0)
		a %= 255;

	color_r = r;
	color_g = g;
	color_b = b;
	color_a = a;
}

void Panel::handleEvent(SDL_Event* event)
{
    if (event->type == SDL_MOUSEBUTTONDOWN && !clickedOn)
        clickedOn = true;
    if (event->type == SDL_MOUSEBUTTONUP && clickedOn)
        clickedOn = false;
}

void Panel::deleteGameObject()
{
	GameObject::deleteGameObject();
}

bool Panel::mouseDentroLimites()
{
	int mouse_x;
	int mouse_y;
	SDL_GetMouseState(&mouse_x, &mouse_y);
	return (((mouse_x >= panel->x) && (mouse_x <= (panel->x + panel->w))) &&
		((mouse_y >= panel->y) && (mouse_y <= (panel->y + panel->h))));
}

void Panel::render()
{
    SDL_SetRenderDrawColor(renderer, getColorR(), getColorG(), getColorB(), getColorA());
    SDL_Rect* panelRect = getPanelSDLRect();
    SDL_RenderFillRect(renderer, panelRect);

    if (etiquetaTexto.length() > 1) {
        renderText(etiquetaFuente, etiquetaTexto, etiquetaColor);
    }

    SDL_RenderPresent(renderer);

}

void Panel::renderText(TTF_Font* _fuente, std::string _texto, SDL_Color* _colorTexto)
{
    // Return if the renderer was not set
    if (renderer == nullptr)
        return;

    // Render the text using SDL_ttf library
    SDL_Surface* loadedSurface = TTF_RenderText_Solid(_fuente, _texto.c_str(), *_colorTexto);
    if (loadedSurface == nullptr) {
        std::cout << "Unable to render text! SDL_ttf Error: " << TTF_GetError() << endl;
        return;
    }

    // Create a texture from generated surface
    SDL_Texture* textura = SDL_CreateTextureFromSurface(Texture::renderer, loadedSurface);
    if (textura == nullptr) {
        cout << "Unable to create texture from surface!SDL Error : " << SDL_GetError() << endl;
        return;
    }

    // Set width and height of the texture
    etiqueta->w = loadedSurface->w;
    etiqueta->h = loadedSurface->h;

    // Free the surface
    SDL_FreeSurface(loadedSurface);
}

void Panel::update()
{
    if (getRevisarActividadMouse() && mouseDentroLimites() && clickedOn) {

        std::cout << getNombre() << ": CLICKED" << std::endl;
        // Insert button action here (below)
        if (getNombre() == "BUTTON A") {
            onClickButton();
        }
        // ...
        clickedOn = false;
    }
}


void Panel::onClickButton()
{
    std::cout << "BUTTON A: FUNCTION ACTIVATED!" << std::endl;
}
