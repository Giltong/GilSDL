#include <iostream>
#include "engine.h"
#include "Object.h"
#include "FunnyFace.h"
#include <SDL.h>
#include <vector>
Engine* engine;

int main(int argc, char* argv[]) {
    engine = new Engine();
    engine->init("Test Window", 800,600,0,30);

    FunnyFace * face1 = new FunnyFace(0,0,"../assets/sprites/testImage.bmp");
    engine->addObject(face1);




    engine->start();
    return 0;
}
