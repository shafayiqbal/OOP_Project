#pragma once
#include "Unit.hpp"
using namespace std;

class Vehicle : public Unit
{

private:
    SDL_Rect src, mover;
    int speed;

public:
    Vehicle(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src, int s);
    void draw();
    // friend bool Jamalo::hitRegistered(Vehicle v);
};