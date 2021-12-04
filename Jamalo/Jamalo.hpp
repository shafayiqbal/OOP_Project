#pragma once
#include <SDL.h>
#include "Vehicle.hpp"
#include "Sheep.hpp"
#include <list>
using namespace std;

class Jamalo
{
    Sheep j;
    list<Vehicle> vehicles;
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

public:
    Jamalo(SDL_Renderer *, SDL_Texture *);
    void drawObjects();
    void createObjects();
    void move(char x);
    bool hitRegistered(Vehicle v);
    bool hitRegistered(Vehicle v, list<Vehicle> &vehicles);
    // bool hitRegistered()
    void radar(Vehicle &currentV);
};
