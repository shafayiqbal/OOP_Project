#include "RaceCar.hpp"
/**
 * @brief Construct a new Race Car:: Race Car object
 * 
 * @param rend 
 * @param ast 
 * @param mov 
 */
RaceCar::RaceCar(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Vehicle(rend, ast, mov, {212, 90, 87, 27}, 15) {}

/**
 * @brief Draws the Racecar type Object
 * 
 * Calls the draw function of Vehicle and passes the flag to the draw function of Vehicle class which then determines whether the Racecar will move forward or not.
 * 
 * @param flag 
 */
void RaceCar::draw(bool flag)
{
    Vehicle::draw(flag);
}