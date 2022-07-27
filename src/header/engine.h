#ifndef ENGINE_H
#define ENGINE_H
#include <graphics.h>
class Engine {
private:
    Graphics* _graphics;
public:
    void init(const char* title, int width, int height, int window_flags, int fps);
    void mainloop();
};
#endif //ENGINE_H
