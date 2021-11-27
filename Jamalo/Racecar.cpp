#include "RaceCar.hpp"

RaceCar::RaceCar(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {212, 90, 87, 27}, 10) {}

void RaceCar::draw()
{
    Vehicle::draw();
}