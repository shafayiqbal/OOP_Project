#include "Unit.hpp"
#include <SDL.h>

class Digit : public Unit
{

    SDL_Rect src, mover;

public:
    Digit(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src);
    void draw();
    void animate(unsigned int res);
};