#include "SDL.h"
#include "graphics.h"

Graphics::Graphics(int width, int height, int window_flags) {
    SDL_CreateWindowAndRenderer(width, height, window_flags, &_window, &_renderer);
}
Graphics::~Graphics() {
    SDL_DestroyWindow(_window);
    SDL_DestroyRenderer(_renderer);
}
