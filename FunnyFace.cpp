

#include "FunnyFace.h"

#include <utility>
#include "SDL.h"
FunnyFace::FunnyFace(int x, int y, std::string path)
{
    this->path = path;
    this->x = x;
    this->y = y;
    visibility = true;
}

void FunnyFace::update(double dt) {

}
