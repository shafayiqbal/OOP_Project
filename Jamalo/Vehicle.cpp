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

        mover.x -= speed;
    }

    // changeLaneDown();
    // changeLaneUp();
    Unit::draw(src, mover);
}

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

SDL_Rect Vehicle::getter() const
{
    return mover;
}