#include "engine.h"
#include "SDL.h"
#include "graphics.h"
#include "input.h"
void Engine::init(const char* title, int width, int height, int window_flags, int fps) {
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        _graphics = new Graphics(title, width, height, window_flags);
    }

}

void Engine::start() {
    bool quit = false;
    input in;

    Uint64 NOW = SDL_GetPerformanceCounter();
    Uint64 LAST = 0;
    double deltaTime = 0;

    while(!quit) {
        LAST = NOW;
        NOW = SDL_GetPerformanceCounter();
        deltaTime = ((NOW - LAST) / (double) SDL_GetPerformanceFrequency());
        in.newFrame();
        SDL_Event event;
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_KEYDOWN && event.key.repeat == 0)
            {
                in.keyDownEvent(event);
            }
            else if(event.type == SDL_KEYUP)
            {
                in.keyUpEvent(event);
            }
            else if(event.type == SDL_QUIT)
            {
                quit = true;
            }
        }





        update(deltaTime);
        draw();
        _graphics->resetRenderer();
    }
}
void Engine::draw()
{
    for (Object *object : objects) {
        if(object->getVisibility())
        {
            SDL_Texture *tex = _graphics->getTexture(object->path);
            _graphics->renderTexture(tex, object->x, object->y, object->w, object->h);
        }
    }
    _graphics->Present();
}

void Engine::update(double dt)
{
    SDL_Log("%f",1.0/dt);
    for (Object *object : objects) {
        object->update(dt);
    }
}

void Engine::addObject(Object *object) {
    objects.push_back(object);
}


