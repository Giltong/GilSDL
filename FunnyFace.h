

#ifndef FUNNYFACE_H
#define FUNNYFACE_H
#include "src/Object.h"

class FunnyFace : public Object{
public:
    FunnyFace(int x, int y, std::string assetLocation);
    void update(double dt) override;
};


#endif //FUNNYFACE_H
