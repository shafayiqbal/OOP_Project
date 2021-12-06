#include "Car.hpp"
/**
 * @brief Construct a new Car:: Car object
 * 
 * @param rend 
 * @param ast 
 * @param mov 
 */
Car::Car(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {81, 157, 75, 38}, 10) {}

/**
 * @brief Draws the Car type Object
 * 
 * Calls the draw function of Vehicle and passes the flag to the draw function of Vehicle class which then determines whether the Car will move forward or not.
 * 
 * @param flag 
 */
void Car::draw(bool flag)
{
    Vehicle::draw(flag);
}