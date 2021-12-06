#include "Truck2.hpp"
/**
 * @brief Construct a new Truck 2:: Truck 2 object
 * 
 * @param rend 
 * @param ast 
 * @param mov 
 */
Truck2::Truck2(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {345, 221, 79, 44}, 9) {}

/**
 * @brief Draws the Truck2 type Object
 * 
 * Calls the draw function of Vehicle and passes the flag to the draw function of Vehicle class which then determines whether the Truck will move forward or not.
 * 
 * @param flag 
 */
void Truck2::draw(bool flag)
{
    Vehicle::draw(flag);
}