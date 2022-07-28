

#include "Object.h"
#include "SDL.h"
Object::Object(int x, int y, std::string *assetLocation) {
    this->x = x;
    this->y = y;
    this->assetLocation = assetLocation;
}
Object::Object(int x, int y) {
    this->x = x;
    this->y = y;
}

void Object::update(double dt) {
    SDL_Log("test pog");
    return;
}


