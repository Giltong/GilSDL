#include <iostream>
#include <engine.h>
#include <SDL.h>
int main(int argc, char* argv[]) {
    Engine engine;
    engine.init("Test Window", 800,600,0,30);
    engine.mainloop();
    return 0;
}
