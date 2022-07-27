#include "engine.h"
#include "SDL.h"
#include "graphics.h"
void Engine::init(int width, int height, int window_flags) {
    SDL_Init(SDL_INIT_EVERYTHING);
    Graphics graphics(width, height, window_flags);
}
