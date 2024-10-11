#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y, int z) : x(x), y(y), z(z) {}

Point::~Point() {}

array<int, 3> Point::get_coord() const {
    return {x, y, z};
}




