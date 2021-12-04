#include "Digit.hpp"

class Timer
{
    private:
    Digit minutes;
    Digit second1;
    Digit second2;
    int starttime;

public:
    Timer(SDL_Renderer *rend, SDL_Texture *ast);
    // int start_timer();
    void draw();
    
    void count();
};

