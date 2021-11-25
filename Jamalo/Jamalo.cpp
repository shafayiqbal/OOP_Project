#include "Jamalo.hpp"
#include "Racecar.hpp"
#include "Car.hpp"
#include "Bike.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    int prob = rand() % 3 + 1;
    int car_prob;
    if (prob == 2)
    {
        car_prob = rand() % 5 + 1;
        switch (car_prob)
        {
        case 1:
            Car
        }
    }
}

void Jamalo::move(char x)
{
    j.move(x);
}
