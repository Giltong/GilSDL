

#include "inputTestObject.h"

#include <utility>



void inputTestObject::update(double dt) {
    SDL_Log("testies");
    if(_in->getKeyDown(SDL_SCANCODE_SPACE))
    {
        visibility = !visibility;
    }
}

inputTestObject::inputTestObject(int x, int y, std::string path) : Object(x, y, path)
{

}
