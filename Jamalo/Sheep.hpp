#include "Unit.hpp"

class Sheep : public Unit
{

private:
    SDL_Rect src, mover;

public:
    Sheep(SDL_Renderer *rend, SDL_Texture *ast);

    void draw();
    void move(char x);
};