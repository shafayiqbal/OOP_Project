#include "Vehicle.hpp"

Vehicle::Vehicle(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src) : Unit(rend, ast), src(src) {}

void Vehicle::draw()
{
    Unit::draw(src, mover);
}