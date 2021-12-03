#include "RaceCar.hpp"

RaceCar::RaceCar(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {212, 90, 87, 27}, 15) {}

void RaceCar::draw(bool flag)
{
    Vehicle::draw(flag);
}