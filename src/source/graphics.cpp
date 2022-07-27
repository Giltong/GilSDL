#include "SDL.h"
#include "graphics.h"

Graphics::Graphics(const char* title, int width, int height, int window_flags) {
    SDL_CreateWindowAndRenderer(width, height, window_flags, &_window, &_renderer);
    SDL_SetWindowTitle(_window, title);
}
Graphics::~Graphics() {
    SDL_DestroyWindow(_window);
    SDL_DestroyRenderer(_renderer);
}

void Graphics::DrawWindow() {
    SDL_RenderClear(_renderer);
    SDL_RenderPresent(_renderer);
}
