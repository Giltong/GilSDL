#include <iostream>
#include "engine.h"
#include "FunnyFace.h"
#include <SDL.h>
#include <vector>
#include <string>
Engine* engine;

int main(int argc, char* argv[]) {
    engine = new Engine();
    engine->init("Test Window", 800,600,0,30);
    std::string path = "../assets/sprites/testImage.bmp";
    auto * face1 = new FunnyFace(0, 0, path);
    engine->addObject(face1);




    engine->start();
    return 0;
}
