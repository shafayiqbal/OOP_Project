#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Jamalo.hpp"
#include <SDL_mixer.h>

/**
 * @brief Game class is the container for Jamalo class and handles input and output interfacing.
 * 
 * game class takes the inputs from the users and provides it to the jamalo class to be processed. It also takes care of the start and the end screens.
 * 
 */

class Game
{
    // Game state
    bool start = false;
    bool end = false;

    //Screen dimension constants
    const int SCREEN_WIDTH = 1000;
    const int SCREEN_HEIGHT = 600;

    //The window we'll be rendering to
    SDL_Window *gWindow = NULL;

    //The window renderer
    SDL_Renderer *gRenderer = NULL;

    //Current displayed texture
    SDL_Texture *gTexture = NULL;
    //global reference to png image sheets
    SDL_Texture *assets = NULL;
    Mix_Music *bgMusic = NULL;

public:
    bool init();
    bool loadMedia();
    void close();
    SDL_Texture *loadTexture(std::string path);
    void run();
};
