#include "Vehicle.hpp"

class Racecar : public Vehicle
{

public:
    Racecar(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
    void draw();
};