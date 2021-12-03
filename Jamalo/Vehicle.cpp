#include "Vehicle.hpp"

Vehicle::Vehicle(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src, int s) : Unit(rend, ast), src(src), mover(mov), speed(s) {}

void Vehicle::draw()
{
    mover.x -= speed;
    Unit::draw(src, mover);
}

SDL_Rect Vehicle::getter()
{
    return mover;
}