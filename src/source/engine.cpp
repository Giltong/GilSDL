#include "engine.h"
#include "SDL.h"
#include "graphics.h"
#include <string>

void Engine::init(const char* title, int width, int height, int window_flags, int fps) {
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        _graphics = new Graphics(title, width, height, window_flags);
        _fpsCap = fps;
    }

}

void Engine::mainloop() {
    bool quit = false;
    SDL_Event event;

    Uint64 NOW = SDL_GetPerformanceCounter();
    Uint64 LAST = 0;
    double deltaTime = 0;

    while(!quit) {
        _graphics->resetRenderer();
        LAST = NOW;
        NOW = SDL_GetPerformanceCounter();
        deltaTime = ((NOW - LAST) * 1000 / (double) SDL_GetPerformanceFrequency());

        _graphics->renderTexture(_graphics->getTexture("../assets/sprites/testImage.bmp"), 0, 0, 10.0, 2.0);

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
        _graphics->Present();
    }
}


