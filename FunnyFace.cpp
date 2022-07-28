

#include "FunnyFace.h"
#include "SDL.h"
FunnyFace::FunnyFace(int x, int y, std::string assetLocation) : Object(x,y,&assetLocation){}

void FunnyFace::update(double dt) {
    SDL_Log("Funny Face TEst!");
}
