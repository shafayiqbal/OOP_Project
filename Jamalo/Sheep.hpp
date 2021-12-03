#pragma once
#include "Unit.hpp"
using namespace std;

class Sheep : public Unit
{

private:
    SDL_Rect src, mover;
    int nLives;

public:
    // SDL_Rect mover;
    Sheep(SDL_Renderer *rend, SDL_Texture *ast);

    SDL_Rect getter();
    void draw();
    void move(char x);
    void getHit();
};