#include "Point.h"

Point::Point(double x, double y, double z) : x(x), y(y), z(z) {}

Point::~Point() {}

void Point::display() const {
    cout << "(x = " << x << ", y = " << y << ", z = " << z << ")" << endl;
}
