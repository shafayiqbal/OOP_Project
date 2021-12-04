#include "Lives.hpp"

Lives::Lives(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Unit(rend, ast),mover(mov){}

void Lives::draw(){
    Unit::draw(src,mover);
}