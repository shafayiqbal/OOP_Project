#include "Truck.hpp"

/**
 * @brief Construct a new Truck:: Truck object
 * 
 * @param rend 
 * @param ast 
 * @param mov 
 */
Truck::Truck(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {169, 224, 57, 44}, 7) {}

/**
 * @brief Draws the Truck type Object
 * 
 * Calls the draw function of Vehicle and passes the flag to the draw function of Vehicle class which then determines whether the Truck will move forward or not.
 * 
 * @param flag 
 */
void Truck::draw(bool flag)
{
    Vehicle::draw(flag);
}