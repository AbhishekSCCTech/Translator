#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y, int z) : x(x), y(y), z(z) {}

Point::~Point() {}

void Point::get_coord() const {
    cout << "(x = " << x << ", y = " << y << ", z = " << z << ")" << endl;
}



