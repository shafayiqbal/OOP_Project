#include "Unit.hpp"
#include <SDL.h>

/**
 * @brief Digit used in timer
 * 
 * Creates a digit type object to be used in the timer.
 * 
 */
class Digit : public Unit
{
private:
    SDL_Rect src, mover;

public:
    Digit(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, SDL_Rect src);
    void draw();
    void animate(unsigned int res);
};