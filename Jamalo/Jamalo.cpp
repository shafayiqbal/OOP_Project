#include "Jamalo.hpp"
#include "Racecar.hpp"
#include "Sheep.hpp"
#include "Car.hpp"
#include "Bike.hpp"
#include "Truck.hpp"
#include "Truck2.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Debris.hpp"
using namespace std;

/**
 * @brief Construct a new Jamalo:: Jamalo object
 * 
 * Creates a Jamalo type object and initializes values for all other objects in the game.
 * 
 * @param renderer 
 * @param asst 
 */
Jamalo::Jamalo(SDL_Renderer *renderer, SDL_Texture *asst) : j(renderer, asst), gRenderer(renderer), assets(asst), t(renderer, asst), l1(renderer, asst, {935, 50, 55, 54}), l2(renderer, asst, {935, 100, 55, 54}), l3(renderer, asst, {935, 150, 55, 54}), nLives(3) {}

/**
 * @brief Checks game state
 * 
 * Returns true if game is over i.e all 3 lives have been lost.
 * 
 * @return true 
 * @return false 
 */
bool Jamalo::isOver()
{
    if (nLives == 0)
    {
        return true;
    }
}

/**
 * @brief Implementation of radar system in the Vehicles
 * 
 * The function a vehicle and determines the distance between that vehicle and the vehicle in front of it, if there is a vehicle in front of the current vehicle then it gives a signal for the current vehicle to stop.
 * It is also responsity for the drawing the vehicles.
 * 
 * @param current 
 */
void Jamalo::radar(Vehicle &current)
{
    SDL_Rect moverc = current.getter();
    bool flag = true;
    for (auto &next : vehicles)
    {
        SDL_Rect nextc = next.getter();

        if (moverc.y == nextc.y)
        {
            if (moverc.x <= nextc.x)
            {
            }
            else
            {
                if (moverc.x - 10 <= (nextc.x + nextc.w))
                {
                    // cout << moverc.y << "  " << nextc.y << endl;
                    flag = false;
                }
            }
        }
    }

    current.draw(flag);
    // if (moverc.x < -10)
    // {
    //     vehicles.remove(current);
    //     delete &current;
    // }
}

/**
 * @brief Checks if any vehicles are currently colliding.
 * 
 * The function takes a Vehicle type object and compares it with all other Vehicles to see if their mover rectangles are overlapping or not, this is to check if the vehicles are colliding with each other or not.
 * 
 * @param v 
 * @param vehicles 
 * @return true 
 * @return false 
 */
bool Jamalo::hitRegistered(Vehicle v, list<Vehicle> &vehicles)
{
    SDL_Rect vc = v.getter();

    bool flag = false;
    for (auto next : vehicles)
    {
        SDL_Rect nextc = next.getter();

        if (
            vc.x < (nextc.x + nextc.w) and (vc.x + vc.w) > nextc.x and (vc.y + vc.h) > nextc.y and vc.y < (nextc.y + nextc.h))
        {
            flag = true;
        }
    }

    return flag;
}

/**
 * @brief Checks if vehicle is colliding with sheep.
 * 
 * The function is an overloaded instance which checks if the given vehicle is colliding with the sheep or not.
 * 
 * @param vehicle_hit 
 * @return true 
 * @return false 
 */
bool Jamalo::hitRegistered(Vehicle vehicle_hit)
{

    SDL_Rect v = vehicle_hit.getter();
    SDL_Rect s = j.getter();

    if (
        s.x < (v.x + v.w) and (s.x + s.w) > v.x and (s.y + s.h) > v.y and s.y < (v.y + v.h))
    {
        return true;
    }
    else
        return false;
}

// bool Jamalo::hitRegistered(Vehicle v)
// {

//     if (
//         j.mover.x < (v.mover.x + v.mover.w) and (j.mover.x + j.mover..w) > v.mover.x and (j.mover.y + j.mover.h) > v.mover.y and j.mover.y < (v.mover.y + v.mover.h))
//     {
//         return true;
//     }
//     else
//         return false;
// }

/**
 * @brief Draws all objects
 * 
 * Iterates over the list of all vehicles and calls their draw function. It also calls the draw function of all other objects.
 * 
 */
void Jamalo::drawObjects()
{
    // Vehicle *ptr = NULL;
    for (auto &element : vehicles)
    {

        radar(element);

        if (hitRegistered(element))
        {
            j.getHit();
            nLives--;

            Debris d(gRenderer, assets, element.getter());
            vehicles.remove(element);
            // delete &element;
            d.animate();
            // delete &d;
        }
    }

    j.draw();
    t.draw();
    t.count();
    j.draw();

    if (nLives == 1)
    {
        l1.draw();
    }
    else if (nLives == 2)
    {
        l1.draw();
        l2.draw();
    }
    else if (nLives == 3)
    {
        l1.draw();
        l2.draw();
        l3.draw();
    }
}

/**
 * @brief Generates Vehicle type objects.
 * 
 * Randomly generates Vehicle type objects and randomly selects a lane for them to spawn in.
 * 
 */
void Jamalo::createObjects()
{

    SDL_Rect mov[5];
    mov[0] = {900, 555, 80, 40};
    mov[1] = {900, 490, 80, 40};
    mov[2] = {900, 435, 80, 40};
    mov[3] = {900, 380, 80, 40};
    mov[4] = {900, 325, 80, 40};

    // Make array code look cleaner !!!!

    int lane = rand() % 5 + 1;
    int prob = rand() % 5 + 1;
    int prob1 = rand() % 5 + 1;
    int car_prob;
    bool flag = true;

    for (auto v : vehicles)
    {
        SDL_Rect vc = v.getter();
        if ((vc.y = mov[lane - 1].y))
        {
            if (vc.x >= 820)
                flag = false;
        }
    }

    prob = (prob1 + prob) / 2;

    // Random vehicle generator function

    // cout << "vehicle aayi   " << flag << endl;

    if (flag)
    {
        car_prob = rand() % 10 + 1;
        switch (car_prob)
        {
        case 1:
        {
            Car c(gRenderer, assets, mov[lane - 1]);
            vehicles.push_back(c);
            break;
        }

        case 2:
        {
            RaceCar rc(gRenderer, assets, mov[lane - 1]);
            vehicles.push_back(rc);
            break;
        }
        case 3:
        {
            Truck t(gRenderer, assets, mov[lane - 1]);
            vehicles.push_back(t);
            break;
        }
        case 4:
        {
            Truck2 t2(gRenderer, assets, mov[lane - 1]);
            vehicles.push_back(t2);
            break;
        }
        case 5:

        {
            Bike b(gRenderer, assets, mov[lane - 1]);
            vehicles.push_back(b);
            break;
        }
        }
    }
}

/**
 * @brief Calls the move function of the Sheep and passes it the user input.
 * 
 * @param x 
 */
void Jamalo::move(char x)
{
    j.move(x);
}

/**
 * @brief Overloaded equality operator to check if two Vehicles have the same mover Rect.
 * 
 * @param v1 
 * @param v2 
 * @return true 
 * @return false 
 */
bool operator==(Vehicle v1, Vehicle v2)
{
    SDL_Rect r1 = v1.getter();
    SDL_Rect r2 = v2.getter();
    if ((r1.x == r2.x) and (r1.y == r2.y) and (r1.w == r2.w) and (r1.h == r2.h))
    {
        return true;
    }
    else
        return false;
}
