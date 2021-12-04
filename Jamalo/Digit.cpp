#include "Digit.hpp"

Digit::Digit(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src) : Unit(rend, ast),mover(mov), src(src){}

void Digit::draw(){
    Unit::draw(src,mover);
}

void Digit::animate(unsigned int res){
    if (res==0){
        src ={423,9,32,53};
    }

    else if (res==1){
        src = {117,9,23,53};
    }
    else if (res == 2){
        src = {142,9,32,53};
    }
    else if (res == 3){
        src = {177,9,32,53};
    }
    else if (res == 4){
        src = {211,9,35,53};
    }
    else if (res == 5){
        src = {248,9,33,53};
    }
    else if (res == 6){
        src = {283,9,33,53};
    }
    else if (res == 7){
        src = {318,9,32,53};
    }
    else if (res == 8){
        src = {358,9,32,53};
    }
    else if (res == 9){
        src = {388,9,32,53};
    }    
}