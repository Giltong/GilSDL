#ifndef ENGINE_H
#define ENGINE_H
#include "graphics.h"
#include "Object.h"
#include <functional>
#include <SDL.h>
#include <vector>
class Engine {
private:
    Graphics* _graphics{};
    std::vector<Object*> objects;
    int pollEvents();
    void update(double dt);
    void draw();

public:
    void init(const char* title, int width, int height, int window_flags, int fps);
    void start();
    void addObject(Object *object);
};
#endif //ENGINE_H
