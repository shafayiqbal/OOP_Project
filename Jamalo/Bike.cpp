#include "Bike.hpp"

/**
 * @brief Construct a new Bike:: Bike object
 * 
 * @param rend 
 * @param ast 
 * @param mov 
 */
Bike::Bike(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {97, 75, 50, 50}, 4) {}

/**
 * @brief Draws the Bike type Object
 * 
 * Calls the draw function of Vehicle and passes the flag to the draw function of Vehicle class which then determines whether the Bike will move forward or not.
 * 
 * @param flag 
 */
void Bike::draw(bool flag)
{
    Vehicle::draw(flag);
}