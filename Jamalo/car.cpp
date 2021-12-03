#include "car.hpp"

Car::Car(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {81, 157, 75, 38}, 10) {}

void Car::draw(bool flag)
{
    Vehicle::draw(flag);
}