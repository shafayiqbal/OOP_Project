
#include <iostream>
#include "Sheep.hpp"
using namespace std;

Sheep::Sheep(SDL_Renderer *rend, SDL_Texture *ast) : Unit(rend, ast)
{

    // put this in constructor !!!!
}

void Sheep::draw()
{
    Unit::draw(src, mover);
}

void Sheep::move(char x)
{

    if (x == 'w')
    {
        if (mover.y - 55 >= 300)
            mover.y -= 55;
    }
    else if (x == 's')
    {
        if (mover.y + mover.h + 55 <= 600)
            mover.y += 55;
    }
    else if (x == 'a')
    {
        if (mover.x - 10 >= 0)
            mover.x -= 10;
    }
    else if (x == 'd')
    {
        if (mover.x + mover.w + 10 <= 1000)
            mover.x += 10;
    }
}

SDL_Rect Sheep::getter()
{
    return mover;
}

void Sheep::getHit()
{
    cout << "SHEEP HIT !!!!!" << endl;
}
