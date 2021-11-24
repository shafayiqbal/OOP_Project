#include "Sheep.hpp"

Sheep::Sheep(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Unit(rend, ast)
{
    src = {0, 0, 0, 0};
}

void Sheep::draw()
{
    Unit::draw(src, mover);
}