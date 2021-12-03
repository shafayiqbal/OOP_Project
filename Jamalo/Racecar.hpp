#include "Vehicle.hpp"

class RaceCar : public Vehicle
{

public:
    RaceCar(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
    void draw(bool flag);
};