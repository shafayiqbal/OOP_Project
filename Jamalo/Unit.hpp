#pragma once
#include <SDL.h>

class Unit
{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

public:
    Unit(SDL_Renderer *, SDL_Texture *);
    void draw(SDL_Rect srcRect, SDL_Rect moverRect);
};