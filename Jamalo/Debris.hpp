#include "Unit.hpp"

class Debris : public Unit
{

    SDL_Rect mover;
    SDL_Rect src = {551, 9, 24, 25};

public:
    void
    animate();

    Debris(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
};