#include "engine.h"
#include <vector>
#include <string>



int main(int argc, char* argv[]) {
    Engine engine;
    engine.init("Test Window", 800,600,0,30);



    engine.start();
    return 0;
}
