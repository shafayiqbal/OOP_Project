#include "Sheep.hpp"

Sheep::Sheep(SDL_Renderer *rend, SDL_Texture *ast) : Unit(rend, ast)
{
    src = {0, 0, 100, 100};
    mover = {-30, 385, 200, 150};
}

void Sheep::draw()
{
    Unit::draw(src, mover);
}

void Sheep::move(char x)
{

    if (x == 'w')
    {
        mover.y -= 54;
    }
    else if (x == 's')
    {
        if (mover.y + 160 <= 600)
            mover.y += 54;
    }
    else if (x == 'a')
    {
        mover.x -= 10;
    }
    else if (x == 'd')
    {
        mover.x += 10;
    }
}