#include "Car.hpp"

Car::Car(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {0, 0, 0, 0}) {}

void Car::draw()
{
    Vehicle::draw();
}