#pragma once
#include <SDL.h>

/**
 * @brief The unit class from which all game related classes are inherited
 * 
 * This class provides the drawing functionality to all other classes that need to draw a sprite on the screen.
 * 
 */

class Unit
{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

public:
    Unit(SDL_Renderer *, SDL_Texture *);
    void draw(SDL_Rect srcRect, SDL_Rect moverRect);
};
