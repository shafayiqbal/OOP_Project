#include "Truck.hpp"

Truck::Truck(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {169, 224, 57, 44}, 7) {}

void Truck::draw()
{
    Vehicle::draw();
}