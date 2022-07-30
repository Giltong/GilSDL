

#include "input.h"

void input::newFrame() {
    _pressedKeys.clear();
    _releasedKeys.clear();
}

void input::keyUpEvent(const SDL_Event &event) {
    _releasedKeys[event.key.keysym.scancode] = true;
    _heldKeys[event.key.keysym.scancode] = false;
}

void input::keyDownEvent(const SDL_Event &event) {
    _pressedKeys[event.key.keysym.scancode] = true;
    _heldKeys[event.key.keysym.scancode] = true;
}

bool input::getKey(const SDL_Scancode &sc) {
    return _heldKeys[sc];
}

bool input::getKeyDown(const SDL_Scancode &sc) {
    return _pressedKeys[sc];
}

bool input::getKeyUp(const SDL_Scancode &sc) {
    return _releasedKeys[sc];
}

void input::test() {
    SDL_Log("input test");
}
