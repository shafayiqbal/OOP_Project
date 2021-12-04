#include "Vehicle.hpp"

Vehicle::Vehicle(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src, int s) : Unit(rend, ast), src(src), mover(mov), speed(s)
{
    changing_lane_down = false;
    changing_lane_up = false;
}

void Vehicle::draw(bool flag)
{

    if (flag)
    {
        // if (changing_lane_down and (mover.y + mover.h + 55 < 600))
        // {
        //     mover.y += 11;
        // }
        // if (changing_lane_up and (mover.y - 55 >= 325))
        // {
        //     mover.y -= 11;
        // }
        mover.x -= speed;
    }
    changeLaneDown();
    changeLaneUp();
    Unit::draw(src, mover);
}

void Vehicle::changeLaneUp()
{
    int prob = rand() % 15 + 1;

    if (prob == 6 and changing_lane_up == false and changing_lane_up == false)
    {
        changing_lane_up = true;
        mover.y -= 11;
    }

    if (mover.y % 5 == 0)
    {
        changing_lane_up == false;
    }
}

void Vehicle::changeLaneDown()
{
    int prob = rand() % 15 + 1;

    if (prob == 3 and changing_lane_down == false and changing_lane_up == false)
    {
        changing_lane_down = true;
        mover.y += 11;
    }
    if (mover.y % 5 == 0)
    {
        changing_lane_down = false;
    }
}

SDL_Rect Vehicle::getter() const
{
    return mover;
}