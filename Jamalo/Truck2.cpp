#include "Truck2.hpp"

Truck2::Truck2(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {345, 221, 79, 44}, 9) {}

void Truck2::draw()
{
    Vehicle::draw();
}