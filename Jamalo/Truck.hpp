#include "Vehicle.hpp"

class Truck : public Vehicle
{

public:
    Truck(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
    void draw(bool flag);
};