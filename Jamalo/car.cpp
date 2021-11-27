#include "Car.hpp"

Car::Car(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {81, 157, 75, 38}, 10) {}

void Car::draw()
{
    Vehicle::draw();
}