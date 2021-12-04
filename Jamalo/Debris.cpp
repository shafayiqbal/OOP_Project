#include "Debris.hpp"

Debris::Debris(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Unit(rend, ast), mover(mov) {}

void Debris::animate()
{
    Unit::draw(src, mover);
    if (src.x == 551)
    {
        src = {638, 7, 28, 30};
    }
    if (src.x == 638)
    {
        src = {667, 7, 28, 30};
    }
}
