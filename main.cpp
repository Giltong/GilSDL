#include <iostream>
#include <SDL.h>
int main(int argc, char* argv[]) {
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_CreateWindowAndRenderer(600,600,0, &window, &renderer);
    return 0;
}
