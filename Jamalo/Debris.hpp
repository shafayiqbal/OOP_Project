#include "Unit.hpp"

/**
 * @brief This class creates the debris when a Vehicle is destroyed.
 * 
 * Whenever a Car collides with another Car or with Sheep an explosion animation is displayed, this class handles the animation and drawing of the explosion.
 * 
 */

class Debris : public Unit
{

    SDL_Rect mover;
    SDL_Rect src = {551, 9, 24, 25};

public:
    void
    animate();

    Debris(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
};