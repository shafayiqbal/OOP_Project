#pragma once
#include <SDL.h>
#include "Vehicle.hpp"
#include "Sheep.hpp"
#include "Timer.hpp"
#include "Lives.hpp"
#include <list>
using namespace std;

/**
     * @brief This is the Level Design class, and contains all other game related classes.
     * 
     * The Jamalo class aggregates all other game related classes, namely Sheep, Vehicle and its childs, Timer and Lives.
     * All top-level functionality is implemented in this class, the purpose of this class is to connect all objects in a proper manner, and to carry out class operations over them.
     * Majority of the game mechanics are implemented here.
     * This class:
     * -Draws all objects
     * -Creates all objects
     * -Contains the radar system through which vehicles slow down if there is a vehicle in front of them
     * -Checks for collisions between objects
     */
class Jamalo
{

    Sheep j;
    list<Vehicle> vehicles;
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;
    int nLives;
    Timer t;
    Lives l1;
    Lives l2;
    Lives l3;

public:
    Jamalo(SDL_Renderer *, SDL_Texture *);
    void drawObjects();
    void createObjects();
    void move(char x);
    bool hitRegistered(Vehicle v);
    bool hitRegistered(Vehicle v, list<Vehicle> &vehicles);
    // bool hitRegistered()
    void radar(Vehicle &currentV);
    bool isOver();
}

;
