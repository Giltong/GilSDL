

#ifndef OBJECT_H
#define OBJECT_H
#include <string>
class Object {
public:
    Object(int x, int y, std::string* assetLocation);
    Object(int x = 0, int y = 0);
    virtual void update(double dt);
protected:
    int x;
    int y;
    int w;
    int h;
    std::string* assetLocation = nullptr;
};


#endif //OBJECT_H
