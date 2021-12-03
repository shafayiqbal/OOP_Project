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

bool Jamalo::hitRegistered(Vehicle vehicle_hit)
{
    // Add collision code
    SDL_Rect v = vehicle_hit.getter();
    SDL_Rect s = j.getter();

    if (
        s.x < (v.x + v.w) and (s.x + s.w) > v.x and (s.y + s.h) > v.y and s.y < (v.y + v.h))
    {
        return true;
    }
    else
        return false;

    // if ((v.x >= s.x and v.x <= (s.x + s.w) and v.y >= s.y and v.y <= (s.y + s.h)))
    //     return true;
    // else
    //     return false;
}

void Jamalo::drawObjects()
{

    for (auto &element : vehicles)
    {
        element.draw();
        if (hitRegistered(element))
        {
            j.getHit();
        }
    }
    j.draw();
}

void Jamalo::createObjects()
{
    // SDL_Rect mov = {900, 555, 80, 40};
    // SDL_Rect mov{900, 490, 80, 40};
    // SDL_Rect mov{900, 435, 80, 40};
    // SDL_Rect mov{900, 380, 80, 40};
    // SDL_Rect mov{900, 325, 80, 40};

    SDL_Rect mov[5];
    mov[0] = {900, 555, 80, 40};
    mov[1] = {900, 490, 80, 40};
    mov[2] = {900, 435, 80, 40};
    mov[3] = {900, 380, 80, 40};
    mov[4] = {900, 325, 80, 40};

    // Make array code look cleaner !!!!

    int lane = rand() % 5 + 1;

    // Add random vehicle generator function
    // cout << "Vehicle generated" << endl;
    int prob = rand() % 5 + 1;
    int prob1 = rand() % 5 + 1;
    prob = (prob1 + prob) / 2;
    int car_prob;
    if (prob == 2)
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
            // cout << "hello" << endl;
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
            // cout << "Hello" << endl;
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
