#pragma once
#include "Unit.hpp"
using namespace std;

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