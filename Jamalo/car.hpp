#include "Vehicle.hpp"

class Car : public Vehicle
{

public:
    Car(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
    void draw();
};