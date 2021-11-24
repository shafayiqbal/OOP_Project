#include "Unit.hpp"

class Sheep : public Unit
{

private:
    SDL_Rect src, mover;

public:
    Sheep(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);

    void draw();
};