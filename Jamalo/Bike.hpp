#include "Vehicle.hpp"

/**
 * @brief This is the class for the Bike type objects.
 * 
 * This class inherits from Vehicle class and provides the sprite and mover coordinates to it.
 * 
 */

class Bike : public Vehicle
{

public:
    Bike(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
    void draw(bool flag);
};