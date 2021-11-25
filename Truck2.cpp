#include "Truck2.hpp"

Truck2::Truck2(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {0, 0, 0, 0}) {}

void Truck2::draw()
{
    Vehicle::draw();
}