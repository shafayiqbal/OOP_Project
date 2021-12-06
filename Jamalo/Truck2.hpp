#include "Vehicle.hpp"

/**
 * @brief This is the class for the Truck2 type objects.
 * 
 * This class inherits from Vehicle class and provides the sprite and mover coordinates to it.
 * 
 */

class Truck2 : public Vehicle
{

public:
    Truck2(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
    void draw(bool flag);
};