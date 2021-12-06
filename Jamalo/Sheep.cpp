
#include <iostream>
#include "Sheep.hpp"
using namespace std;

/**
 * @brief Construct a new Sheep:: Sheep object
 * 
 *  
 * @param rend 
 * @param ast 
 */
Sheep::Sheep(SDL_Renderer *rend, SDL_Texture *ast) : Unit(rend, ast)
{
}

/**
 * @brief Draws the sheep
 * 
 * Calls the draw function from the Unit class and passes the relevant functions to it.
 * 
 */
void Sheep::draw()
{
    Unit::draw(src, mover);
}

/**
 * @brief Moves the sheep
 * 
 * The function takes input from the Jamalo class and moves the sheep based on the key pressed. If sheep is at the border then it prevents it from moving any further.
 * 
 * @param x 
 */
void Sheep::move(char x)
{

    if (x == 'w')
    {
        if (mover.y - 55 >= 300)
            mover.y -= 55;
    }
    else if (x == 's')
    {
        if (mover.y + mover.h + 55 <= 600)
            mover.y += 55;
    }
    else if (x == 'a')
    {
        if (mover.x - 10 >= 0)
            mover.x -= 10;
    }
    else if (x == 'd')
    {
        if (mover.x + mover.w + 10 <= 1000)
            mover.x += 10;
    }
}

/**
 * @brief The getter function for the mover rectangle of the Sheep.
 * 
 * @return SDL_Rect 
 */
SDL_Rect Sheep::getter() const
{
    return mover;
}

/**
 * @brief A function to display effects when sheep gets hit.
 * 
 * 
 * 
 */
void Sheep::getHit()
{
    cout << "SHEEP HIT !!!!!" << endl;
}
