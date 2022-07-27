#include "engine.h"
#include "SDL.h"
#include "graphics.h"
#include <string>

void Engine::init(const char* title, int width, int height, int window_flags, int fps) {
    SDL_Init(SDL_INIT_EVERYTHING);
    _graphics = new Graphics(title, width, height, window_flags);
}

void Engine::mainloop() {
    bool quit;
    SDL_Event event;
    while(!quit)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            {
                quit = true;
            }
        }
        _graphics->DrawWindow();
    }
}

