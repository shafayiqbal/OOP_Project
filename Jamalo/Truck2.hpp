#include "Vehicle.hpp"

class Truck2 : public Vehicle
{

public:
    Truck2(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
    void draw();
};