

#include "Object.h"
#include <string>
#include <utility>
#include "SDL.h"
Object::Object(int x, int y, std::string path) {
    this->x = x;
    this->y = y;
    this->path = std::move(path);
    visibility = true;
}
Object::Object(int x, int y) {
    this->x = x;
    this->y = y;
    visibility = false;
}

void Object::update(double dt) {
    return;
}


