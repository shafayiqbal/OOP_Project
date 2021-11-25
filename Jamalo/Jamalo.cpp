#include "Jamalo.hpp"
#include <iostream>

Jamalo::Jamalo(SDL_Renderer *renderer, SDL_Texture *asst) : j(renderer, asst), gRenderer(renderer), assets(asst)
{
}

void Jamalo::drawObjects()
{

    for (auto &element : vehicles)
    {
        element.draw();
    }
    j.draw();
}

void Jamalo::createObjects(int x, int y)
{
    SDL_Rect mov = {x, y, 100, 35};

    // Add random vehicle generator function
}

void Jamalo::move(char x)
{
    j.move(x);
}
