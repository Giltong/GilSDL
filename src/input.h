

#ifndef INPUT_H
#define INPUT_H
#include <map>
#include <SDL.h>

class input {
public:
    void newFrame();
    void keyUpEvent(const SDL_Event& event);
    void keyDownEvent(const SDL_Event& event);
    bool getKey(const SDL_Scancode& sc);
    bool getKeyDown(const SDL_Scancode& sc);
    bool getKeyUp(const SDL_Scancode& sc);
private:
    std::map<SDL_Scancode, bool> _heldKeys;
    std::map<SDL_Scancode, bool> _pressedKeys;
    std::map<SDL_Scancode, bool> _releasedKeys;
};


#endif //INPUT_H
