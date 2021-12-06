#include "Unit.hpp"
/**
 * @brief Construct a new Unit:: Unit object
 * 
 * @param rend 
 * @param ast 
 */
Unit::Unit(SDL_Renderer *rend, SDL_Texture *ast) : gRenderer(rend), assets(ast)
{
}

/**
 * @brief Draws an object
 * 
 * This function draws an object based on the src and mover rectangles passes to it.
 * 
 * @param srcRect 
 * @param moverRect 
 */
void Unit::draw(SDL_Rect srcRect, SDL_Rect moverRect)
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}