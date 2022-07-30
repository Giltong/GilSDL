

#ifndef INPUTTESTOBJECT_H
#define INPUTTESTOBJECT_H


#include "Object.h"

class inputTestObject : public Object{
public:
    inputTestObject(int x, int y, std::string path);
private:
    void update(double dt) override;
};


#endif //INPUTTESTOBJECT_H
