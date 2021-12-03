#include "Vehicle.hpp"

Vehicle::Vehicle(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src, int s) : Unit(rend, ast), src(src), mover(mov), speed(s)
{
    changing_lane = false;
}

void Vehicle::draw(bool flag)
{

    if (flag)
    {
        if (changing_lane and (mover.y + mover.h + 11 < 600))
        {
            mover.y += 11;
        }
        mover.x -= speed;
    }
    // changeLane();
    Unit::draw(src, mover);
}

void Vehicle::changeLane()
{
    int prob = rand() % 15 + 1;

    if (prob == 3 and changing_lane == false)
    {
        changing_lane = true;
        mover.y += 11;
    }
    if (mover.y % 5 == 0)
    {
        changing_lane = false;
    }
}

SDL_Rect Vehicle::getter()
{
    return mover;
}