#pragma once
#include "Unit.hpp"
using namespace std;

/**
 * @brief Vehicle class, the parent for all vehicles.
 * 
 * This class is inherited by Bike, Car, Racecar, Truck and Truck2.
 * It provides all the functionality relating to the movement of the cars and their speed.
 * 
 */

class Vehicle : public Unit
{

private:
    SDL_Rect src, mover;
    int speed;
    bool changing_lane_down;
    bool changing_lane_up;

public:
    Vehicle(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src, int s);
    void draw(bool flag);
    // friend bool Jamalo::hitRegistered(Vehicle v);
    SDL_Rect getter() const;
    void changeLaneUp();
    void changeLaneDown();
};