
#include <iostream>
#include "Sheep.hpp"
using namespace std;

Sheep::Sheep(SDL_Renderer *rend, SDL_Texture *ast) : Unit(rend, ast)
{
    src = {16, 23, 43, 42};
    mover = {10, 430, 50, 50};

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
        mover.x -= 10;
    }
    else if (x == 'd')
    {
        mover.x += 10;
    }
}

void getHit()
{
    cout << "SHEEP HIT !!!!!" << endl;
}
