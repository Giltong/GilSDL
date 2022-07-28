

#ifndef OBJECT_H
#define OBJECT_H
#include <string>
class Object {
public:
    Object(int x, int y, std::string path);
    Object(int x = 0, int y = 0);
    virtual void update(double dt);
    bool getVisibility() const {return visibility;};
    double x;
    double y;
    double w = 1.0;
    double h = 1.0;
    std::string path;
protected:
    bool visibility;
};


#endif //OBJECT_H
