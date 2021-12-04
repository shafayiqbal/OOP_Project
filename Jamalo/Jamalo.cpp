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
using namespace std;

Jamalo::Jamalo(SDL_Renderer *renderer, SDL_Texture *asst) : j(renderer, asst), gRenderer(renderer), assets(asst)
{
}

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
}

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

void Jamalo::drawObjects()
{

    for (auto &element : vehicles)
    {

        radar(element);

        if (hitRegistered(element))
        {
            j.getHit();
        }
    }
    j.draw();
}

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

void Jamalo::move(char x)
{
    j.move(x);
}

bool operator!=(SDL_Rect &r1, SDL_Rect &r2)
{
    if ((r1.x == r2.x) and (r1.y == r2.y) and (r1.w == r2.w) and (r1.h == r2.h))
    {
        return false;
    }
    else
        return true;
}
