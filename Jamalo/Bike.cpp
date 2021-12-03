#include "Bike.hpp"

Bike::Bike(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {97, 75, 50, 50}, 4) {}

void Bike::draw(bool flag)
{
    Vehicle::draw(flag);
}