#pragma once
#include <SDL.h>

class Unit
{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

public:
    Unit(SDL_Renderer *, SDL_Texture *);
    void draw(SDL_Rect srcRect, SDL_Rect moverRect);
};

// bool operator!=(SDL_Rect &t1, SDL_Rect &t2)
// {
//     if (t1.x == t2.x and t1.y == t2.y and t1.w == t2.w and t1.h == t2.h)
//     {
//         return false;
//     }
//     else
//         return true;
// }
