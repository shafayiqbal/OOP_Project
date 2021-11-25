#include "Vehicle.hpp"

class Bike : public Vehicle
{

public:
    Bike(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
    void draw();
};