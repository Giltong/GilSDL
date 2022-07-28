#include "engine.h"
#include "SDL.h"
#include "graphics.h"
#include <string>

void Engine::init(const char* title, int width, int height, int window_flags, int fps) {
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        _graphics = new Graphics(title, width, height, window_flags);
    }

}

void Engine::start() {
    bool quit = false;


    Uint64 NOW = SDL_GetPerformanceCounter();
    Uint64 LAST = 0;
    double deltaTime = 0;

    while(!quit) {
        _graphics->resetRenderer();
        LAST = NOW;
        NOW = SDL_GetPerformanceCounter();
        deltaTime = ((NOW - LAST) * 1000 / (double) SDL_GetPerformanceFrequency());

        if(pollEvents() == -1)
        {
            break;
        }

        pollEvents();
        update(deltaTime);
        draw();
        _graphics->Present();
    }
}

int Engine::pollEvents() {
    SDL_Event event;
    while(SDL_PollEvent(&event))
    {
        if(event.type == SDL_QUIT)
        {
            return -1;
        }
    }
}
void Engine::draw()
{

}

void Engine::update(double dt)
{
    for (Object *object : objects) {
        object->update(dt);
    }
}

void Engine::addObject(Object *object) {
    objects.push_back(object);
}


