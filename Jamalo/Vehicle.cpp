#include "Vehicle.hpp"
/**
 * @brief Construct a new Vehicle:: Vehicle object
 * 
 * @param rend 
 * @param ast 
 * @param mov 
 * @param src 
 * @param s 
 */
Vehicle::Vehicle(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src, int s) : Unit(rend, ast), src(src), mover(mov), speed(s)
{
    changing_lane_down = false;
    changing_lane_up = false;
}

/**
 * @brief Draws the Vehicles
 * 
 * The function calls the draw function of the Unit class, it also changes the mover rectangle based on the flag passed to it.
 * 
 * @param flag 
 */
void Vehicle::draw(bool flag)
{

    if (flag)
    {

        mover.x -= speed;
    }

    // changeLaneDown();
    // changeLaneUp();
    Unit::draw(src, mover);
}

/**
 * @brief Moves the car to the upper lane if any.
 * 
 * The function carries out the process of making the car move to the upper lane, it is not being called as it contains bugs at the moment.
 * 
 */
void Vehicle::changeLaneUp()
{
    int prob = rand() % 15 + 1;

    if (prob == 6 and changing_lane_down == false and changing_lane_up == false)
    {
        changing_lane_up = true;
    }

    if (changing_lane_up)
    {
        mover.y -= 11;
    }

    if (mover.y % 5 == 0)
    {
        changing_lane_up == false;
    }
}

/**
 * @brief Moves the car to the lower lane if any.
 * 
 * The function carries out the process of making the car move to the lower lane, it is not being called as it contains bugs at the moment.
 * 
 */
void Vehicle::changeLaneDown()
{
    int prob = rand() % 15 + 1;

    if (prob == 3 and changing_lane_down == false and changing_lane_up == false)
    {
        changing_lane_down = true;
    }

    if (changing_lane_down)
    {
        mover.y += 11;
    }

    if (mover.y % 5 == 0)
    {
        changing_lane_down = false;
    }
}

/**
 * @brief Returns mover rect of the Vehicle object.
 * 
 * @return SDL_Rect 
 */
SDL_Rect Vehicle::getter() const
{
    return mover;
}