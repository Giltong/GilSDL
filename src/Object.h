

#ifndef OBJECT_H
#define OBJECT_H
#include <string>
#include "input.h"
class Object {
public:
    Object(int x, int y, std::string path);
    Object(int x = 0, int y = 0);
    virtual void update(double dt);
    void setInput(input& input);
    bool getVisibility() const {return visibility;};
    bool getUsingInput() const {return usingInput;};
public:
    double x;
    double y;
    double w = 1.0;
    double h = 1.0;

    std::string path;
protected:
    input* _in;
    bool visibility = false;
    bool usingInput = false;
};


#endif //OBJECT_H
