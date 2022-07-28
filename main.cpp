#include <iostream>
#include <engine.h>
#include <SDL.h>

Engine* engine;

int main(int argc, char* argv[]) {
    engine = new Engine();
    engine->init("Test Window", 800,600,0,30);
    engine->mainloop();
    return 0;
}
