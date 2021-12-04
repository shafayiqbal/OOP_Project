#include "Timer.hpp"
#include <iostream>
using namespace std;

Timer::Timer(SDL_Renderer *rend, SDL_Texture *ast) : minutes(rend, ast, {0,0,32,53}, {423,9,32,53}),second1(rend,ast,{42,0,32,53},{423,9,32,53}),second2(rend,ast,{72,0,32,53},{423,9,32,53}){
    starttime = SDL_GetTicks()/1000;
}

void Timer::draw()
{
    minutes.draw();
    second1.draw();
    second2.draw();
}

// int Timer::start_timer(){

// }




void Timer::count(){

    unsigned int currenttime;
    static int res,res1,res2;
    bool flag=false;
    
    currenttime = (SDL_GetTicks())/1000;
        
        res = currenttime-starttime;
        
        second2.animate(res);
        second1.animate(res1);
        minutes.animate(res2);
        if (res == 10){
            starttime = (SDL_GetTicks())/1000;
            res1++;
        }
        if (res1==6){
            res1=0;
            res2++;
        }
        if (res2==10){
            res2=0;
            //Dynamic functionality can be added, by creating more Digit type objects HERE
        }
        
   }
       // return res;
