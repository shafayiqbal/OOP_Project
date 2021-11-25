#include "Bike.hpp"

Bike::Bike(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {0, 0, 0, 0}) {}

void Bike::draw()
{
    Vehicle::draw();
}