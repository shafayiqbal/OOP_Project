#include "Unit.hpp"

class Vehicle : public Unit
{

private:
    SDL_Rect src, mover;

public:
    Vehicle(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src);
    void draw();
};