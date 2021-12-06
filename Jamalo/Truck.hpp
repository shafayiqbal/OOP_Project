#include "Vehicle.hpp"

/**
 * @brief This is the class for the Truck type objects.
 * 
 * This class inherits from Vehicle class and provides the sprite and mover coordinates to it.
 * 
 */

class Truck : public Vehicle
{

public:
    Truck(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
    void draw(bool flag);
};