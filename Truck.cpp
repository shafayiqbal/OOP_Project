#include "Truck.hpp"

Truck::Truck(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {0, 0, 0, 0}) {}

void Truck::draw()
{
    Vehicle::draw();
}