#pragma once
#include "Unit.hpp"
// #include "Jamalo.hpp"
using namespace std;
class Sheep : public Unit
{

    // friend bool Jamalo::hitRegistered(Sheep j);

private:
    SDL_Rect src, mover;
    int nLives;

public:
    // SDL_Rect mover;
    Sheep(SDL_Renderer *rend, SDL_Texture *ast);

    void draw();
    void move(char x);
    void getHit();
};