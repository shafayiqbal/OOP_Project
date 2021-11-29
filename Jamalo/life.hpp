#pragma once
#include "Unit.hpp"

class life : public Unit
{

private:
    SDL_Rect src, mover;

public:
    life(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src);
    void draw();
};