#include "Unit.hpp"
#include <SDL2/SDL.h>

class Lives : public Unit{
    SDL_Rect src = {12,124,55,54};
    SDL_Rect mover ;


    public:
    Lives(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);

    void draw();
    
};
